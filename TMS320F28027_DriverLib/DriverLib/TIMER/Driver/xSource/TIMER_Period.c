/**
 *
 * @file TIMER_Period.c
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
#include "DriverLib/TIMER/Driver/xHeader/TIMER_Period.h"

#include "DriverLib/TIMER/Driver/Intrinsics/TIMER_Intrinsics.h"
#include "DriverLib/TIMER/Peripheral/TIMER_Peripheral.h"

void TIMER__vSetPeriod(TIMER_nMODULE enModuleArg, uint32_t u32PeriodArg)
{
    TIMER_Register32Bits_t stRegister;

    stRegister.u16Shift = TIMER_PRD_R_PRD_BIT;
    stRegister.u32Mask = TIMER_PRD_PRD_MASK;
    stRegister.uptrAddress = TIMER_PRD_OFFSET;
    stRegister.u32Value = u32PeriodArg;
    TIMER__vWriteRegister32Bits(enModuleArg, &stRegister);
}

uint32_t TIMER__u32GetPeriod(TIMER_nMODULE enModuleArg)
{
    TIMER_Register32Bits_t stRegister;

    stRegister.u16Shift = TIMER_PRD_R_PRD_BIT;
    stRegister.u32Mask = TIMER_PRD_PRD_MASK;
    stRegister.uptrAddress = TIMER_PRD_OFFSET;
    TIMER__u32ReadRegister(enModuleArg, &stRegister);
    return (stRegister.u32Value);
}





