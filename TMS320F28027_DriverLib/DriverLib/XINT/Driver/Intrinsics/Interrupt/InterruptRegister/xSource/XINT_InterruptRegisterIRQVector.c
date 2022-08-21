/**
 *
 * @file XINT_InterruptRegisterIRQVector.c
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

#include "DriverLib/XINT/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/XINT_InterruptRegisterIRQVector.h"

#include "DriverLib/XINT/Driver/Intrinsics/Interrupt/InterruptRoutine/XINT_InterruptRoutine.h"
#include "DriverLib/PIE/PIE.h"

XINT_nERROR XINT__enRegisterIRQVectorHandler(MCU__pvfIRQVectorHandler_t pvfIrqVectorHandler,
                                             XINT_nMODULE enModuleArg)
{
    PIE_nVECTOR_IRQ enVectorReg;
    XINT_nERROR enErrorReg;
    PIE_nERROR enPieErrorReg;
    MCU__pvfIRQVectorHandler_t* pvfIrqVectorArray;
    const PIE_nVECTOR_IRQ VECTOR_IRQ_XINT[(uint16_t) XINT_enMODULE_MAX]=
    {
     PIE_enVECTOR_IRQ_XINT1, PIE_enVECTOR_IRQ_XINT2, PIE_enVECTOR_IRQ_XINT3
    };

    if(0UL != (uintptr_t) pvfIrqVectorHandler)
    {
        pvfIrqVectorArray = XINT__pvfGetIRQVectorHandlerPointer(enModuleArg);
        enVectorReg = VECTOR_IRQ_XINT[(uint16_t) enModuleArg];
        enPieErrorReg = PIE__enRegisterIRQVectorHandler(pvfIrqVectorHandler, pvfIrqVectorArray, enVectorReg);
        if(PIE_enERROR_POINTER == enPieErrorReg)
        {
            enErrorReg = XINT_enERROR_POINTER;
        }
        else if(PIE_enERROR_OK != enPieErrorReg)
        {
            enErrorReg = XINT_enERROR_UNDEFINED;
        }
    }
    else
    {
        enErrorReg = XINT_enERROR_POINTER;
    }
    return (enErrorReg);
}
