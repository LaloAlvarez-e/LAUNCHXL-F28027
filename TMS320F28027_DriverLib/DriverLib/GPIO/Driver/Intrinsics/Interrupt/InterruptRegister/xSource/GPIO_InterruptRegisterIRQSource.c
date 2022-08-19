/**
 *
 * @file GPIO_InterruptRegisterIRQSource.c
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
#include "DriverLib/GPIO/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/GPIO_InterruptRegisterIRQSource.h"

#include "DriverLib/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Source.h"
#include "DriverLib/GPIO/Peripheral/GPIO_Peripheral.h"
#include <DriverLib/MCU/xHeader/MCU_RegisterIRQSource.h>

GPIO_nERROR GPIO__enRegisterIRQSourceHandler(MCU__pvfIRQSourceHandler_t pvfIrqSourceHandler,
                                      GPIO_nXINT enExternalIntArg)
{
    MCU__pvfIRQSourceHandler_t* pvfIrqSourcePointer;
    GPIO_nERROR enErrorReg;
    MCU_error_t enMcuErrorReg;
    if(0UL != (uintptr_t) pvfIrqSourceHandler)
    {
        enErrorReg = GPIO_enERROR_OK;
        pvfIrqSourcePointer = GPIO__pvfGetIRQSourceHandlerPointer(enExternalIntArg);
        enMcuErrorReg = MCU__enRegisterIRQSourceHandler(pvfIrqSourceHandler, pvfIrqSourcePointer, 0UL, 1UL);
        if(MCU_error_pointer == enMcuErrorReg)
        {
            enErrorReg = GPIO_enERROR_POINTER;
        }
        else if(MCU_error_OK != enMcuErrorReg)
        {
            enErrorReg = GPIO_enERROR_UNDEFINED;
        }
    }
    else
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    return (enErrorReg);
}
