/**
 *
 * @file MCU_RegisterIRQSource.c
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
 * @verbatim 17 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <DriverLib/MCU/xHeader/MCU_RegisterIRQSource.h>
#include "DriverLib/MCU/xHeader/MCU_CheckParams.h"

MCU_error_t MCU__enRegisterIRQSourceHandler(MCU__pvfIRQSourceHandler_t pfIrqSourceHandler,
                                    MCU__pvfIRQSourceHandler_t* pfIrqArrayHandler,
                                    uint32_t u32InterruptSource,
                                    uint32_t u32InteruptSourceMax)
{
    uint32_t u32Interrupt;
    MCU_error_t enErrorReg;
    if((0UL != (uintptr_t) pfIrqSourceHandler) && (0UL != (uintptr_t) pfIrqArrayHandler) )
    {
        enErrorReg = MCU_error_pointer;
        u32Interrupt = MCU__u32CheckParams(u32InterruptSource, u32InteruptSourceMax);
        pfIrqArrayHandler += u32Interrupt;
        *pfIrqArrayHandler = pfIrqSourceHandler;
    }
    else
    {
        enErrorReg = MCU_error_OK;
    }
    return (enErrorReg);
}

MCU_error_t MCU__enRegisterIRQSourceHandler_RAM(MCU__pvfIRQSourceHandler_t pfIrqSourceHandler,
                                        MCU__pvfIRQSourceHandler_t* pfIrqArrayHandler,
                                    uint32_t u32InterruptSource,
                                    uint32_t u32InteruptSourceMax)
{
    uint32_t u32Interrupt;
    MCU_error_t enErrorReg;
    if((0UL != (uintptr_t) pfIrqSourceHandler) && (0UL != (uintptr_t) pfIrqArrayHandler) )
    {
        enErrorReg = MCU_error_pointer;
        u32Interrupt = MCU__u32CheckParams_RAM(u32InterruptSource, u32InteruptSourceMax);
        pfIrqArrayHandler += u32Interrupt;
        *pfIrqArrayHandler = pfIrqSourceHandler;
    }
    else
    {
        enErrorReg = MCU_error_OK;
    }
    return (enErrorReg);
}
