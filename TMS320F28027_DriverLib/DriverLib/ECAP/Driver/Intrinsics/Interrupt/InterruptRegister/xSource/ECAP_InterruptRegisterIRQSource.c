/**
 *
 * @file ECAP_InterruptRegisterIRQSource.c
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
#include "DriverLib/ECAP/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/ECAP_InterruptRegisterIRQSource.h"

#include "DriverLib/ECAP/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ECAP_InterruptRoutine_Source.h"
#include "DriverLib/ECAP/Peripheral/ECAP_Peripheral.h"
#include <DriverLib/MCU/xHeader/MCU_RegisterIRQSource.h>

ECAP_nERROR ECAP__enRegisterIRQSourceHandler(MCU__pvfIRQSourceHandler_t pvfIrqSourceHandler,
                                      ECAP_nMODULE enModuleArg, ECAP_nINTERRUPT enInterruptArg)
{
    MCU__pvfIRQSourceHandler_t* pvfIrqSourcePointer;
    ECAP_nERROR enErrorReg;
    MCU_error_t enMcuErrorReg;
    if(0UL != (uintptr_t) pvfIrqSourceHandler)
    {
        enErrorReg = ECAP_enERROR_OK;
        pvfIrqSourcePointer = ECAP__pvfGetIRQSourceHandlerPointer(enModuleArg, enInterruptArg);
        enMcuErrorReg = MCU__enRegisterIRQSourceHandler(pvfIrqSourceHandler, pvfIrqSourcePointer, 0UL, 1UL);
        if(MCU_error_pointer == enMcuErrorReg)
        {
            enErrorReg = ECAP_enERROR_POINTER;
        }
        else if(MCU_error_OK != enMcuErrorReg)
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
