/**
 *
 * @file TIMER_InterruptRegisterIRQSource.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include "DriverLib/TIMER/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/TIMER_InterruptRegisterIRQSource.h"

#include "DriverLib/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h"
#include "DriverLib/TIMER/Peripheral/TIMER_Peripheral.h"
#include <DriverLib/MCU/xHeader/MCU_RegisterIRQSource.h>

TIMER_nERROR TIMER__enRegisterIRQSourceHandler(MCU__pvfIRQSourceHandler_t pvfIrqSourceHandler,
                                      TIMER_nMODULE enModuleArg)
{
    MCU__pvfIRQSourceHandler_t* pvfIrqSourcePointer;
    TIMER_nERROR enErrorReg;
    MCU_error_t enMcuErrorReg;
    if(0UL != (uintptr_t) pvfIrqSourceHandler)
    {
        enErrorReg = TIMER_enERROR_OK;
        pvfIrqSourcePointer = TIMER__pvfGetIRQSourceHandlerPointer(enModuleArg);
        enMcuErrorReg = MCU__enRegisterIRQSourceHandler(pvfIrqSourceHandler, pvfIrqSourcePointer, 0UL, 1UL);
        if(MCU_error_pointer == enMcuErrorReg)
        {
            enErrorReg = TIMER_enERROR_POINTER;
        }
        else if(MCU_error_OK != enMcuErrorReg)
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
