/**
 *
 * @file PIE_ActiveIRQVector.c
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
#include "DriverLib/PIE/Driver/xHeader/PIE_ActiveIRQVector.h"
#include "DriverLib/PIE/Driver/Intrinsics/PIE_Intrinsics.h"
#include "DriverLib/PIE/Peripheral/PIE_Peripheral.h"

PIE_nVECTOR_IRQ PIE__enGetActiveIRQVector(void)
{
    PIE_Register_t stRegister;
    uint16_t u16VectorReg;

    stRegister.u16Shift = PIE_CTRL_R_VECT_BIT;
    stRegister.u16Mask = PIE_CTRL_VECT_MASK;
    stRegister.uptrAddress = PIE_CTRL_OFFSET;
    u16VectorReg = PIE__u16ReadRegister(&stRegister);
    if(0U != u16VectorReg)
    {
        u16VectorReg -= PIE_VECTOR_BASE;
        u16VectorReg >>= 1U;
    }
    else
    {
        u16VectorReg = (uint16_t) PIE_enVECTOR_IRQ_INACTIVE;
    }
    return ((PIE_nVECTOR_IRQ) u16VectorReg);
}
