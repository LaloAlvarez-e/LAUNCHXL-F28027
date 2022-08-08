/**
 *
 * @file TIMER_State.c
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
 * @verbatim 7 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/TIMER/Driver/xHeader/TIMER_State.h"
#include "DriverLib/TIMER/Driver/Intrinsics/TIMER_Intrinsics.h"
#include "DriverLib/TIMER/Peripheral/TIMER_Peripheral.h"

void TIMER__vSetState(TIMER_nMODULE enModuleArg, TIMER_nSTATE enStateArg)
{
    TIMER_Register16Bits_t stRegister;

    stRegister.u16Shift = TIMER_TCR_R_TSS_BIT;
    stRegister.u16Mask = TIMER_TCR_TSS_MASK;
    stRegister.uptrAddress = TIMER_TCR_OFFSET;
    stRegister.u16Value = (uint16_t) enStateArg;
    TIMER__vWriteRegister16Bits(enModuleArg, &stRegister);
}

void TIMER__vStart(TIMER_nMODULE enModuleArg)
{
    TIMER__vSetState(enModuleArg, TIMER_enSTATE_START);
}

void TIMER__vStop(TIMER_nMODULE enModuleArg)
{
    TIMER__vSetState(enModuleArg, TIMER_enSTATE_STOP);
}

TIMER_nSTATUS TIMER__enGetStatus(TIMER_nMODULE enModuleArg)
{
    TIMER_Register16Bits_t stRegister;

    stRegister.u16Shift = TIMER_TCR_R_TSS_BIT;
    stRegister.u16Mask = TIMER_TCR_TSS_MASK;
    stRegister.uptrAddress = TIMER_TCR_OFFSET;
    TIMER__u16ReadRegister(enModuleArg, &stRegister);
    return ((TIMER_nSTATUS) stRegister.u16Value);
}



