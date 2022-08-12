/**
 *
 * @file TIMER_InterruptRoutine_Vector_Module0.c
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
 * @verbatim 24 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Vector_Module0.h"

#include "DriverLib/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h"
#include "DriverLib/TIMER/Peripheral/TIMER_Peripheral.h"
#include "DriverLib/PIE/Peripheral/PIE_Peripheral.h"

interrupt void TIMER0__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg;
    MCU__pvfIRQSourceHandler_t pvfCallback;

    u32Reg = TIMER0_TCR_R;

    if(TIMER_TCR_R_TIF_OCCUR & u32Reg)
    {
        TIMER0_TCR_R |= TIMER_TCR_R_TIF_CLEAR;
        pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enMODULE_0);
        pvfCallback(TIMER_enMODULE_0, 0U);
    }

    PIE_ACK_R = PIE_ACK_R_ACK_GROUP1;
}
