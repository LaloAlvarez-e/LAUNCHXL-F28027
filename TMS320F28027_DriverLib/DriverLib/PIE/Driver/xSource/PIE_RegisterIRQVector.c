/**
 *
 * @file PIE_RegisterIRQVector.c
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
 * @verbatim 21 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/PIE/Driver/xHeader/PIE_RegisterIRQVector.h"
#include "DriverLib/MCU/MCU.h"
#include "DriverLib/PIE/Peripheral/PIE_Peripheral.h"

void PIE_vRegisterIRQVectorHandler(MCU_IRQ_VECTOR_t pfIrqVectorHandler,
                                       MCU_IRQ_VECTOR_t* pfIrqArrayHandler,
                                       PIE_nVECTOR_IRQ enInterruptVector)
{
    uint32_t u32InterruptVector;
    uint16_t u16StatusRegister;

    if(0U != (uintptr_t) pfIrqVectorHandler)
    {
        u32InterruptVector = (uint32_t) enInterruptVector;
        MCU__vEnaWriteProtectedRegisters();
        u16StatusRegister = MCU__u16DisGlobalInterrupt_Debug();
        PIE_VECTOR_IRQ_ARRAY->ARRAY[u32InterruptVector] = pfIrqVectorHandler;

        MCU__vSetGlobalStatus(u16StatusRegister);
        MCU__vDisWriteProtectedRegisters();
        if(0U != (uintptr_t) pfIrqArrayHandler)
        {
            *pfIrqArrayHandler = pfIrqVectorHandler;
        }
    }
}



