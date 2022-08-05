/**
 *
 * @file SYSCTL_ActiveIRQVector.c
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
#include "DriverLib/SYSCTL/Driver/xHeader/SYSCTL_ActiveIRQVector.h"
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

SYSCTL_nVECTOR_IRQ SYSCTL__enGetActiveIRQVector(void)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16VectorReg;

    stRegister.u16Shift = SYSCTL_CTRL_R_VECT_BIT;
    stRegister.u16Mask = SYSCTL_CTRL_VECT_MASK;
    stRegister.uptrAddress = SYSCTL_CTRL_OFFSET;
    u16VectorReg = SYSCTL__u16ReadRegister(&stRegister);
    if(0U != u16VectorReg)
    {
        u16VectorReg -= SYSCTL_VECTOR_BASE;
        u16VectorReg >>= 1U;
    }
    else
    {
        u16VectorReg = (uint16_t) SYSCTL_enVECTOR_IRQ_INACTIVE;
    }
    return ((SYSCTL_nVECTOR_IRQ) u16VectorReg);
}
