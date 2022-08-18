/**
 *
 * @file PIE_Init.c
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
 * @verbatim 18 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/PIE/Driver/xHeader/PIE_Init.h"

#include "DriverLib/PIE/Driver/xHeader/PIE_Enable.h"
#include "DriverLib/PIE/Driver/xHeader/PIE_EnableIRQVector.h"
#include "DriverLib/PIE/Driver/xHeader/PIE_StatusIRQVector.h"
#include "DriverLib/PIE/Driver/xHeader/PIE_AcknowledgeIRQVector.h"

void PIE__vInit(void)
{
    uint32_t u32Iter;
    PIE__vEnable();
    for(u32Iter = 0U; u32Iter <= (uint32_t) PIE_enVECTOR_IRQ_RESERVED62; u32Iter++)
    {
        PIE__vDisableIRQVector((PIE_nVECTOR_IRQ) u32Iter);
        PIE__vDisableDebugIRQVector((PIE_nVECTOR_IRQ) u32Iter);
        PIE__vClearStatusIRQVector((PIE_nVECTOR_IRQ) u32Iter);
    }
    PIE__vClearAllAcknowledgeIRQVector();
}






