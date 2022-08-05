/**
 *
 * @file SYSCTL_EnableIRQVector.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 28 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/SYSCTL/Driver/xHeader/SYSCTL_EnableIRQVector.h"
#include "DriverLib/SYSCTL/Driver/xHeader/SYSCTL_AcknowledgeIRQVector.h"
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"
#include "DriverLib/MCU/MCU.h"

void SYSCTL__vEnableIRQVector(SYSCTL_nVECTOR_IRQ enIrqVectorArg)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16IrqVectorReg;
    uint16_t u16IrqBitReg;
    uint16_t u16IrqGroupReg;
    uint16_t u16IerStatus;

    if((uint16_t) SYSCTL_enVECTOR_IRQ_RESET != (uint16_t) enIrqVectorArg)
    {
        if((uint16_t) SYSCTL_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
        {
            u16IrqVectorReg = (uint16_t) enIrqVectorArg;
            u16IrqVectorReg -= (uint16_t) SYSCTL_enVECTOR_IRQ_USER12 + 1U;

            u16IrqBitReg = u16IrqVectorReg;
            u16IrqBitReg &= 0x7U;

            u16IrqVectorReg >>= 3U;
            u16IrqVectorReg &= 0xFU;

            u16IrqGroupReg = 1U;
            u16IrqGroupReg <<= u16IrqVectorReg;

            u16IrqVectorReg <<= 1U;
            u16IrqVectorReg += SYSCTL_GROUP1_OFFSET + SYSCTL_IER_OFFSET;

            stRegister.u16Shift = u16IrqBitReg;
            stRegister.u16Mask = SYSCTL_GROUP_IER_IE1_MASK;
            stRegister.uptrAddress = u16IrqVectorReg;
            stRegister.u16Value = SYSCTL_GROUP_IER_IE1_ENA;
            u16IerStatus = MCU__u16GetEnaInterrupt(u16IrqGroupReg);
            SYSCTL__vWriteRegister(&stRegister);
            if(0U == u16IerStatus)
            {
                MCU__vEnaInterrupt(u16IrqGroupReg);
            }
        }
        else if((uint16_t) SYSCTL_enVECTOR_IRQ_RTOS >= (uint16_t) enIrqVectorArg)
        {
            u16IrqBitReg = (uint16_t) enIrqVectorArg;
            u16IrqBitReg -= 1U;

            u16IrqGroupReg = 1U;
            u16IrqGroupReg <<= u16IrqBitReg;
            MCU__vEnaInterrupt(u16IrqGroupReg);

        }
        else
        {
            /*ILLEGAL, EMU, NMI, USER always are active, they are NMI*/
        }
    }
}


void SYSCTL__vEnableDebugIRQVector(SYSCTL_nVECTOR_IRQ enIrqVectorArg)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16IrqVectorReg;
    uint16_t u16IrqBitReg;
    uint16_t u16IrqGroupReg;
    uint16_t u16IerStatus;
    uint16_t u16IerDbgStatus;

    if((uint16_t) SYSCTL_enVECTOR_IRQ_RESET != (uint16_t) enIrqVectorArg)
    {
        if((uint16_t) SYSCTL_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
        {
            u16IrqVectorReg = (uint16_t) enIrqVectorArg;
            u16IrqVectorReg -= (uint16_t) SYSCTL_enVECTOR_IRQ_USER12 + 1U;

            u16IrqBitReg = u16IrqVectorReg;
            u16IrqBitReg &= 0x7U;

            u16IrqVectorReg >>= 3U;
            u16IrqVectorReg &= 0xFU;

            u16IrqGroupReg = 1U;
            u16IrqGroupReg <<= u16IrqVectorReg;

            u16IrqVectorReg <<= 1U;
            u16IrqVectorReg += SYSCTL_GROUP1_OFFSET + SYSCTL_IER_OFFSET;

            stRegister.u16Shift = u16IrqBitReg;
            stRegister.u16Mask = SYSCTL_GROUP_IER_IE1_MASK;
            stRegister.uptrAddress = u16IrqVectorReg;
            stRegister.u16Value = SYSCTL_GROUP_IER_IE1_ENA;
            u16IerDbgStatus = MCU__u16GetEnaDebugInterrupt(u16IrqGroupReg);
            u16IerStatus = MCU__u16GetEnaInterrupt(u16IrqGroupReg);
            SYSCTL__vWriteRegister(&stRegister);
            if(0U == u16IerDbgStatus)
            {
                MCU__vEnaDebugInterrupt(u16IrqGroupReg);
            }
            if(0U == u16IerStatus)
            {
                MCU__vEnaInterrupt(u16IrqGroupReg);
            }
        }
        else if((uint16_t) SYSCTL_enVECTOR_IRQ_RTOS >= (uint16_t) enIrqVectorArg)
        {
            u16IrqBitReg = (uint16_t) enIrqVectorArg;
            u16IrqBitReg -= 1U;

            u16IrqGroupReg = 1U;
            u16IrqGroupReg <<= u16IrqBitReg;
            MCU__vEnaDebugInterrupt(u16IrqGroupReg);
            MCU__vEnaInterrupt(u16IrqGroupReg);

        }
        else
        {
            /*ILLEGAL, EMU, NMI, USER always are active, they are NMI*/
        }
    }
}

