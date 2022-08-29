/**
 *
 * @file ECAP_InterruptSource.c
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
#include <DriverLib/ECAP/Driver/Intrinsics/Interrupt/xHeader/ECAP_InterruptSource.h>

#include "DriverLib/ECAP/Driver/Intrinsics/Primitives/ECAP_Primitives.h"
#include "DriverLib/ECAP/Peripheral/ECAP_Peripheral.h"

void ECAP__vEnableInterruptSource(ECAP_nMODULE enModuleArg, ECAP_nINT_SOURCE enIntSourceArg)
{
    ECAP_Register16Bits_t stRegister;

    stRegister.u16Shift = ECAP_EINT_R_INT_BIT;
    stRegister.u16Mask = (uint16_t) enIntSourceArg;
    stRegister.uptrAddress = ECAP_EINT_OFFSET;
    stRegister.u16Value = (uint16_t) enIntSourceArg;
    ECAP__vWriteRegister_16Bits(enModuleArg, &stRegister);
}

void ECAP__vDisableInterruptSource(ECAP_nMODULE enModuleArg, ECAP_nINT_SOURCE enIntSourceArg)
{
    ECAP_Register16Bits_t stRegister;

    stRegister.u16Shift = ECAP_EINT_R_INT_BIT;
    stRegister.u16Mask = (uint16_t) enIntSourceArg;
    stRegister.uptrAddress = ECAP_EINT_OFFSET;
    stRegister.u16Value = 0U;
    ECAP__vWriteRegister_16Bits(enModuleArg, &stRegister);
}

void ECAP__vClearInterruptSource(ECAP_nMODULE enModuleArg, ECAP_nINT_SOURCE enIntSourceArg)
{
    ECAP_Register16Bits_t stRegister;

    stRegister.u16Shift = ECAP_CLR_R_INT_BIT;
    stRegister.u16Mask = 0xFFFFU;
    stRegister.uptrAddress = ECAP_CLR_OFFSET;
    stRegister.u16Value = (uint16_t) enIntSourceArg;
    ECAP__vWriteRegister_16Bits(enModuleArg, &stRegister);
}

void ECAP__vForceInterruptSource(ECAP_nMODULE enModuleArg, ECAP_nINT_SOURCE enIntSourceArg)
{
    ECAP_Register16Bits_t stRegister;

    stRegister.u16Shift = ECAP_FRC_R_INT_BIT;
    stRegister.u16Mask = 0xFFFFU;
    stRegister.uptrAddress = ECAP_FRC_OFFSET;
    stRegister.u16Value = (uint16_t) enIntSourceArg;
    ECAP__vWriteRegister_16Bits(enModuleArg, &stRegister);
}


ECAP_nINT_SOURCE ECAP__enStatusInterruptSource(ECAP_nMODULE enModuleArg, ECAP_nINT_SOURCE enIntSourceArg)
{
    ECAP_Register16Bits_t stRegister;

    stRegister.u16Shift = ECAP_FLG_R_INT_BIT;
    stRegister.u16Mask = (uint16_t) enIntSourceArg;
    stRegister.uptrAddress = ECAP_FLG_OFFSET;
    ECAP__vWriteRegister_16Bits(enModuleArg, &stRegister);

    return ((ECAP_nINT_SOURCE) stRegister.u16Value);
}
