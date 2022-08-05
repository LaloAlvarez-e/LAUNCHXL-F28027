/**
 *
 * @file SYSCTL_AcknowledgeIRQVector.c
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
#include <DriverLib/SYSCTL/Driver/xHeader/SYSCTL_AcknowledgeIRQVector.h>
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

void SYSCTL__vClearAcknowledgeIRQVector(SYSCTL_nVECTOR_IRQ enIrqVectorArg)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16IrqVectorReg;
    if((uint16_t) SYSCTL_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
    {
        u16IrqVectorReg = (uint16_t) enIrqVectorArg;
        u16IrqVectorReg -= (uint16_t) SYSCTL_enVECTOR_IRQ_USER12 + 1U;
        u16IrqVectorReg >>= 3U;
        u16IrqVectorReg &= 0xFU;

        stRegister.u16Shift = u16IrqVectorReg;
        stRegister.u16Mask = SYSCTL_ACK_ACK_GROUP1;
        stRegister.uptrAddress = SYSCTL_ACK_OFFSET;
        stRegister.u16Value = SYSCTL_ACK_ACK_GROUP1;
        SYSCTL__vWriteRegister(&stRegister);
    }

}

void SYSCTL__vClearAllAcknowledgeIRQVector(void)
{
    SYSCTL_Register_t stRegister;
    stRegister.u16Shift = SYSCTL_ACK_R_ACK_BIT;
    stRegister.u16Mask = SYSCTL_ACK_R_ACK_MASK;
    stRegister.uptrAddress = SYSCTL_ACK_OFFSET;
    stRegister.u16Value = SYSCTL_ACK_R_ACK_MASK;
    SYSCTL__vWriteRegister(&stRegister);


}

SYSCTL_nACK SYSCTL__enGetAcknowledgeIRQVector(SYSCTL_nVECTOR_IRQ enIrqVectorArg)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16IrqVectorReg;
    SYSCTL_nACK enACKValue = SYSCTL_enACK_UNBLOCKED;
    if((uint16_t) SYSCTL_enVECTOR_IRQ_USER12 < (uint16_t) enIrqVectorArg)
    {
        u16IrqVectorReg = (uint16_t) enIrqVectorArg;
        u16IrqVectorReg -= (uint16_t) SYSCTL_enVECTOR_IRQ_USER12 + 1U;
        u16IrqVectorReg >>= 3U;
        u16IrqVectorReg &= 0xFU;

        stRegister.u16Shift = u16IrqVectorReg;
        stRegister.u16Mask = SYSCTL_ACK_ACK_GROUP1;
        stRegister.uptrAddress = SYSCTL_ACK_OFFSET;
        stRegister.u16Value = (uint16_t) SYSCTL_enACK_UNBLOCKED;

        enACKValue = (SYSCTL_nACK) SYSCTL__u16ReadRegister(&stRegister);

    }
    return (enACKValue);
}