void SYSCTL__vDisableIRQVector(SYSCTL_nVECTOR_IRQ enIrqVectorArg)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16IrqVectorReg;
    uint16_t u16IrqBitReg;
    uint16_t u16IrqGroupReg;
    uint16_t u16InterruptStatus;
    uint16_t u16GroupStatus;

    if((uint16_t) SYSCTL_enVECTOR_IRQ_RESET != (uint16_t) enIrqVectorArg)
    {
        if((uint16_t) SYSCTL_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
        {
            u16IrqVectorReg = (uint16_t) enIrqVectorArg;
            u16IrqVectorReg -= (uint16_t) SYSCTL_enVECTOR_IRQ_USER12 + 1U;

            u16IrqBitReg = u16IrqVectorReg;
            u16IrqBitReg &= 0x7U;

            u16IrqVectorReg >>= 3U;
            u16IrqVectorReg &= 0xFU;

            u16IrqGroupReg = 1U;
            u16IrqGroupReg <<= u16IrqVectorReg;

            u16IrqVectorReg <<= 1U;
            u16IrqVectorReg += SYSCTL_GROUP1_OFFSET + SYSCTL_IER_OFFSET;

            stRegister.u16Shift = u16IrqBitReg;
            stRegister.u16Mask = SYSCTL_GROUP_IER_IE1_MASK;
            stRegister.uptrAddress = u16IrqVectorReg;
            stRegister.u16Value = SYSCTL_GROUP_IER_IE1_DIS;

            u16InterruptStatus = MCU__u16DisGlobalInterrupt_Debug();
            SYSCTL__vWriteRegister(&stRegister);
            MCU__vRepeatNoOperation(#5);
            MCU__vClearInterruptStatus(u16IrqGroupReg);
            SYSCTL__vClearAcknowledgeIRQVector(enIrqVectorArg);

            stRegister.u16Shift = SYSCTL_GROUP_IER_R_IE1_BIT;
            stRegister.u16Mask = 0xFFFFU;
            stRegister.uptrAddress = u16IrqVectorReg;
            u16GroupStatus = SYSCTL__u16ReadRegister(&stRegister);
            if(0U == u16GroupStatus)
            {
                MCU__vDisInterrupt(u16IrqGroupReg);
            }
            MCU__vSetGlobalStatus(u16InterruptStatus);
        }
        else if((uint16_t) SYSCTL_enVECTOR_IRQ_RTOS >= (uint16_t) enIrqVectorArg)
        {
            u16IrqBitReg = (uint16_t) enIrqVectorArg;
            u16IrqBitReg -= 1U;

            u16IrqGroupReg = 1U;
            u16IrqGroupReg <<= u16IrqBitReg;
            MCU__vDisInterrupt(u16IrqGroupReg);
        }
        else
        {
            /*ILLEGAL, EMU, NMI, USER always are active, they can not be disabled*/
        }
    }
}

void SYSCTL__vDisableDebugIRQVector(SYSCTL_nVECTOR_IRQ enIrqVectorArg)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16IrqVectorReg;
    uint16_t u16IrqBitReg;
    uint16_t u16IrqGroupReg;
    uint16_t u16InterruptStatus;
    uint16_t u16GroupStatus;

    if((uint16_t) SYSCTL_enVECTOR_IRQ_RESET != (uint16_t) enIrqVectorArg)
    {
        if((uint16_t) SYSCTL_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
        {
            u16IrqVectorReg = (uint16_t) enIrqVectorArg;
            u16IrqVectorReg -= (uint16_t) SYSCTL_enVECTOR_IRQ_USER12 + 1U;

            u16IrqBitReg = u16IrqVectorReg;
            u16IrqBitReg &= 0x7U;

            u16IrqVectorReg >>= 3U;
            u16IrqVectorReg &= 0xFU;

            u16IrqGroupReg = 1U;
            u16IrqGroupReg <<= u16IrqVectorReg;

            u16IrqVectorReg <<= 1U;
            u16IrqVectorReg += SYSCTL_GROUP1_OFFSET + SYSCTL_IER_OFFSET;

            stRegister.u16Shift = u16IrqBitReg;
            stRegister.u16Mask = SYSCTL_GROUP_IER_IE1_MASK;
            stRegister.uptrAddress = u16IrqVectorReg;
            stRegister.u16Value = SYSCTL_GROUP_IER_IE1_DIS;

            u16InterruptStatus = MCU__u16DisGlobalInterrupt_Debug();
            SYSCTL__vWriteRegister(&stRegister);
            MCU__vRepeatNoOperation(#5);
            MCU__vClearInterruptStatus(u16IrqGroupReg);
            SYSCTL__vClearAcknowledgeIRQVector(enIrqVectorArg);

            stRegister.u16Shift = SYSCTL_GROUP_IER_R_IE1_BIT;
            stRegister.u16Mask = 0xFFFFU;
            stRegister.uptrAddress = u16IrqVectorReg;
            u16GroupStatus = SYSCTL__u16ReadRegister(&stRegister);
            if(0U == u16GroupStatus)
            {
                MCU__vDisDebugInterrupt(u16IrqGroupReg);
                MCU__vDisInterrupt(u16IrqGroupReg);
            }
            MCU__vSetGlobalStatus(u16InterruptStatus);
        }
        else if((uint16_t) SYSCTL_enVECTOR_IRQ_RTOS >= (uint16_t) enIrqVectorArg)
        {
            u16IrqBitReg = (uint16_t) enIrqVectorArg;
            u16IrqBitReg -= 1U;

            u16IrqGroupReg = 1U;
            u16IrqGroupReg <<= u16IrqBitReg;
            MCU__vDisDebugInterrupt(u16IrqGroupReg);
            MCU__vDisInterrupt(u16IrqGroupReg);
        }
        else
        {
            /*ILLEGAL, EMU, NMI, USER always are active, they can not be disabled*/
        }
    }
}

SYSCTL_nENABLE SYSCTL__enGetEnableIRQVector(SYSCTL_nVECTOR_IRQ enIrqVectorArg)
{

    SYSCTL_Register_t stRegister;
    uint16_t u16IrqVectorReg;
    uint16_t u16IrqBitReg;
    uint16_t u16IrqGroupReg;
    SYSCTL_nENABLE enEnableReg = SYSCTL_enENABLE_ENA;

    if((uint16_t) SYSCTL_enVECTOR_IRQ_RESET != (uint16_t) enIrqVectorArg)
    {
        if((uint16_t) SYSCTL_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
        {
            u16IrqVectorReg = (uint16_t) enIrqVectorArg;
            u16IrqVectorReg -= (uint16_t) SYSCTL_enVECTOR_IRQ_USER12 + 1U;

            u16IrqBitReg = u16IrqVectorReg;
            u16IrqBitReg &= 0x7U;

            u16IrqVectorReg >>= 3U;
            u16IrqVectorReg &= 0xFU;

            u16IrqVectorReg <<= 1U;
            u16IrqVectorReg += SYSCTL_GROUP1_OFFSET + SYSCTL_IER_OFFSET;

            stRegister.u16Shift = u16IrqBitReg;
            stRegister.u16Mask = SYSCTL_GROUP_IER_IE1_MASK;
            stRegister.uptrAddress = u16IrqVectorReg;
            enEnableReg = (SYSCTL_nENABLE) SYSCTL__u16ReadRegister(&stRegister);
        }
        else if((uint16_t) SYSCTL_enVECTOR_IRQ_RTOS >= (uint16_t) enIrqVectorArg)
        {
            u16IrqBitReg = (uint16_t) enIrqVectorArg;
            u16IrqBitReg -= 1U;

            u16IrqGroupReg = 1U;
            u16IrqGroupReg <<= u16IrqBitReg;
            enEnableReg = (SYSCTL_nENABLE) MCU__u16GetEnaInterrupt(u16IrqGroupReg);
        }
        else
        {
            /*ILLEGAL, EMU, NMI, USER always are active, they are always enabled*/
        }
    }
    return (enEnableReg);
}




