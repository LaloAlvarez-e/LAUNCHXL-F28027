/**
 *
 * @file FLASH_StatusIRQVector.c
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
#include "DriverLib/FLASH/Driver/xHeader/FLASH_StatusIRQVector.h"

#include "DriverLib/FLASH/Driver/xHeader/FLASH_EnableIRQVector.h"
#include "DriverLib/FLASH/Driver/xHeader/FLASH_RegisterIRQVector.h"
#include "DriverLib/FLASH/Driver/Intrinsics/FLASH_Intrinsics.h"
#include "DriverLib/FLASH/Peripheral/FLASH_Peripheral.h"
#include "DriverLib/MCU/MCU.h"

void FLASH__vClearStatusIRQVector(FLASH_nVECTOR_IRQ enIrqVectorArg)
{
    uint16_t u16IrqBitReg;
    uint16_t u16IrqGroupReg;
    uint16_t u16InterruptStatus;
    MCU__pvfIRQVectorHandler_t pvfIrqVectorHandler;
    FLASH_nINT_STATUS enStatusReg;
    FLASH_nENABLE enEnableReg;

    if((uint16_t) FLASH_enVECTOR_IRQ_RESET != (uint16_t) enIrqVectorArg)
    {
        if((uint16_t) FLASH_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
        {
            enStatusReg = FLASH__enGetStatusIRQVector(enIrqVectorArg);
            if(FLASH_enINT_STATUS_OCCUR == enStatusReg)
            {
                pvfIrqVectorHandler = FLASH__pfvGetIRQVectorHandler(enIrqVectorArg);
                FLASH__vRegisterIRQVectorHandler(&MCU__pvIRQVectorHandler_Clear, (MCU__pvfIRQVectorHandler_t*) 0U, enIrqVectorArg);
                enEnableReg = FLASH__enGetEnableIRQVector(enIrqVectorArg);
                if(FLASH_enENABLE_DIS == enEnableReg)
                {
                    FLASH__vEnableIRQVector(enIrqVectorArg);
                }

                u16InterruptStatus = MCU__u16EnaGlobalInterrupt_Debug();
                do
                {
                    enStatusReg = FLASH__enGetStatusIRQVector(enIrqVectorArg);
                }while(FLASH_enINT_STATUS_OCCUR == enStatusReg);
                MCU__vSetGlobalStatus(u16InterruptStatus);

                if(FLASH_enENABLE_DIS == enEnableReg)
                {
                    FLASH__vDisableIRQVector(enIrqVectorArg);
                }
                FLASH__vRegisterIRQVectorHandler(pvfIrqVectorHandler, (MCU__pvfIRQVectorHandler_t*) 0U, enIrqVectorArg);
            }
        }
        else if((uint16_t) FLASH_enVECTOR_IRQ_RTOS >= (uint16_t) enIrqVectorArg)
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

FLASH_nINT_STATUS FLASH__enGetStatusIRQVector(FLASH_nVECTOR_IRQ enIrqVectorArg)
{

    FLASH_Register_t stRegister;
    uint16_t u16IrqVectorReg;
    uint16_t u16IrqBitReg;
    uint16_t u16IrqGroupReg;
    uint16_t u16StatusReg;
    FLASH_nINT_STATUS enStatusReg = FLASH_enINT_STATUS_NOOCCUR;

    if((uint16_t) FLASH_enVECTOR_IRQ_RESET != (uint16_t) enIrqVectorArg)
    {
        if((uint16_t) FLASH_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
        {
            u16IrqVectorReg = (uint16_t) enIrqVectorArg;
            u16IrqVectorReg -= (uint16_t) FLASH_enVECTOR_IRQ_USER12 + 1U;

            u16IrqBitReg = u16IrqVectorReg;
            u16IrqBitReg &= 0x7U;

            u16IrqVectorReg >>= 3U;
            u16IrqVectorReg &= 0xFU;

            u16IrqVectorReg <<= 1U;
            u16IrqVectorReg += FLASH_GROUP1_OFFSET + FLASH_IFR_OFFSET;

            stRegister.u16Shift = u16IrqBitReg;
            stRegister.u16Mask = FLASH_GROUP_IFR_IF1_MASK;
            stRegister.uptrAddress = u16IrqVectorReg;
            enStatusReg = (FLASH_nINT_STATUS) FLASH__u16ReadRegister(&stRegister);
        }
        else if((uint16_t) FLASH_enVECTOR_IRQ_RTOS >= (uint16_t) enIrqVectorArg)
        {
            u16IrqBitReg = (uint16_t) enIrqVectorArg;
            u16IrqBitReg -= 1U;

            u16IrqGroupReg = 1U;
            u16IrqGroupReg <<= u16IrqBitReg;
            u16StatusReg = MCU__u16GetInterruptStatus();
            u16StatusReg &= u16IrqGroupReg;
            if(0U != u16StatusReg)
            {
                enStatusReg = FLASH_enINT_STATUS_OCCUR;
            }
            else
            {
                enStatusReg = FLASH_enINT_STATUS_NOOCCUR;
            }
        }
        else
        {
            /*ILLEGAL, EMU, NMI, USER always are active, they are always Statusd*/
        }
    }
    return (enStatusReg);
}






