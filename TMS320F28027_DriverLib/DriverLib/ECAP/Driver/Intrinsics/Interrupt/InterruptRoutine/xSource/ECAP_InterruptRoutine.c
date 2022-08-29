/**
 *
 * @file ECAP_InterruptRoutine.c
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

#include <DriverLib/ECAP/Driver/Intrinsics/Interrupt/InterruptRoutine/ECAP_InterruptRoutine.h>

static MCU__pvfIRQVectorHandler_t ECAP__pvIRQVectorHandler[(uint32_t) ECAP_enMODULE_MAX]=
{
    &ECAP1__vIRQVectorHandler,
};

MCU__pvfIRQVectorHandler_t ECAP__pvfGetIRQVectorHandler(ECAP_nMODULE enExternalIntArg)
{
    MCU__pvfIRQVectorHandler_t pvfFunctionReg;
    pvfFunctionReg = ECAP__pvIRQVectorHandler[(uint16_t) enExternalIntArg];
    return (pvfFunctionReg);
}

MCU__pvfIRQVectorHandler_t* ECAP__pvfGetIRQVectorHandlerPointer(ECAP_nMODULE enExternalIntArg)
{
    MCU__pvfIRQVectorHandler_t* pvfFunctionReg;
    pvfFunctionReg = &ECAP__pvIRQVectorHandler[(uint16_t) enExternalIntArg];
    return (pvfFunctionReg);
}
