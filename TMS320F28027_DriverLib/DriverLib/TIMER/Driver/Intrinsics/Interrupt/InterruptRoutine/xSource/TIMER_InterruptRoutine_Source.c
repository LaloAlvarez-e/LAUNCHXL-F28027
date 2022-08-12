/**
 *
 * @file TIMER_InterruptRoutine_Source.c
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
#include "DriverLib/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h"

static void TIMER_vIRQSourceHandler_Dummy(uintptr_t uptrModule, uint32_t u32IntSource);

static MCU__pvfIRQSourceHandler_t TIMER__vIRQSourceHandler[(uint32_t) TIMER_enMODULE_MAX] =
{
    &TIMER_vIRQSourceHandler_Dummy,&TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy,
};

static void TIMER_vIRQSourceHandler_Dummy(uintptr_t uptrModule, uint32_t u32IntSource)
{
    while(1UL){}
}

MCU__pvfIRQSourceHandler_t TIMER__pvfGetIRQSourceHandler(TIMER_nMODULE enModuleArg)
{
    MCU__pvfIRQSourceHandler_t pvfFunctionReg;
    pvfFunctionReg = TIMER__vIRQSourceHandler[(uint16_t) enModuleArg];
    return (pvfFunctionReg);
}

MCU__pvfIRQSourceHandler_t* TIMER__pvfGetIRQSourceHandlerPointer(TIMER_nMODULE enModuleArg)
{
    MCU__pvfIRQSourceHandler_t* pvfFunctionReg;
    pvfFunctionReg = &TIMER__vIRQSourceHandler[(uint16_t) enModuleArg];
    return (pvfFunctionReg);
}


