/**
 *
 * @file GPIO_InterruptRoutine.c
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

#include <DriverLib/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/GPIO_InterruptRoutine.h>

static MCU__pvfIRQVectorHandler_t GPIO__pvIRQVectorHandler[(uint32_t) GPIO_enXINT_MAX]=
{
    &XINT1__vIRQVectorHandler,
    &XINT2__vIRQVectorHandler,
    &XINT3__vIRQVectorHandler,
};

MCU__pvfIRQVectorHandler_t GPIO__pvfGetIRQVectorHandler(GPIO_nXINT enExternalIntArg)
{
    MCU__pvfIRQVectorHandler_t pvfFunctionReg;
    pvfFunctionReg = GPIO__pvIRQVectorHandler[(uint16_t) enExternalIntArg];
    return (pvfFunctionReg);
}

MCU__pvfIRQVectorHandler_t* GPIO__pvfGetIRQVectorHandlerPointer(GPIO_nXINT enExternalIntArg)
{
    MCU__pvfIRQVectorHandler_t* pvfFunctionReg;
    pvfFunctionReg = &GPIO__pvIRQVectorHandler[(uint16_t) enExternalIntArg];
    return (pvfFunctionReg);
}
