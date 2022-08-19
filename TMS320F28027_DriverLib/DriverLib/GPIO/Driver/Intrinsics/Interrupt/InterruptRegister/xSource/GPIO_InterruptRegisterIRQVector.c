/**
 *
 * @file GPIO_InterruptRegisterIRQVector.c
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

#include "DriverLib/GPIO/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/GPIO_InterruptRegisterIRQVector.h"

#include "DriverLib/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/GPIO_InterruptRoutine.h"
#include "DriverLib/PIE/PIE.h"

GPIO_nERROR GPIO__enRegisterIRQVectorHandler(MCU__pvfIRQVectorHandler_t pvfIrqVectorHandler,
                                             GPIO_nXINT enExternalIntArg)
{
    PIE_nVECTOR_IRQ enVectorReg;
    GPIO_nERROR enErrorReg;
    PIE_nERROR enPieErrorReg;
    MCU__pvfIRQVectorHandler_t* pvfIrqVectorArray;
    const PIE_nVECTOR_IRQ VECTOR_IRQ_GPIO[(uint16_t) GPIO_enXINT_MAX]=
    {
     PIE_enVECTOR_IRQ_XINT1, PIE_enVECTOR_IRQ_XINT2, PIE_enVECTOR_IRQ_XINT3
    };

    if(0UL != (uintptr_t) pvfIrqVectorHandler)
    {
        pvfIrqVectorArray = GPIO__pvfGetIRQVectorHandlerPointer(enExternalIntArg);
        enVectorReg = VECTOR_IRQ_GPIO[(uint16_t) enExternalIntArg];
        enPieErrorReg = PIE__enRegisterIRQVectorHandler(pvfIrqVectorHandler, pvfIrqVectorArray, enVectorReg);
        if(PIE_enERROR_POINTER == enPieErrorReg)
        {
            enErrorReg = GPIO_enERROR_POINTER;
        }
        else if(PIE_enERROR_OK != enPieErrorReg)
        {
            enErrorReg = GPIO_enERROR_UNDEFINED;
        }
    }
    else
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    return (enErrorReg);
}
