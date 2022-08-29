/**
 *
 * @file ECAP_InterruptVector.c
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
#include <DriverLib/ECAP/Driver/Intrinsics/Interrupt/xHeader/ECAP_InterruptVector.h>

#include <DriverLib/PIE/PIE.h>

static PIE_nVECTOR_IRQ ECAP__enGetInterruptVector(ECAP_nMODULE enModuleArg);

static PIE_nVECTOR_IRQ ECAP__enGetInterruptVector(ECAP_nMODULE enModuleArg)
{
    PIE_nVECTOR_IRQ enVectorReg;
    PIE_nVECTOR_IRQ VECTOR_IRQ_ECAP[(uint16_t) ECAP_enMODULE_MAX] =
    {
     PIE_enVECTOR_IRQ_ECAP1,
    };

    enVectorReg = VECTOR_IRQ_ECAP[(uint16_t) enModuleArg];
    return (enVectorReg);
}

void ECAP__vEnableInterruptVector(ECAP_nMODULE enModuleArg)
{
    PIE_nVECTOR_IRQ enVectorReg;
    enVectorReg = ECAP__enGetInterruptVector(enModuleArg);
    PIE__vEnableIRQVector(enVectorReg);
}

void ECAP__vDisableInterruptVector(ECAP_nMODULE enModuleArg)
{
    PIE_nVECTOR_IRQ enVectorReg;
    enVectorReg = ECAP__enGetInterruptVector(enModuleArg);
    PIE__vDisableIRQVector(enVectorReg);
}
