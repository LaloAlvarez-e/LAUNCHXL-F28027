/**
 *
 * @file DEVICE_AcknowledgeIRQVector.c
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
#include <DriverLib/DEVICE/Driver/xHeader/DEVICE_AcknowledgeIRQVector.h>
#include "DriverLib/DEVICE/Driver/Intrinsics/DEVICE_Intrinsics.h"
#include "DriverLib/DEVICE/Peripheral/DEVICE_Peripheral.h"

void DEVICE__vClearAcknowledgeIRQVector(DEVICE_nVECTOR_IRQ enIrqVectorArg)
{
    DEVICE_Register_t stRegister;
    uint16_t u16IrqVectorReg;
    if((uint16_t) DEVICE_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
    {
        u16IrqVectorReg = (uint16_t) enIrqVectorArg;
        u16IrqVectorReg -= (uint16_t) DEVICE_enVECTOR_IRQ_USER12 + 1U;
        u16IrqVectorReg >>= 3U;
        u16IrqVectorReg &= 0xFU;

        stRegister.u16Shift = u16IrqVectorReg;
        stRegister.u16Mask = DEVICE_ACK_ACK_GROUP1;
        stRegister.uptrAddress = DEVICE_ACK_OFFSET;
        stRegister.u16Value = DEVICE_ACK_ACK_GROUP1;
        DEVICE__vWriteRegister(&stRegister);
    }

}

void DEVICE__vClearAllAcknowledgeIRQVector(void)
{
    DEVICE_Register_t stRegister;
    stRegister.u16Shift = DEVICE_ACK_R_ACK_BIT;
    stRegister.u16Mask = DEVICE_ACK_R_ACK_MASK;
    stRegister.uptrAddress = DEVICE_ACK_OFFSET;
    stRegister.u16Value = DEVICE_ACK_R_ACK_MASK;
    DEVICE__vWriteRegister(&stRegister);


}

DEVICE_nACK DEVICE__enGetAcknowledgeIRQVector(DEVICE_nVECTOR_IRQ enIrqVectorArg)
{
    DEVICE_Register_t stRegister;
    uint16_t u16IrqVectorReg;
    DEVICE_nACK enACKValue = DEVICE_enACK_UNBLOCKED;
    if((uint16_t) DEVICE_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
    {
        u16IrqVectorReg = (uint16_t) enIrqVectorArg;
        u16IrqVectorReg -= (uint16_t) DEVICE_enVECTOR_IRQ_USER12 + 1U;
        u16IrqVectorReg >>= 3U;
        u16IrqVectorReg &= 0xFU;

        stRegister.u16Shift = u16IrqVectorReg;
        stRegister.u16Mask = DEVICE_ACK_ACK_GROUP1;
        stRegister.uptrAddress = DEVICE_ACK_OFFSET;
        stRegister.u16Value = (uint16_t) DEVICE_enACK_UNBLOCKED;

        enACKValue = (DEVICE_nACK) DEVICE__u16ReadRegister(&stRegister);

    }
    return (enACKValue);
}

