/**
 *
 * @file PIE_EnableIRQVector.c
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
#include "DriverLib/PIE/Driver/xHeader/PIE_EnableIRQVector.h"
#include "DriverLib/PIE/Driver/xHeader/PIE_AcknowledgeIRQVector.h"
#include "DriverLib/PIE/Driver/Intrinsics/PIE_Intrinsics.h"
#include "DriverLib/PIE/Peripheral/PIE_Peripheral.h"
#include "DriverLib/MCU/MCU.h"

void PIE__vEnableIRQVector(PIE_nVECTOR_IRQ enIrqVectorArg)
{
    PIE_Register_t stRegister;
    uint16_t u16IrqVectorReg;
    uint16_t u16IrqBitReg;
    uint16_t u16IrqGroupReg;
    uint16_t u16IerStatus;

    if((uint16_t) PIE_enVECTOR_IRQ_RESET != (uint16_t) enIrqVectorArg)
    {
        if((uint16_t) PIE_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
        {
            u16IrqVectorReg = (uint16_t) enIrqVectorArg;
            u16IrqVectorReg -= (uint16_t) PIE_enVECTOR_IRQ_USER12 + 1U;

            u16IrqBitReg = u16IrqVectorReg;
            u16IrqBitReg &= 0x7U;

            u16IrqVectorReg >>= 3U;
            u16IrqVectorReg &= 0xFU;

            u16IrqGroupReg = 1U;
            u16IrqGroupReg <<= u16IrqVectorReg;

            u16IrqVectorReg <<= 1U;
            u16IrqVectorReg += PIE_GROUP1_OFFSET + PIE_IER_OFFSET;

            stRegister.u16Shift = u16IrqBitReg;
            stRegister.u16Mask = PIE_GROUP_IER_IE1_MASK;
            stRegister.uptrAddress = u16IrqVectorReg;
            stRegister.u16Value = PIE_GROUP_IER_IE1_ENA;
            u16IerStatus = MCU__u16GetEnaInterrupt(u16IrqGroupReg);
            PIE__vWriteRegister(&stRegister);
            if(0U == u16IerStatus)
            {
                MCU__vEnaInterrupt(u16IrqGroupReg);
            }
        }
        else if((uint16_t) PIE_enVECTOR_IRQ_RTOS >= (uint16_t) enIrqVectorArg)
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

void PIE__vDisableIRQVector(PIE_nVECTOR_IRQ enIrqVectorArg)
{
    PIE_Register_t stRegister;
    uint16_t u16IrqVectorReg;
    uint16_t u16IrqBitReg;
    uint16_t u16IrqGroupReg;
    uint16_t u16InterruptStatus;
    uint16_t u16GroupStatus;

    if((uint16_t) PIE_enVECTOR_IRQ_RESET != (uint16_t) enIrqVectorArg)
    {
        if((uint16_t) PIE_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
        {
            u16IrqVectorReg = (uint16_t) enIrqVectorArg;
            u16IrqVectorReg -= (uint16_t) PIE_enVECTOR_IRQ_USER12 + 1U;

            u16IrqBitReg = u16IrqVectorReg;
            u16IrqBitReg &= 0x7U;

            u16IrqVectorReg >>= 3U;
            u16IrqVectorReg &= 0xFU;

            u16IrqGroupReg = 1U;
            u16IrqGroupReg <<= u16IrqVectorReg;

            u16IrqVectorReg <<= 1U;
            u16IrqVectorReg += PIE_GROUP1_OFFSET + PIE_IER_OFFSET;

            stRegister.u16Shift = u16IrqBitReg;
            stRegister.u16Mask = PIE_GROUP_IER_IE1_MASK;
            stRegister.uptrAddress = u16IrqVectorReg;
            stRegister.u16Value = PIE_GROUP_IER_IE1_DIS;

            u16InterruptStatus = MCU__u16DisGlobalInterrupt_Debug();
            PIE__vWriteRegister(&stRegister);
            MCU__vRepeatNoOperation(#5);
            MCU__vClearInterruptStatus(u16IrqGroupReg);
            PIE__vClearAcknowledgeIRQVector(enIrqVectorArg);

            stRegister.u16Shift = PIE_GROUP_IER_R_IE1_BIT;
            stRegister.u16Mask = 0xFFFFU;
            stRegister.uptrAddress = u16IrqVectorReg;
            u16GroupStatus = PIE__u16ReadRegister(&stRegister);
            if(0U == u16GroupStatus)
            {
                MCU__vDisInterrupt(u16IrqGroupReg);
            }
            MCU__vSetGlobalStatus(u16InterruptStatus);
        }
        else if((uint16_t) PIE_enVECTOR_IRQ_RTOS >= (uint16_t) enIrqVectorArg)
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

PIE_nENABLE PIE__enGetEnableIRQVector(PIE_nVECTOR_IRQ enIrqVectorArg)
{

    PIE_Register_t stRegister;
    uint16_t u16IrqVectorReg;
    uint16_t u16IrqBitReg;
    uint16_t u16IrqGroupReg;
    PIE_nENABLE enEnableReg = PIE_enENABLE_ENA;

    if((uint16_t) PIE_enVECTOR_IRQ_RESET != (uint16_t) enIrqVectorArg)
    {
        if((uint16_t) PIE_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
        {
            u16IrqVectorReg = (uint16_t) enIrqVectorArg;
            u16IrqVectorReg -= (uint16_t) PIE_enVECTOR_IRQ_USER12 + 1U;

            u16IrqBitReg = u16IrqVectorReg;
            u16IrqBitReg &= 0x7U;

            u16IrqVectorReg >>= 3U;
            u16IrqVectorReg &= 0xFU;

            u16IrqVectorReg <<= 1U;
            u16IrqVectorReg += PIE_GROUP1_OFFSET + PIE_IER_OFFSET;

            stRegister.u16Shift = u16IrqBitReg;
            stRegister.u16Mask = PIE_GROUP_IER_IE1_MASK;
            stRegister.uptrAddress = u16IrqVectorReg;
            enEnableReg = (PIE_nENABLE) PIE__u16ReadRegister(&stRegister);
        }
        else if((uint16_t) PIE_enVECTOR_IRQ_RTOS >= (uint16_t) enIrqVectorArg)
        {
            u16IrqBitReg = (uint16_t) enIrqVectorArg;
            u16IrqBitReg -= 1U;

            u16IrqGroupReg = 1U;
            u16IrqGroupReg <<= u16IrqBitReg;
            enEnableReg = (PIE_nENABLE) MCU__u16GetEnaInterrupt(u16IrqGroupReg);
        }
        else
        {
            /*ILLEGAL, EMU, NMI, USER always are active, they are always enabled*/
        }
    }
    return (enEnableReg);
}




