/**
 *
 * @file XINT_Config.c
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
 * @verbatim 21 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/XINT/Driver/xHeader/XINT_Config.h"

#include "DriverLib/XINT/Driver/xHeader/XINT_Edge.h"
#include "DriverLib/XINT/Driver/xHeader/XINT_Pin.h"

#include "DriverLib/XINT/Driver/Intrinsics/XINT_Intrinsics.h"

XINT_nERROR XINT__enConfig(XINT_nMODULE enModuleArg,
                               XINT_Config_t* pstConfigArg)
{
    XINT_nERROR enErrorReg;
    if(0UL != (uintptr_t) pstConfigArg)
    {
        enErrorReg = XINT_enERROR_OK;

        XINT__vSetEdge(enModuleArg, pstConfigArg->enEdge);
        XINT__vSetPin(enModuleArg, pstConfigArg->enPin);
    }
    else
    {
        enErrorReg = XINT_enERROR_POINTER;
    }
    return (enErrorReg);
}


XINT_nERROR XINT__enConfigExt(XINT_nMODULE enModuleArg,
                               XINT_ConfigExt_t* pstConfigArg)
{
    XINT_nERROR enErrorReg;
    if(0UL != (uintptr_t) pstConfigArg)
    {
        enErrorReg = XINT_enERROR_OK;

        XINT__vSetEdge(enModuleArg, pstConfigArg->enEdge);
        XINT__vSetPin(enModuleArg, pstConfigArg->enPin);
        if(XINT_enSTATE_ENABLE == pstConfigArg->enInterruptState)
        {
            XINT__vEnableInterruptSource(enModuleArg);
            XINT__vEnableInterruptVector(enModuleArg);
        }
        else
        {
            XINT__vDisableInterruptSource(enModuleArg);
            XINT__vDisableInterruptVector(enModuleArg);
        }
    }
    else
    {
        enErrorReg = XINT_enERROR_POINTER;
    }
    return (enErrorReg);
}






