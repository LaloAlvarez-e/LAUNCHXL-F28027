/**
 *
 * @file XINT_InterruptRoutine.c
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

#include <DriverLib/XINT/Driver/Intrinsics/Interrupt/InterruptRoutine/XINT_InterruptRoutine.h>

static MCU__pvfIRQVectorHandler_t XINT__pvIRQVectorHandler[(uint32_t) XINT_enMODULE_MAX]=
{
    &XINT1__vIRQVectorHandler,
    &XINT2__vIRQVectorHandler,
    &XINT3__vIRQVectorHandler,
};

MCU__pvfIRQVectorHandler_t XINT__pvfGetIRQVectorHandler(XINT_nMODULE enExternalIntArg)
{
    MCU__pvfIRQVectorHandler_t pvfFunctionReg;
    pvfFunctionReg = XINT__pvIRQVectorHandler[(uint16_t) enExternalIntArg];
    return (pvfFunctionReg);
}

MCU__pvfIRQVectorHandler_t* XINT__pvfGetIRQVectorHandlerPointer(XINT_nMODULE enExternalIntArg)
{
    MCU__pvfIRQVectorHandler_t* pvfFunctionReg;
    pvfFunctionReg = &XINT__pvIRQVectorHandler[(uint16_t) enExternalIntArg];
    return (pvfFunctionReg);
}
