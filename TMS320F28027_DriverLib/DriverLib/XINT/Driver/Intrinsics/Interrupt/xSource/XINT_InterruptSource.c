/**
 *
 * @file XINT_InterruptSource.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <DriverLib/XINT/Driver/Intrinsics/Interrupt/xHeader/XINT_InterruptSource.h>

#include "DriverLib/XINT/Driver/Intrinsics/Primitives/XINT_Primitives.h"
#include "DriverLib/XINT/Peripheral/XINT_Peripheral.h"

void XINT__vEnableInterruptSource(XINT_nMODULE enModuleArg)
{
    XINT_Register_t stRegister;

    stRegister.u16Shift = XINT_CR_R_ENABLE_BIT;
    stRegister.u16Mask = XINT_CR_ENABLE_MASK;
    stRegister.uptrAddress = XINT_CR_OFFSET;
    stRegister.u16Value = XINT_CR_ENABLE_ENA;
    XINT__vWriteRegister(enModuleArg, &stRegister);
}

void XINT__vDisableInterruptSource(XINT_nMODULE enModuleArg)
{
    XINT_Register_t stRegister;

    stRegister.u16Shift = XINT_CR_R_ENABLE_BIT;
    stRegister.u16Mask = XINT_CR_ENABLE_MASK;
    stRegister.uptrAddress = XINT_CR_OFFSET;
    stRegister.u16Value = XINT_CR_ENABLE_DIS;
    XINT__vWriteRegister(enModuleArg, &stRegister);
}
