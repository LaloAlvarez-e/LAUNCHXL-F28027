/**
 *
 * @file GPIO_InterruptVector.c
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
#include <DriverLib/GPIO/Driver/Intrinsics/Interrupt/xHeader/GPIO_InterruptVector.h>

#include <DriverLib/PIE/PIE.h>

static PIE_nVECTOR_IRQ GPIO__enGetInterruptVector(GPIO_nXINT enExternalIntArg);

static PIE_nVECTOR_IRQ GPIO__enGetInterruptVector(GPIO_nXINT enExternalIntArg)
{
    PIE_nVECTOR_IRQ enVectorReg;
    PIE_nVECTOR_IRQ VECTOR_IRQ_GPIO[(uint16_t) GPIO_enXINT_MAX] =
    {
     PIE_enVECTOR_IRQ_XINT1, PIE_enVECTOR_IRQ_XINT2, PIE_enVECTOR_IRQ_XINT3,
    };

    enVectorReg = VECTOR_IRQ_GPIO[(uint16_t) enExternalIntArg];
    return (enVectorReg);
}

void GPIO__vEnableInterruptVector(GPIO_nXINT enExternalIntArg)
{
    PIE_nVECTOR_IRQ enVectorReg;
    enVectorReg = GPIO__enGetInterruptVector(enExternalIntArg);
    PIE__vEnableIRQVector(enVectorReg);
}

void GPIO__vDisableInterruptVector(GPIO_nXINT enExternalIntArg)
{
    PIE_nVECTOR_IRQ enVectorReg;
    enVectorReg = GPIO__enGetInterruptVector(enExternalIntArg);
    PIE__vDisableIRQVector(enVectorReg);
}
