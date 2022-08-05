/**
 *
 * @file SYSCTL_StatusIRQVector.c
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
#include "DriverLib/SYSCTL/Driver/xHeader/SYSCTL_StatusIRQVector.h"

#include "DriverLib/SYSCTL/Driver/xHeader/SYSCTL_EnableIRQVector.h"
#include "DriverLib/SYSCTL/Driver/xHeader/SYSCTL_RegisterIRQVector.h"
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"
#include "DriverLib/MCU/MCU.h"

void SYSCTL__vClearStatusIRQVector(SYSCTL_nVECTOR_IRQ enIrqVectorArg)
{
    uint16_t u16IrqBitReg;
    uint16_t u16IrqGroupReg;
    uint16_t u16InterruptStatus;
    MCU__pvfIRQVectorHandler_t pvfIrqVectorHandler;
    SYSCTL_nINT_STATUS enStatusReg;
    SYSCTL_nENABLE enEnableReg;

    if((uint16_t) SYSCTL_enVECTOR_IRQ_RESET != (uint16_t) enIrqVectorArg)
    {
        if((uint16_t) SYSCTL_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
        {
            enStatusReg = SYSCTL__enGetStatusIRQVector(enIrqVectorArg);
            if(SYSCTL_enINT_STATUS_OCCUR == enStatusReg)
            {
                pvfIrqVectorHandler = SYSCTL__pfvGetIRQVectorHandler(enIrqVectorArg);
                SYSCTL__vRegisterIRQVectorHandler(&MCU__pvIRQVectorHandler_Clear, (MCU__pvfIRQVectorHandler_t*) 0U, enIrqVectorArg);
                enEnableReg = SYSCTL__enGetEnableIRQVector(enIrqVectorArg);
                if(SYSCTL_enENABLE_DIS == enEnableReg)
                {
                    SYSCTL__vEnableIRQVector(enIrqVectorArg);
                }

                u16InterruptStatus = MCU__u16EnaGlobalInterrupt_Debug();
                do
                {
                    enStatusReg = SYSCTL__enGetStatusIRQVector(enIrqVectorArg);
                }while(SYSCTL_enINT_STATUS_OCCUR == enStatusReg);
                MCU__vSetGlobalStatus(u16InterruptStatus);

                if(SYSCTL_enENABLE_DIS == enEnableReg)
                {
                    SYSCTL__vDisableIRQVector(enIrqVectorArg);
                }
                SYSCTL__vRegisterIRQVectorHandler(pvfIrqVectorHandler, (MCU__pvfIRQVectorHandler_t*) 0U, enIrqVectorArg);
            }
        }
        else if((uint16_t) SYSCTL_enVECTOR_IRQ_RTOS >= (uint16_t) enIrqVectorArg)
        {
            u16IrqBitReg = (uint16_t) enIrqVectorArg;
            u16IrqBitReg -= 1U;

            u16IrqGroupReg = 1U;
            u16IrqGroupReg <<= u16IrqBitReg;
            MCU__vClearInterruptStatus(u16IrqGroupReg);
        }
        else
        {
            /*ILLEGAL, EMU, NMI, USER always are active, they can not be disabled*/
        }
    }
}

SYSCTL_nINT_STATUS SYSCTL__enGetStatusIRQVector(SYSCTL_nVECTOR_IRQ enIrqVectorArg)
{

    SYSCTL_Register_t stRegister;
    uint16_t u16IrqVectorReg;
    uint16_t u16IrqBitReg;
    uint16_t u16IrqGroupReg;
    uint16_t u16StatusReg;
    SYSCTL_nINT_STATUS enStatusReg = SYSCTL_enINT_STATUS_NOOCCUR;

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
            u16IrqVectorReg += SYSCTL_GROUP1_OFFSET + SYSCTL_IFR_OFFSET;

            stRegister.u16Shift = u16IrqBitReg;
            stRegister.u16Mask = SYSCTL_GROUP_IFR_IF1_MASK;
            stRegister.uptrAddress = u16IrqVectorReg;
            enStatusReg = (SYSCTL_nINT_STATUS) SYSCTL__u16ReadRegister(&stRegister);
        }
        else if((uint16_t) SYSCTL_enVECTOR_IRQ_RTOS >= (uint16_t) enIrqVectorArg)
        {
            u16IrqBitReg = (uint16_t) enIrqVectorArg;
            u16IrqBitReg -= 1U;

            u16IrqGroupReg = 1U;
            u16IrqGroupReg <<= u16IrqBitReg;
            u16StatusReg = MCU__u16GetInterruptStatus();
            u16StatusReg &= u16IrqGroupReg;
            if(0U != u16StatusReg)
            {
                enStatusReg = SYSCTL_enINT_STATUS_OCCUR;
            }
            else
            {
                enStatusReg = SYSCTL_enINT_STATUS_NOOCCUR;
            }
        }
        else
        {
            /*ILLEGAL, EMU, NMI, USER always are active, they are always Statusd*/
        }
    }
    return (enStatusReg);
}






