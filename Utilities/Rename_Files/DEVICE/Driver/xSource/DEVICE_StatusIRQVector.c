/**
 *
 * @file DEVICE_StatusIRQVector.c
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
#include "DriverLib/DEVICE/Driver/xHeader/DEVICE_StatusIRQVector.h"

#include "DriverLib/DEVICE/Driver/xHeader/DEVICE_EnableIRQVector.h"
#include "DriverLib/DEVICE/Driver/xHeader/DEVICE_RegisterIRQVector.h"
#include "DriverLib/DEVICE/Driver/Intrinsics/DEVICE_Intrinsics.h"
#include "DriverLib/DEVICE/Peripheral/DEVICE_Peripheral.h"
#include "DriverLib/MCU/MCU.h"

void DEVICE__vClearStatusIRQVector(DEVICE_nVECTOR_IRQ enIrqVectorArg)
{
    uint16_t u16IrqBitReg;
    uint16_t u16IrqGroupReg;
    uint16_t u16InterruptStatus;
    MCU__pvfIRQVectorHandler_t pvfIrqVectorHandler;
    DEVICE_nINT_STATUS enStatusReg;
    DEVICE_nENABLE enEnableReg;

    if((uint16_t) DEVICE_enVECTOR_IRQ_RESET != (uint16_t) enIrqVectorArg)
    {
        if((uint16_t) DEVICE_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
        {
            enStatusReg = DEVICE__enGetStatusIRQVector(enIrqVectorArg);
            if(DEVICE_enINT_STATUS_OCCUR == enStatusReg)
            {
                pvfIrqVectorHandler = DEVICE__pfvGetIRQVectorHandler(enIrqVectorArg);
                DEVICE__vRegisterIRQVectorHandler(&MCU__pvIRQVectorHandler_Clear, (MCU__pvfIRQVectorHandler_t*) 0U, enIrqVectorArg);
                enEnableReg = DEVICE__enGetEnableIRQVector(enIrqVectorArg);
                if(DEVICE_enENABLE_DIS == enEnableReg)
                {
                    DEVICE__vEnableIRQVector(enIrqVectorArg);
                }

                u16InterruptStatus = MCU__u16EnaGlobalInterrupt_Debug();
                do
                {
                    enStatusReg = DEVICE__enGetStatusIRQVector(enIrqVectorArg);
                }while(DEVICE_enINT_STATUS_OCCUR == enStatusReg);
                MCU__vSetGlobalStatus(u16InterruptStatus);

                if(DEVICE_enENABLE_DIS == enEnableReg)
                {
                    DEVICE__vDisableIRQVector(enIrqVectorArg);
                }
                DEVICE__vRegisterIRQVectorHandler(pvfIrqVectorHandler, (MCU__pvfIRQVectorHandler_t*) 0U, enIrqVectorArg);
            }
        }
        else if((uint16_t) DEVICE_enVECTOR_IRQ_RTOS >= (uint16_t) enIrqVectorArg)
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

DEVICE_nINT_STATUS DEVICE__enGetStatusIRQVector(DEVICE_nVECTOR_IRQ enIrqVectorArg)
{

    DEVICE_Register_t stRegister;
    uint16_t u16IrqVectorReg;
    uint16_t u16IrqBitReg;
    uint16_t u16IrqGroupReg;
    uint16_t u16StatusReg;
    DEVICE_nINT_STATUS enStatusReg = DEVICE_enINT_STATUS_NOOCCUR;

    if((uint16_t) DEVICE_enVECTOR_IRQ_RESET != (uint16_t) enIrqVectorArg)
    {
        if((uint16_t) DEVICE_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
        {
            u16IrqVectorReg = (uint16_t) enIrqVectorArg;
            u16IrqVectorReg -= (uint16_t) DEVICE_enVECTOR_IRQ_USER12 + 1U;

            u16IrqBitReg = u16IrqVectorReg;
            u16IrqBitReg &= 0x7U;

            u16IrqVectorReg >>= 3U;
            u16IrqVectorReg &= 0xFU;

            u16IrqVectorReg <<= 1U;
            u16IrqVectorReg += DEVICE_GROUP1_OFFSET + DEVICE_IFR_OFFSET;

            stRegister.u16Shift = u16IrqBitReg;
            stRegister.u16Mask = DEVICE_GROUP_IFR_IF1_MASK;
            stRegister.uptrAddress = u16IrqVectorReg;
            enStatusReg = (DEVICE_nINT_STATUS) DEVICE__u16ReadRegister(&stRegister);
        }
        else if((uint16_t) DEVICE_enVECTOR_IRQ_RTOS >= (uint16_t) enIrqVectorArg)
        {
            u16IrqBitReg = (uint16_t) enIrqVectorArg;
            u16IrqBitReg -= 1U;

            u16IrqGroupReg = 1U;
            u16IrqGroupReg <<= u16IrqBitReg;
            u16StatusReg = MCU__u16GetInterruptStatus();
            u16StatusReg &= u16IrqGroupReg;
            if(0U != u16StatusReg)
            {
                enStatusReg = DEVICE_enINT_STATUS_OCCUR;
            }
            else
            {
                enStatusReg = DEVICE_enINT_STATUS_NOOCCUR;
            }
        }
        else
        {
            /*ILLEGAL, EMU, NMI, USER always are active, they are always Statusd*/
        }
    }
    return (enStatusReg);
}






