/**
 *
 * @file XINT_InterruptRoutine_Source.c
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
#include "DriverLib/XINT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/XINT_InterruptRoutine_Source.h"

static void XINT_vIRQSourceHandler_Dummy(uintptr_t uptrModule, uint32_t u32IntSource);

static MCU__pvfIRQSourceHandler_t XINT__vIRQSourceHandler[(uint32_t) XINT_enMODULE_MAX] =
{
    &XINT_vIRQSourceHandler_Dummy,&XINT_vIRQSourceHandler_Dummy, &XINT_vIRQSourceHandler_Dummy,
};

static void XINT_vIRQSourceHandler_Dummy(uintptr_t uptrModule, uint32_t u32IntSource)
{
    while(1UL){}
}

MCU__pvfIRQSourceHandler_t XINT__pvfGetIRQSourceHandler(XINT_nMODULE enExternalIntArg)
{
    MCU__pvfIRQSourceHandler_t pvfFunctionReg;
    pvfFunctionReg = XINT__vIRQSourceHandler[(uint16_t) enExternalIntArg];
    return (pvfFunctionReg);
}

MCU__pvfIRQSourceHandler_t* XINT__pvfGetIRQSourceHandlerPointer(XINT_nMODULE enExternalIntArg)
{
    MCU__pvfIRQSourceHandler_t* pvfFunctionReg;
    pvfFunctionReg = &XINT__vIRQSourceHandler[(uint16_t) enExternalIntArg];
    return (pvfFunctionReg);
}


