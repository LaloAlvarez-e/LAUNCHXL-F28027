/**
 *
 * @file FLASH_AcknowledgeIRQVector.c
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
#include <DriverLib/FLASH/Driver/xHeader/FLASH_AcknowledgeIRQVector.h>
#include "DriverLib/FLASH/Driver/Intrinsics/FLASH_Intrinsics.h"
#include "DriverLib/FLASH/Peripheral/FLASH_Peripheral.h"

void FLASH__vClearAcknowledgeIRQVector(FLASH_nVECTOR_IRQ enIrqVectorArg)
{
    FLASH_Register_t stRegister;
    uint16_t u16IrqVectorReg;
    if((uint16_t) FLASH_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
    {
        u16IrqVectorReg = (uint16_t) enIrqVectorArg;
        u16IrqVectorReg -= (uint16_t) FLASH_enVECTOR_IRQ_USER12 + 1U;
        u16IrqVectorReg >>= 3U;
        u16IrqVectorReg &= 0xFU;

        stRegister.u16Shift = u16IrqVectorReg;
        stRegister.u16Mask = FLASH_ACK_ACK_GROUP1;
        stRegister.uptrAddress = FLASH_ACK_OFFSET;
        stRegister.u16Value = FLASH_ACK_ACK_GROUP1;
        FLASH__vWriteRegister(&stRegister);
    }

}

void FLASH__vClearAllAcknowledgeIRQVector(void)
{
    FLASH_Register_t stRegister;
    stRegister.u16Shift = FLASH_ACK_R_ACK_BIT;
    stRegister.u16Mask = FLASH_ACK_R_ACK_MASK;
    stRegister.uptrAddress = FLASH_ACK_OFFSET;
    stRegister.u16Value = FLASH_ACK_R_ACK_MASK;
    FLASH__vWriteRegister(&stRegister);


}

FLASH_nACK FLASH__enGetAcknowledgeIRQVector(FLASH_nVECTOR_IRQ enIrqVectorArg)
{
    FLASH_Register_t stRegister;
    uint16_t u16IrqVectorReg;
    FLASH_nACK enACKValue = FLASH_enACK_UNBLOCKED;
    if((uint16_t) FLASH_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
    {
        u16IrqVectorReg = (uint16_t) enIrqVectorArg;
        u16IrqVectorReg -= (uint16_t) FLASH_enVECTOR_IRQ_USER12 + 1U;
        u16IrqVectorReg >>= 3U;
        u16IrqVectorReg &= 0xFU;

        stRegister.u16Shift = u16IrqVectorReg;
        stRegister.u16Mask = FLASH_ACK_ACK_GROUP1;
        stRegister.uptrAddress = FLASH_ACK_OFFSET;
        stRegister.u16Value = (uint16_t) FLASH_enACK_UNBLOCKED;

        enACKValue = (FLASH_nACK) FLASH__u16ReadRegister(&stRegister);

    }
    return (enACKValue);
}

