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
#include "DriverLib/PIE/Driver/Intrinsics/PIE_Intrinsics.h"

PIE_nERROR PIE__enRegisterIRQVectorHandler(MCU__pvfIRQVectorHandler_t pfIrqVectorHandler,
                                   MCU__pvfIRQVectorHandler_t* pfIrqArrayHandler,
                                   PIE_nVECTOR_IRQ enIrqVectorArg)
{
    uint32_t u32InterruptVector;
    PIE_VECTOR_Register_t stVectorRegister;
    PIE_nERROR enErrorReg;

    if(0U != (uintptr_t) pfIrqVectorHandler)
    {
        enErrorReg = PIE_enERROR_OK;
        u32InterruptVector = (uint32_t) enIrqVectorArg;
        stVectorRegister.u16Shift = 0U;
        stVectorRegister.u32Mask = 0xFFFFFFFFU;
        stVectorRegister.uptrAddress = u32InterruptVector << 1U;
        stVectorRegister.u32Value = (uint32_t) pfIrqVectorHandler;
        PIE_VECTOR__vWriteRegister(&stVectorRegister);
        if(0U != (uintptr_t) pfIrqArrayHandler)
        {
            *pfIrqArrayHandler = pfIrqVectorHandler;
        }
    }
    else
    {
        enErrorReg = PIE_enERROR_POINTER;
    }
    return (enErrorReg);
}


MCU__pvfIRQVectorHandler_t PIE__pfvGetIRQVectorHandler(PIE_nVECTOR_IRQ enIrqVectorArg)
{
    uint32_t u32InterruptVector;
    PIE_VECTOR_Register_t stVectorRegister;

    u32InterruptVector = (uint32_t) enIrqVectorArg;
    stVectorRegister.u16Shift = 0U;
    stVectorRegister.u32Mask = 0xFFFFFFFFU;
    stVectorRegister.uptrAddress = u32InterruptVector << 1U;
    stVectorRegister.u32Value = 0U;
    PIE_VECTOR__u32ReadRegister(&stVectorRegister);

    return((MCU__pvfIRQVectorHandler_t) stVectorRegister.u32Value);

}



