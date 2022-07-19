/**
 *
 * @file MCU_RegisterSourceIRQ.c
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
#include "DriverLib/MCU/xHeader/MCU_RegisterSourceIRQ.h"
#include "DriverLib/MCU/xHeader/MCU_CheckParams.h"

void MCU__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),
                                    void (**pfIrqArrayHandler) (void),
                                    uint32_t u32InterruptSource,
                                    uint32_t u32InteruptSourceMax)
{
    uint32_t u32Interrupt;
    if((0UL != (uintptr_t) pfIrqSourceHandler) && (0UL != (uintptr_t) pfIrqArrayHandler) )
    {
        u32Interrupt = MCU__u32CheckParams(u32InterruptSource, u32InteruptSourceMax);
        pfIrqArrayHandler += u32Interrupt;
        *pfIrqArrayHandler = pfIrqSourceHandler;
    }
}

void MCU__vRegisterIRQSourceHandler_RAM(void (*pfIrqSourceHandler) (void),
                                    void (**pfIrqArrayHandler) (void),
                                    uint32_t u32InterruptSource,
                                    uint32_t u32InteruptSourceMax)
{
    uint32_t u32Interrupt;
    if((0UL != (uintptr_t) pfIrqSourceHandler) && (0UL != (uintptr_t) pfIrqArrayHandler) )
    {
        u32Interrupt = MCU__u32CheckParams_RAM(u32InterruptSource, u32InteruptSourceMax);
        pfIrqArrayHandler += u32Interrupt;
        *pfIrqArrayHandler = pfIrqSourceHandler;
    }
}
