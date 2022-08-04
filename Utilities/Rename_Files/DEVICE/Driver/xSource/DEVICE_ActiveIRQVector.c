/**
 *
 * @file DEVICE_ActiveIRQVector.c
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
#include "DriverLib/DEVICE/Driver/xHeader/DEVICE_ActiveIRQVector.h"
#include "DriverLib/DEVICE/Driver/Intrinsics/DEVICE_Intrinsics.h"
#include "DriverLib/DEVICE/Peripheral/DEVICE_Peripheral.h"

DEVICE_nVECTOR_IRQ DEVICE__enGetActiveIRQVector(void)
{
    DEVICE_Register_t stRegister;
    uint16_t u16VectorReg;

    stRegister.u16Shift = DEVICE_CTRL_R_VECT_BIT;
    stRegister.u16Mask = DEVICE_CTRL_VECT_MASK;
    stRegister.uptrAddress = DEVICE_CTRL_OFFSET;
    u16VectorReg = DEVICE__u16ReadRegister(&stRegister);
    if(0U != u16VectorReg)
    {
        u16VectorReg -= DEVICE_VECTOR_BASE;
        u16VectorReg >>= 1U;
    }
    else
    {
        u16VectorReg = (uint16_t) DEVICE_enVECTOR_IRQ_INACTIVE;
    }
    return ((DEVICE_nVECTOR_IRQ) u16VectorReg);
}
