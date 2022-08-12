/**
 *
 * @file TIMER_Reload.c
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
 * @verbatim 12 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/TIMER/Driver/xHeader/TIMER_Reload.h"

#include "DriverLib/TIMER/Driver/Intrinsics/TIMER_Intrinsics.h"
#include "DriverLib/TIMER/Peripheral/TIMER_Peripheral.h"

void TIMER__vReload(TIMER_nMODULE enModuleArg)
{
    TIMER_Register32Bits_t stRegister;

    stRegister.u16Shift = TIMER_TCR_R_TRB_BIT;
    stRegister.u32Mask = TIMER_TCR_TRB_MASK;
    stRegister.uptrAddress = TIMER_TCR_OFFSET;
    stRegister.u32Value = TIMER_TCR_TRB_LOAD;
    TIMER__vWriteRegister32Bits(enModuleArg, &stRegister);
}

