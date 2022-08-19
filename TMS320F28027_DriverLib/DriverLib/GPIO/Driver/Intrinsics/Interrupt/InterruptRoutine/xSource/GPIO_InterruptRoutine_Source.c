/**
 *
 * @file GPIO_InterruptRoutine_Source.c
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
#include "DriverLib/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Source.h"

static void GPIO_vIRQSourceHandler_Dummy(uintptr_t uptrModule, uint32_t u32IntSource);

static MCU__pvfIRQSourceHandler_t GPIO__vIRQSourceHandler[(uint32_t) GPIO_enXINT_MAX] =
{
    &GPIO_vIRQSourceHandler_Dummy,&GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
};

static void GPIO_vIRQSourceHandler_Dummy(uintptr_t uptrModule, uint32_t u32IntSource)
{
    while(1UL){}
}

MCU__pvfIRQSourceHandler_t GPIO__pvfGetIRQSourceHandler(GPIO_nXINT enExternalIntArg)
{
    MCU__pvfIRQSourceHandler_t pvfFunctionReg;
    pvfFunctionReg = GPIO__vIRQSourceHandler[(uint16_t) enExternalIntArg];
    return (pvfFunctionReg);
}

MCU__pvfIRQSourceHandler_t* GPIO__pvfGetIRQSourceHandlerPointer(GPIO_nXINT enExternalIntArg)
{
    MCU__pvfIRQSourceHandler_t* pvfFunctionReg;
    pvfFunctionReg = &GPIO__vIRQSourceHandler[(uint16_t) enExternalIntArg];
    return (pvfFunctionReg);
}


