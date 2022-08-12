/**
 *
 * @file TIMER_InterruptRoutine.c
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

#include <DriverLib/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/TIMER_InterruptRoutine.h>

static MCU__pvfIRQVectorHandler_t TIMER__pvIRQVectorHandler[(uint32_t) TIMER_enMODULE_MAX]=
{
    &TIMER0__vIRQVectorHandler,
    &TIMER1__vIRQVectorHandler,
    &TIMER2__vIRQVectorHandler,
};

MCU__pvfIRQVectorHandler_t TIMER__pvfGetIRQVectorHandler(TIMER_nMODULE enModuleArg)
{
    MCU__pvfIRQVectorHandler_t pvfFunctionReg;
    pvfFunctionReg = TIMER__pvIRQVectorHandler[(uint16_t) enModuleArg];
    return (pvfFunctionReg);
}

MCU__pvfIRQVectorHandler_t* TIMER__pvfGetIRQVectorHandlerPointer(TIMER_nMODULE enModuleArg)
{
    MCU__pvfIRQVectorHandler_t* pvfFunctionReg;
    pvfFunctionReg = &TIMER__pvIRQVectorHandler[(uint16_t) enModuleArg];
    return (pvfFunctionReg);
}
