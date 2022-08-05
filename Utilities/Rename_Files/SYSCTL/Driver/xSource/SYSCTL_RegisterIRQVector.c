/**
 *
 * @file SYSCTL_RegisterIRQVector.c
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
#include "DriverLib/SYSCTL/Driver/xHeader/SYSCTL_RegisterIRQVector.h"
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"

void SYSCTL__vRegisterIRQVectorHandler(MCU__pvfIRQVectorHandler_t pfIrqVectorHandler,
                                   MCU__pvfIRQVectorHandler_t* pfIrqArrayHandler,
                                   SYSCTL_nVECTOR_IRQ enIrqVectorArg)
{
    uint32_t u32InterruptVector;
    SYSCTL_VECTOR_Register_t stVectorRegister;

    if(0U != (uintptr_t) pfIrqVectorHandler)
    {
        u32InterruptVector = (uint32_t) enIrqVectorArg;
        stVectorRegister.u16Shift = 0U;
        stVectorRegister.u32Mask = 0xFFFFFFFFU;
        stVectorRegister.uptrAddress = u32InterruptVector << 1U;
        stVectorRegister.u32Value = (uint32_t) pfIrqVectorHandler;
        SYSCTL_VECTOR__vWriteRegister(&stVectorRegister);
        if(0U != (uintptr_t) pfIrqArrayHandler)
        {
            *pfIrqArrayHandler = pfIrqVectorHandler;
        }
    }
}


MCU__pvfIRQVectorHandler_t SYSCTL__pfvGetIRQVectorHandler(SYSCTL_nVECTOR_IRQ enIrqVectorArg)
{
    uint32_t u32InterruptVector;
    SYSCTL_VECTOR_Register_t stVectorRegister;

    u32InterruptVector = (uint32_t) enIrqVectorArg;
    stVectorRegister.u16Shift = 0U;
    stVectorRegister.u32Mask = 0xFFFFFFFFU;
    stVectorRegister.uptrAddress = u32InterruptVector << 1U;
    stVectorRegister.u32Value = 0U;
    SYSCTL_VECTOR__u32ReadRegister(&stVectorRegister);

    return((MCU__pvfIRQVectorHandler_t) stVectorRegister.u32Value);

}



