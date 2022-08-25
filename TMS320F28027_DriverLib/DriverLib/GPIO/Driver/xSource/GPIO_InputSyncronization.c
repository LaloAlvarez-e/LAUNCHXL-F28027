/**
 *
 * @file GPIO_InputSyncronization.c
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
 * @verbatim 24 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/GPIO/Driver/xHeader/GPIO_InputSyncronization.h"

#include "DriverLib/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h"
#include "DriverLib/GPIO/Peripheral/GPIO_Peripheral.h"

GPIO_nERROR GPIO__enSetInputSyncronization(GPIO_nPORT enModuleArg, uint32_t u32PinArg, GPIO_nSYNC enSyncArg)
{
    uint16_t u16BitNumber;
    GPIO_nERROR enErrorReg;

    if((GPIO_enPORT_A == enModuleArg) || (GPIO_enPORT_B == enModuleArg))
    {
        enErrorReg = GPIO_enERROR_VALUE;
        u16BitNumber = 0U;
        while(0U != u32PinArg)
        {
            if(1U & u32PinArg)
            {
                enErrorReg = GPIO__enSetInputSyncronizationByNumber(enModuleArg, (GPIO_nPIN_NUMBER) u16BitNumber, enSyncArg);
            }
            u32PinArg >>= 1U;
            u16BitNumber++;
        }
    }
    else
    {
        enErrorReg = GPIO_enERROR_ARG;
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetInputSyncronizationByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg, GPIO_nSYNC enSyncArg)
{
    GPIO_Register_t stRegister;
    uint16_t u16OffsetReg;
    uint16_t u16ShiftReg;
    GPIO_nERROR enErrorReg;

    if((GPIO_enPORT_A == enModuleArg) || (GPIO_enPORT_B == enModuleArg))
    {
        enErrorReg = GPIO_enERROR_OK;
        u16OffsetReg = (uint16_t) enPinNumberArg;
        u16OffsetReg >>= 4U;
        u16OffsetReg &= 0x1U;
        u16OffsetReg += GPIO_CONTROL_QSEL_LOW_OFFSET;

        u16ShiftReg = (uint16_t) enPinNumberArg;
        u16OffsetReg &= 0xFU;
        u16ShiftReg <<= 1U;

        stRegister.u16Shift = u16ShiftReg;
        stRegister.u32Mask = GPIO_CONTROL_QSEL_LOW_PIN0_MASK;
        stRegister.uptrAddress = u16OffsetReg;
        stRegister.u32Value = (uint32_t) enSyncArg;
        GPIO_CONTROL__vWriteRegister(enModuleArg, &stRegister);
    }
    else
    {
        enErrorReg = GPIO_enERROR_ARG;
    }

    return (enErrorReg);
}


GPIO_nSYNC GPIO__enGetInputSyncronizationByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg)
{
    GPIO_Register_t stRegister;
    uint16_t u16OffsetReg;
    uint16_t u16ShiftReg;
    GPIO_nSYNC enSyncReg;

    if((GPIO_enPORT_A == enModuleArg) || (GPIO_enPORT_B == enModuleArg))
    {
        u16OffsetReg = (uint16_t) enPinNumberArg;
        u16OffsetReg >>= 4U;
        u16OffsetReg &= 0x1U;
        u16OffsetReg += GPIO_CONTROL_QSEL_LOW_OFFSET;

        u16ShiftReg = (uint16_t) enPinNumberArg;;
        u16OffsetReg &= 0xFU;
        u16ShiftReg <<= 1U;

        stRegister.u16Shift = u16ShiftReg;
        stRegister.u32Mask = GPIO_CONTROL_QSEL_LOW_PIN0_MASK;
        stRegister.uptrAddress = u16OffsetReg;
        enSyncReg = (GPIO_nSYNC) GPIO__u32ReadRegister(enModuleArg, &stRegister);
    }
    else
    {
        enSyncReg = GPIO_enSYNC_SYSCLK;
    }

    return (enSyncReg);
}





GPIO_nERROR GPIO__enSetInputSyncronizationByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg, GPIO_nSYNC enSyncArg)
{
    uint32_t u32FunctionReg;
    uint32_t u32BitNumberReg;
    uint32_t u32ModuleReg;
    GPIO_nERROR enErrorReg;

    u32FunctionReg = (uint32_t) enFunctionArg;

    u32FunctionReg >>= 8U;
    u32BitNumberReg = u32FunctionReg;
    u32BitNumberReg &= 0xFFU;

    u32FunctionReg >>= 8U;
    u32ModuleReg = u32FunctionReg;
    u32ModuleReg &= 0xFFU;

    enErrorReg = GPIO__enSetInputSyncronizationByNumber((GPIO_nPORT) u32ModuleReg, (GPIO_nPIN_NUMBER) u32BitNumberReg, enSyncArg);

    return (enErrorReg);
}


GPIO_nSYNC GPIO__enGetInputSyncronizationByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg)
{
    uint32_t u32FunctionReg;
    uint32_t u32BitNumberReg;
    uint32_t u32ModuleReg;
    GPIO_nSYNC enSyncReg;

    u32FunctionReg = (uint32_t) enFunctionArg;

    u32FunctionReg >>= 8U;
    u32BitNumberReg = u32FunctionReg;
    u32BitNumberReg &= 0xFFU;

    u32FunctionReg >>= 8U;
    u32ModuleReg = u32FunctionReg;
    u32ModuleReg &= 0xFFU;

    enSyncReg = GPIO__enGetInputSyncronizationByNumber((GPIO_nPORT) u32ModuleReg, (GPIO_nPIN_NUMBER) u32BitNumberReg);
    return (enSyncReg);
}




