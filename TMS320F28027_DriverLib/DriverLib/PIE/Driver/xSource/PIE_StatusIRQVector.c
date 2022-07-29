/**
 *
 * @file PIE_StatusIRQVector.c
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
#include "DriverLib/PIE/Driver/xHeader/PIE_StatusIRQVector.h"

#include "DriverLib/PIE/Driver/xHeader/PIE_EnableIRQVector.h"
#include "DriverLib/PIE/Driver/xHeader/PIE_RegisterIRQVector.h"
#include "DriverLib/PIE/Driver/Intrinsics/PIE_Intrinsics.h"
#include "DriverLib/PIE/Peripheral/PIE_Peripheral.h"
#include "DriverLib/MCU/MCU.h"

void PIE__vClearStatusIRQVector(PIE_nVECTOR_IRQ enIrqVectorArg)
{
    uint16_t u16IrqBitReg;
    uint16_t u16IrqGroupReg;
    uint16_t u16InterruptStatus;
    MCU__pvfIRQVectorHandler_t pvfIrqVectorHandler;
    PIE_nINT_STATUS enStatusReg;
    PIE_nENABLE enEnableReg;

    if((uint16_t) PIE_enVECTOR_IRQ_RESET != (uint16_t) enIrqVectorArg)
    {
        if((uint16_t) PIE_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
        {
            enStatusReg = PIE__enGetStatusIRQVector(enIrqVectorArg);
            if(PIE_enINT_STATUS_OCCUR == enStatusReg)
            {
                pvfIrqVectorHandler = PIE__pfvGetIRQVectorHandler(enIrqVectorArg);
                PIE__vRegisterIRQVectorHandler(&MCU__pvIRQVectorHandler_Clear, (MCU__pvfIRQVectorHandler_t*) 0U, enIrqVectorArg);
                enEnableReg = PIE__enGetEnableIRQVector(enIrqVectorArg);
                if(PIE_enENABLE_DIS == enEnableReg)
                {
                    PIE__vEnableIRQVector(enIrqVectorArg);
                }

                u16InterruptStatus = MCU__u16EnaGlobalInterrupt_Debug();
                do
                {
                    enStatusReg = PIE__enGetStatusIRQVector(enIrqVectorArg);
                }while(PIE_enINT_STATUS_OCCUR == enStatusReg);
                MCU__vSetGlobalStatus(u16InterruptStatus);

                if(PIE_enENABLE_DIS == enEnableReg)
                {
                    PIE__vDisableIRQVector(enIrqVectorArg);
                }
                PIE__vRegisterIRQVectorHandler(pvfIrqVectorHandler, (MCU__pvfIRQVectorHandler_t*) 0U, enIrqVectorArg);
            }
        }
        else if((uint16_t) PIE_enVECTOR_IRQ_RTOS >= (uint16_t) enIrqVectorArg)
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

PIE_nINT_STATUS PIE__enGetStatusIRQVector(PIE_nVECTOR_IRQ enIrqVectorArg)
{

    PIE_Register_t stRegister;
    uint16_t u16IrqVectorReg;
    uint16_t u16IrqBitReg;
    uint16_t u16IrqGroupReg;
    uint16_t u16StatusReg;
    PIE_nINT_STATUS enStatusReg = PIE_enINT_STATUS_NOOCCUR;

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
            u16IrqVectorReg += PIE_GROUP1_OFFSET + PIE_IFR_OFFSET;

            stRegister.u16Shift = u16IrqBitReg;
            stRegister.u16Mask = PIE_GROUP_IFR_IF1_MASK;
            stRegister.uptrAddress = u16IrqVectorReg;
            enStatusReg = (PIE_nINT_STATUS) PIE__u16ReadRegister(&stRegister);
        }
        else if((uint16_t) PIE_enVECTOR_IRQ_RTOS >= (uint16_t) enIrqVectorArg)
        {
            u16IrqBitReg = (uint16_t) enIrqVectorArg;
            u16IrqBitReg -= 1U;

            u16IrqGroupReg = 1U;
            u16IrqGroupReg <<= u16IrqBitReg;
            u16StatusReg = MCU__u16GetInterruptStatus();
            u16StatusReg &= u16IrqGroupReg;
            if(0U != u16StatusReg)
            {
                enStatusReg = PIE_enINT_STATUS_OCCUR;
            }
            else
            {
                enStatusReg = PIE_enINT_STATUS_NOOCCUR;
            }
        }
        else
        {
            /*ILLEGAL, EMU, NMI, USER always are active, they are always Statusd*/
        }
    }
    return (enStatusReg);
}






