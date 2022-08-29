/**
 *
 * @file ECAP_InterruptRegisterIRQVector.c
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

#include "DriverLib/ECAP/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/ECAP_InterruptRegisterIRQVector.h"

#include "DriverLib/ECAP/Driver/Intrinsics/Interrupt/InterruptRoutine/ECAP_InterruptRoutine.h"
#include "DriverLib/PIE/PIE.h"

ECAP_nERROR ECAP__enRegisterIRQVectorHandler(MCU__pvfIRQVectorHandler_t pvfIrqVectorHandler,
                                             ECAP_nMODULE enModuleArg)
{
    PIE_nVECTOR_IRQ enVectorReg;
    ECAP_nERROR enErrorReg;
    PIE_nERROR enPieErrorReg;
    MCU__pvfIRQVectorHandler_t* pvfIrqVectorArray;
    const PIE_nVECTOR_IRQ VECTOR_IRQ_ECAP[(uint16_t) ECAP_enMODULE_MAX]=
    {
     PIE_enVECTOR_IRQ_ECAP1
    };

    if(0UL != (uintptr_t) pvfIrqVectorHandler)
    {
        pvfIrqVectorArray = ECAP__pvfGetIRQVectorHandlerPointer(enModuleArg);
        enVectorReg = VECTOR_IRQ_ECAP[(uint16_t) enModuleArg];
        enPieErrorReg = PIE__enRegisterIRQVectorHandler(pvfIrqVectorHandler, pvfIrqVectorArray, enVectorReg);
        if(PIE_enERROR_POINTER == enPieErrorReg)
        {
            enErrorReg = ECAP_enERROR_POINTER;
        }
        else if(PIE_enERROR_OK != enPieErrorReg)
        {
            enErrorReg = ECAP_enERROR_UNDEFINED;
        }
    }
    else
    {
        enErrorReg = ECAP_enERROR_POINTER;
    }
    return (enErrorReg);
}
