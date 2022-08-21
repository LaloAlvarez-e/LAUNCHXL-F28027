/**
 *
 * @file TIMER_Config.c
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
#include "DriverLib/TIMER/Driver/xHeader/TIMER_Config.h"

#include "DriverLib/TIMER/Driver/xHeader/TIMER_State.h"
#include "DriverLib/TIMER/Driver/xHeader/TIMER_EmuMode.h"
#include "DriverLib/TIMER/Driver/xHeader/TIMER_Period.h"
#include "DriverLib/TIMER/Driver/xHeader/TIMER_Reload.h"

#include "DriverLib/TIMER/Driver/Intrinsics/TIMER_Intrinsics.h"

TIMER_nERROR TIMER__enConfig(TIMER_nMODULE enModuleArg,
                               TIMER_Config_t* pstConfigArg)
{
    TIMER_nERROR enErrorReg;
    if(0UL != (uintptr_t) pstConfigArg)
    {
        enErrorReg = TIMER_enERROR_OK;

        TIMER__vSetState(enModuleArg, TIMER_enSTATE_STOP);
        TIMER__vSetEmulationMode(enModuleArg, pstConfigArg->enEmulationMode);
        TIMER__u64SetPeriodUs(enModuleArg, pstConfigArg->u16PeriodUs);
        TIMER__vReload(enModuleArg);
    }
    else
    {
        enErrorReg = TIMER_enERROR_POINTER;
    }
    return (enErrorReg);
}


TIMER_nERROR TIMER__enConfigExt(TIMER_nMODULE enModuleArg,
                               TIMER_ConfigExt_t* pstConfigArg)
{
    TIMER_nERROR enErrorReg;
    if(0UL != (uintptr_t) pstConfigArg)
    {
        enErrorReg = TIMER_enERROR_OK;

        TIMER__vSetState(enModuleArg, TIMER_enSTATE_STOP);
        TIMER__vSetEmulationMode(enModuleArg, pstConfigArg->enEmulationMode);
        TIMER__u64SetPeriodUs(enModuleArg, pstConfigArg->u16PeriodUs);
        TIMER__vClearInterruptSource(enModuleArg);
        if(TIMER_enINT_STATE_ENABLE == pstConfigArg->enInterruptState)
        {
            TIMER__vEnableInterruptSource(enModuleArg);
            TIMER__vEnableInterruptVector(enModuleArg);
        }
        else
        {
            TIMER__vDisableInterruptSource(enModuleArg);
            TIMER__vDisableInterruptVector(enModuleArg);
        }
        TIMER__vReload(enModuleArg);
    }
    else
    {
        enErrorReg = TIMER_enERROR_POINTER;
    }
    return (enErrorReg);
}


