/**
 *
 * @file TIMER_Counter.c
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
#include "DriverLib/TIMER/Driver/xHeader/TIMER_Counter.h"

#include "DriverLib/TIMER/Driver/Intrinsics/TIMER_Intrinsics.h"
#include "DriverLib/TIMER/Peripheral/TIMER_Peripheral.h"

void TIMER__vSetCounter(TIMER_nMODULE enModuleArg, uint32_t u32CounterArg)
{
    TIMER_Register32Bits_t stRegister;

    stRegister.u16Shift = TIMER_TIM_R_TIM_BIT;
    stRegister.u32Mask = TIMER_TIM_TIM_MASK;
    stRegister.uptrAddress = TIMER_TIM_OFFSET;
    stRegister.u32Value = u32CounterArg;
    TIMER__vWriteRegister32Bits(enModuleArg, &stRegister);
}

uint32_t TIMER__u32GetCounter(TIMER_nMODULE enModuleArg)
{
    TIMER_Register32Bits_t stRegister;

    stRegister.u16Shift = TIMER_TIM_R_TIM_BIT;
    stRegister.u32Mask = TIMER_TIM_TIM_MASK;
    stRegister.uptrAddress = TIMER_TIM_OFFSET;
    TIMER__u32ReadRegister(enModuleArg, &stRegister);
    return (stRegister.u32Value);
}




