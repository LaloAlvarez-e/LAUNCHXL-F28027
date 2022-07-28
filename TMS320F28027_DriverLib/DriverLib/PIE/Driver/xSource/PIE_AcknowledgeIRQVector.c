/**
 *
 * @file PIE_AcknowledgeIRQVector.c
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
#include <DriverLib/PIE/Driver/xHeader/PIE_AcknowledgeIRQVector.h>
#include "DriverLib/PIE/Driver/Intrinsics/PIE_Intrinsics.h"
#include "DriverLib/PIE/Peripheral/PIE_Peripheral.h"

void PIE__vClearAcknowledgeIRQVector(PIE_nVECTOR_IRQ enIrqVectorArg)
{
    PIE_Register_t stRegister;
    uint16_t u16IrqVectorReg;
    if((uint16_t) PIE_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
    {
        u16IrqVectorReg = (uint16_t) enIrqVectorArg;
        u16IrqVectorReg -= (uint16_t) PIE_enVECTOR_IRQ_USER12 + 1U;
        u16IrqVectorReg >>= 3U;
        u16IrqVectorReg &= 0xFU;

        stRegister.u16Shift = u16IrqVectorReg;
        stRegister.u16Mask = PIE_ACK_ACK_GROUP1;
        stRegister.uptrAddress = PIE_ACK_OFFSET;
        stRegister.u16Value = PIE_ACK_ACK_GROUP1;
        PIE__vWriteRegister(&stRegister);
    }

}

void PIE__vClearAllAcknowledgeIRQVector(void)
{
    PIE_Register_t stRegister;
    stRegister.u16Shift = PIE_ACK_R_ACK_BIT;
    stRegister.u16Mask = PIE_ACK_R_ACK_MASK;
    stRegister.uptrAddress = PIE_ACK_OFFSET;
    stRegister.u16Value = PIE_ACK_R_ACK_MASK;
    PIE__vWriteRegister(&stRegister);


}

PIE_nACK PIE__enGetAcknowledgeIRQVector(PIE_nVECTOR_IRQ enIrqVectorArg)
{
    PIE_Register_t stRegister;
    uint16_t u16IrqVectorReg;
    PIE_nACK enACKValue = PIE_enACK_UNBLOCKED;
    if((uint16_t) PIE_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
    {
        u16IrqVectorReg = (uint16_t) enIrqVectorArg;
        u16IrqVectorReg -= (uint16_t) PIE_enVECTOR_IRQ_USER12 + 1U;
        u16IrqVectorReg >>= 3U;
        u16IrqVectorReg &= 0xFU;

        stRegister.u16Shift = u16IrqVectorReg;
        stRegister.u16Mask = PIE_ACK_ACK_GROUP1;
        stRegister.uptrAddress = PIE_ACK_OFFSET;
        stRegister.u16Value = (uint16_t) PIE_enACK_UNBLOCKED;

        enACKValue = (PIE_nACK) PIE__u16ReadRegister(&stRegister);

    }
    return (enACKValue);
}

