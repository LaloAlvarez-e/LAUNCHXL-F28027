/**
 *
 * @file ECAP_InterruptRoutine_Source.c
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
#include "DriverLib/ECAP/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ECAP_InterruptRoutine_Source.h"

static void ECAP_vIRQSourceHandler_Dummy(uintptr_t uptrModule, uint32_t u32IntSource);

static MCU__pvfIRQSourceHandler_t ECAP__vIRQSourceHandler[(uint32_t) ECAP_enMODULE_MAX][(uint32_t) ECAP_enINTERRUPT_MAX] =
{
 {
    &ECAP_vIRQSourceHandler_Dummy     , &ECAP_vIRQSourceHandler_Dummy,
    &ECAP_vIRQSourceHandler_Dummy     , &ECAP_vIRQSourceHandler_Dummy,
    &ECAP_vIRQSourceHandler_Dummy     , &ECAP_vIRQSourceHandler_Dummy,
    &ECAP_vIRQSourceHandler_Dummy     , &ECAP_vIRQSourceHandler_Dummy,
 },
};

static void ECAP_vIRQSourceHandler_Dummy(uintptr_t uptrModule, uint32_t u32IntSource)
{
    while(1UL){}
}

MCU__pvfIRQSourceHandler_t ECAP__pvfGetIRQSourceHandler(ECAP_nMODULE enModuleArg, ECAP_nINTERRUPT enInterruptArg)
{
    MCU__pvfIRQSourceHandler_t pvfFunctionReg;
    pvfFunctionReg = ECAP__vIRQSourceHandler[(uint16_t) enModuleArg][(uint16_t) enInterruptArg];
    return (pvfFunctionReg);
}

MCU__pvfIRQSourceHandler_t* ECAP__pvfGetIRQSourceHandlerPointer(ECAP_nMODULE enModuleArg, ECAP_nINTERRUPT enInterruptArg)
{
    MCU__pvfIRQSourceHandler_t* pvfFunctionReg;
    pvfFunctionReg = &ECAP__vIRQSourceHandler[(uint16_t) enModuleArg][(uint16_t) enInterruptArg];
    return (pvfFunctionReg);
}
