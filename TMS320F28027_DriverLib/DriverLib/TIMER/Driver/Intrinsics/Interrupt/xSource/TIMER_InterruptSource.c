/**
 *
 * @file TIMER_InterruptSource.c
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
#include <DriverLib/TIMER/Driver/Intrinsics/Interrupt/xHeader/TIMER_InterruptSource.h>

#include "DriverLib/TIMER/Driver/Intrinsics/Primitives/TIMER_Primitives.h"
#include "DriverLib/TIMER/Peripheral/TIMER_Peripheral.h"

void TIMER__vEnableInterruptSource(TIMER_nMODULE enModuleArg)
{
    TIMER_Register16Bits_t stRegister;

    stRegister.u16Shift = TIMER_TCR_R_TIE_BIT;
    stRegister.u16Mask = TIMER_TCR_TIE_MASK;
    stRegister.uptrAddress = TIMER_TCR_OFFSET;
    stRegister.u16Value = TIMER_TCR_TIE_ENA;
    TIMER__vWriteRegister16Bits(enModuleArg, &stRegister);
}

void TIMER__vDisInterruptSource(TIMER_nMODULE enModuleArg)
{
    TIMER_Register16Bits_t stRegister;

    stRegister.u16Shift = TIMER_TCR_R_TIE_BIT;
    stRegister.u16Mask = TIMER_TCR_TIE_MASK;
    stRegister.uptrAddress = TIMER_TCR_OFFSET;
    stRegister.u16Value = TIMER_TCR_TIE_DIS;
    TIMER__vWriteRegister16Bits(enModuleArg, &stRegister);
}

void TIMER__vClearInterruptSource(TIMER_nMODULE enModuleArg)
{
    TIMER_Register16Bits_t stRegister;

    stRegister.u16Shift = TIMER_TCR_R_TIF_BIT;
    stRegister.u16Mask = TIMER_TCR_TIF_MASK;
    stRegister.uptrAddress = TIMER_TCR_OFFSET;
    stRegister.u16Value = TIMER_TCR_TIF_CLEAR;
    TIMER__vWriteRegister16Bits(enModuleArg, &stRegister);
}

TIMER_nINT_STATUS TIMER__enStatusInterruptSource(TIMER_nMODULE enModuleArg)
{
    TIMER_Register16Bits_t stRegister;

    stRegister.u16Shift = TIMER_TCR_R_TIF_BIT;
    stRegister.u16Mask = TIMER_TCR_TIF_MASK;
    stRegister.uptrAddress = TIMER_TCR_OFFSET;
    TIMER__u16ReadRegister(enModuleArg , &stRegister);

    return ((TIMER_nINT_STATUS) stRegister.u16Value);
}
