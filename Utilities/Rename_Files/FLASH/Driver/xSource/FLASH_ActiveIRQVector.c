/**
 *
 * @file FLASH_ActiveIRQVector.c
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
#include "DriverLib/FLASH/Driver/xHeader/FLASH_ActiveIRQVector.h"
#include "DriverLib/FLASH/Driver/Intrinsics/FLASH_Intrinsics.h"
#include "DriverLib/FLASH/Peripheral/FLASH_Peripheral.h"

FLASH_nVECTOR_IRQ FLASH__enGetActiveIRQVector(void)
{
    FLASH_Register_t stRegister;
    uint16_t u16VectorReg;

    stRegister.u16Shift = FLASH_CTRL_R_VECT_BIT;
    stRegister.u16Mask = FLASH_CTRL_VECT_MASK;
    stRegister.uptrAddress = FLASH_CTRL_OFFSET;
    u16VectorReg = FLASH__u16ReadRegister(&stRegister);
    if(0U != u16VectorReg)
    {
        u16VectorReg -= FLASH_VECTOR_BASE;
        u16VectorReg >>= 1U;
    }
    else
    {
        u16VectorReg = (uint16_t) FLASH_enVECTOR_IRQ_INACTIVE;
    }
    return ((FLASH_nVECTOR_IRQ) u16VectorReg);
}
