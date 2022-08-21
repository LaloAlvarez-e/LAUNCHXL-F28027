/**
 *
 * @file XINT_InterruptVector.c
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
#include <DriverLib/XINT/Driver/Intrinsics/Interrupt/xHeader/XINT_InterruptVector.h>

#include <DriverLib/PIE/PIE.h>

static PIE_nVECTOR_IRQ XINT__enGetInterruptVector(XINT_nMODULE enModuleArg);

static PIE_nVECTOR_IRQ XINT__enGetInterruptVector(XINT_nMODULE enModuleArg)
{
    PIE_nVECTOR_IRQ enVectorReg;
    PIE_nVECTOR_IRQ VECTOR_IRQ_XINT[(uint16_t) XINT_enMODULE_MAX] =
    {
     PIE_enVECTOR_IRQ_XINT1, PIE_enVECTOR_IRQ_XINT2, PIE_enVECTOR_IRQ_XINT3,
    };

    enVectorReg = VECTOR_IRQ_XINT[(uint16_t) enModuleArg];
    return (enVectorReg);
}

void XINT__vEnableInterruptVector(XINT_nMODULE enModuleArg)
{
    PIE_nVECTOR_IRQ enVectorReg;
    enVectorReg = XINT__enGetInterruptVector(enModuleArg);
    PIE__vEnableIRQVector(enVectorReg);
}

void XINT__vDisableInterruptVector(XINT_nMODULE enModuleArg)
{
    PIE_nVECTOR_IRQ enVectorReg;
    enVectorReg = XINT__enGetInterruptVector(enModuleArg);
    PIE__vDisableIRQVector(enVectorReg);
}
