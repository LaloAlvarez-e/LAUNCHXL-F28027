/**
 *
 * @file GPIO_InterruptSource.c
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
#include <DriverLib/GPIO/Driver/Intrinsics/Interrupt/xHeader/GPIO_InterruptSource.h>

#include "DriverLib/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h"
#include "DriverLib/GPIO/Peripheral/GPIO_Peripheral.h"

void GPIO__vEnableInterruptSource(GPIO_nXINT enExternalIntArg)
{
    GPIO_Register16Bits_t stRegister;
    uintptr_t uptrAddressOffset;

    uptrAddressOffset = (uintptr_t) enExternalIntArg;
    uptrAddressOffset += GPIO_INTERRUPT_XINT1CR_OFFSET;

    stRegister.u16Shift = GPIO_INTERRUPT_XINTnCR_R_ENABLE_BIT;
    stRegister.u16Mask = GPIO_INTERRUPT_XINTnCR_ENABLE_MASK;
    stRegister.uptrAddress = uptrAddressOffset;
    stRegister.u16Value = GPIO_INTERRUPT_XINTnCR_ENABLE_ENA;
    GPIO_INTERRUPT__vWriteRegister(GPIO_enPORT_A, &stRegister);
}

void GPIO__vDisableInterruptSource(GPIO_nXINT enExternalIntArg)
{
    GPIO_Register16Bits_t stRegister;
    uintptr_t uptrAddressOffset;

    uptrAddressOffset = (uintptr_t) enExternalIntArg;
    uptrAddressOffset += GPIO_INTERRUPT_XINT1CR_OFFSET;

    stRegister.u16Shift = GPIO_INTERRUPT_XINTnCR_R_ENABLE_BIT;
    stRegister.u16Mask = GPIO_INTERRUPT_XINTnCR_ENABLE_MASK;
    stRegister.uptrAddress = uptrAddressOffset;
    stRegister.u16Value = GPIO_INTERRUPT_XINTnCR_ENABLE_DIS;
    GPIO_INTERRUPT__vWriteRegister(GPIO_enPORT_A, &stRegister);
}
