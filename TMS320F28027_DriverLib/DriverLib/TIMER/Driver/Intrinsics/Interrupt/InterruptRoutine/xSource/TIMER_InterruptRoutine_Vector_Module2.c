/**
 *
 * @file TIMER_InterruptRoutine_Vector_Module2.c
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
 * @verbatim 8 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Vector_Module2.h"

#include "DriverLib/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h"
#include "DriverLib/TIMER/Peripheral/TIMER_Peripheral.h"
#include "DriverLib/PIE/Peripheral/PIE_Peripheral.h"

interrupt void TIMER2__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg;
    volatile uint32_t u32Counter;
    MCU__pvfIRQSourceHandler_t pvfCallback;

    u32Counter = TIMER2_TIM_R;
    u32Reg = TIMER2_TCR_R;

    if(TIMER_TCR_R_TIF_OCCUR & u32Reg)
    {
        TIMER2_TCR_R |= TIMER_TCR_R_TIF_CLEAR;
        pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enMODULE_2);
        pvfCallback(TIMER_enMODULE_2, u32Counter);
    }
}




