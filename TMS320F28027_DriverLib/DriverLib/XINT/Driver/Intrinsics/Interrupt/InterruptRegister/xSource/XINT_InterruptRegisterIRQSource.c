/**
 *
 * @file XINT_InterruptRegisterIRQSource.c
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
#include "DriverLib/XINT/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/XINT_InterruptRegisterIRQSource.h"

#include "DriverLib/XINT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/XINT_InterruptRoutine_Source.h"
#include "DriverLib/XINT/Peripheral/XINT_Peripheral.h"
#include <DriverLib/MCU/xHeader/MCU_RegisterIRQSource.h>

XINT_nERROR XINT__enRegisterIRQSourceHandler(MCU__pvfIRQSourceHandler_t pvfIrqSourceHandler,
                                      XINT_nMODULE enModuleArg)
{
    MCU__pvfIRQSourceHandler_t* pvfIrqSourcePointer;
    XINT_nERROR enErrorReg;
    MCU_error_t enMcuErrorReg;
    if(0UL != (uintptr_t) pvfIrqSourceHandler)
    {
        enErrorReg = XINT_enERROR_OK;
        pvfIrqSourcePointer = XINT__pvfGetIRQSourceHandlerPointer(enModuleArg);
        enMcuErrorReg = MCU__enRegisterIRQSourceHandler(pvfIrqSourceHandler, pvfIrqSourcePointer, 0UL, 1UL);
        if(MCU_error_pointer == enMcuErrorReg)
        {
            enErrorReg = XINT_enERROR_POINTER;
        }
        else if(MCU_error_OK != enMcuErrorReg)
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
