/**
 *
 * @file XINT_Pin.c
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
 * @verbatim 21 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/XINT/Driver/xHeader/XINT_Pin.h"

#include "DriverLib/XINT/Driver/Intrinsics/XINT_Intrinsics.h"
#include "DriverLib/XINT/Peripheral/XINT_Peripheral.h"

void XINT__vSetPin(XINT_nMODULE enModuleArg, XINT_nPIN enPinArg)
{
    XINT_Register_t stRegister;

    stRegister.u16Shift = XINT_SEL_R_SEL_BIT;
    stRegister.u16Mask = XINT_SEL_SEL_MASK;
    stRegister.uptrAddress = XINT_SEL_OFFSET;
    stRegister.u16Value = (uint16_t) enPinArg;
    XINT__vWriteProtectedRegister(enModuleArg, &stRegister);
}

XINT_nPIN XINT__enGetPin(XINT_nMODULE enModuleArg)
{
    XINT_Register_t stRegister;


    stRegister.u16Shift = XINT_SEL_R_SEL_BIT;
    stRegister.u16Mask = XINT_SEL_SEL_MASK;
    stRegister.uptrAddress = XINT_SEL_OFFSET;
    XINT__u16ReadRegister(enModuleArg, &stRegister);
    return ((XINT_nPIN) stRegister.u16Value);
}




