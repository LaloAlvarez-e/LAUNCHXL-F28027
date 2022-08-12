/**
 *
 * @file TIMER_InterruptVector.c
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
#include <DriverLib/TIMER/Driver/Intrinsics/Interrupt/xHeader/TIMER_InterruptVector.h>

#include <DriverLib/PIE/PIE.h>

static PIE_nVECTOR_IRQ TIMER__enGetInterruptVector(TIMER_nMODULE enModuleArg);

static PIE_nVECTOR_IRQ TIMER__enGetInterruptVector(TIMER_nMODULE enModuleArg)
{
    PIE_nVECTOR_IRQ enVectorReg;
    PIE_nVECTOR_IRQ VECTOR_IRQ_TIMER[(uint16_t) TIMER_enMODULE_MAX] =
    {
     PIE_enVECTOR_IRQ_T0, PIE_enVECTOR_IRQ_T1, PIE_enVECTOR_IRQ_T2,
    };

    enVectorReg = VECTOR_IRQ_TIMER[(uint16_t) enModuleArg];
    return (enVectorReg);
}

void TIMER__vEnableInterruptVector(TIMER_nMODULE enModuleArg)
{
    PIE_nVECTOR_IRQ enVectorReg;
    enVectorReg = TIMER__enGetInterruptVector(enModuleArg);
    PIE__vEnableIRQVector(enVectorReg);
}

void TIMER__vDisableInterruptVector(TIMER_nMODULE enModuleArg)
{
    PIE_nVECTOR_IRQ enVectorReg;
    enVectorReg = TIMER__enGetInterruptVector(enModuleArg);
    PIE__vDisableIRQVector(enVectorReg);
}
