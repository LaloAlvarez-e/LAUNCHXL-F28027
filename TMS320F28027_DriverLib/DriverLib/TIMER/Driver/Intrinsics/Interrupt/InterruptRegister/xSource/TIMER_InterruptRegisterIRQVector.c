/**
 *
 * @file TIMER_InterruptRegisterIRQVector.c
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

#include "DriverLib/TIMER/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/TIMER_InterruptRegisterIRQVector.h"

#include "DriverLib/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/TIMER_InterruptRoutine.h"
#include "DriverLib/PIE/PIE.h"

TIMER_nERROR TIMER__enRegisterIRQVectorHandler(MCU__pvfIRQVectorHandler_t pvfIrqVectorHandler,
                                      TIMER_nMODULE enModuleArg)
{
    PIE_nVECTOR_IRQ enVectorReg;
    TIMER_nERROR enErrorReg;
    PIE_nERROR enPieErrorReg;
    MCU__pvfIRQVectorHandler_t* pvfIrqVectorArray;
    const PIE_nVECTOR_IRQ VECTOR_IRQ_TIMER[(uint16_t) TIMER_enMODULE_MAX]=
    {
     PIE_enVECTOR_IRQ_T0, PIE_enVECTOR_IRQ_T1, PIE_enVECTOR_IRQ_T2
    };

    if(0UL != (uintptr_t) pvfIrqVectorHandler)
    {
        pvfIrqVectorArray = TIMER__pvfGetIRQVectorHandlerPointer(enModuleArg);
        enVectorReg = VECTOR_IRQ_TIMER[(uint16_t) enModuleArg];
        enPieErrorReg = PIE__enRegisterIRQVectorHandler(pvfIrqVectorHandler, pvfIrqVectorArray, enVectorReg);
        if(PIE_enERROR_POINTER == enPieErrorReg)
        {
            enErrorReg = TIMER_enERROR_POINTER;
        }
        else if(PIE_enERROR_OK != enPieErrorReg)
        {
            enErrorReg = TIMER_enERROR_UNDEFINED;
        }
    }
    else
    {
        enErrorReg = TIMER_enERROR_POINTER;
    }
    return (enErrorReg);
}
