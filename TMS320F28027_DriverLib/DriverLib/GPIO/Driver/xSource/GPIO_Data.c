/**
 *
 * @file GPIO_Data.c
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
 * @verbatim 25 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/GPIO/Driver/xHeader/GPIO_Data.h"

#include "DriverLib/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h"
#include "DriverLib/GPIO/Peripheral/GPIO_Peripheral.h"

void GPIO__vData(GPIO_nPORT enModuleArg, uint32_t u32PinArg, uint32_t u32ValueArg)
{
    GPIO_Register_t stRegister;

    stRegister.u16Shift = GPIO_DATA_DAT_R_PIN0_BIT;
    stRegister.u32Mask = u32PinArg;
    stRegister.uptrAddress = GPIO_DATA_DAT_OFFSET;
    stRegister.u32Value = u32ValueArg;
    GPIO_DATA__vWriteRegister(enModuleArg, &stRegister);
}

void GPIO__vSetData(GPIO_nPORT enModuleArg, uint32_t u32PinArg)
{
    GPIO_Register_t stRegister;

    stRegister.u16Shift = GPIO_DATA_SET_R_PIN0_BIT;
    stRegister.u32Mask = GPIO_DATA_SET_PIN_MASK;
    stRegister.uptrAddress = GPIO_DATA_SET_OFFSET;
    stRegister.u32Value = u32PinArg;
    GPIO_DATA__vWriteRegister(enModuleArg, &stRegister);
}

void GPIO__vClearData(GPIO_nPORT enModuleArg, uint32_t u32PinArg)
{
    GPIO_Register_t stRegister;

    stRegister.u16Shift = GPIO_DATA_CLEAR_R_PIN0_BIT;
    stRegister.u32Mask = GPIO_DATA_CLEAR_PIN_MASK;
    stRegister.uptrAddress = GPIO_DATA_CLEAR_OFFSET;
    stRegister.u32Value = u32PinArg;
    GPIO_DATA__vWriteRegister(enModuleArg, &stRegister);
}

void GPIO__vToggleData(GPIO_nPORT enModuleArg, uint32_t u32PinArg)
{
    GPIO_Register_t stRegister;

    stRegister.u16Shift = GPIO_DATA_TOGGLE_R_PIN0_BIT;
    stRegister.u32Mask = GPIO_DATA_TOGGLE_PIN_MASK;
    stRegister.uptrAddress = GPIO_DATA_TOGGLE_OFFSET;
    stRegister.u32Value = u32PinArg;
    GPIO_DATA__vWriteRegister(enModuleArg, &stRegister);
}

uint32_t GPIO__u32GetData(GPIO_nPORT enModuleArg, uint32_t u32PinArg)
{
    GPIO_Register_t stRegister;

    stRegister.u16Shift = GPIO_DATA_DAT_R_PIN0_BIT;
    stRegister.u32Mask = u32PinArg;
    stRegister.uptrAddress = GPIO_DATA_DAT_OFFSET;
    GPIO__u32ReadRegister(enModuleArg, &stRegister);
    return (stRegister.u32Value);
}



void GPIO__vDataByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg, GPIO_nVALUE enValueArg)
{
    if(GPIO_enVALUE_LOW == enValueArg)
    {
        GPIO__vClearDataByNumber(enModuleArg, enPinNumberArg);
    }
    else
    {
        GPIO__vSetDataByNumber(enModuleArg, enPinNumberArg);
    }
}


void GPIO__vSetDataByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg)
{
    uint32_t u32PinValue;

    u32PinValue = 1U;
    u32PinValue <<= (uint32_t) enPinNumberArg;

    GPIO__vSetData(enModuleArg, u32PinValue);
}

void GPIO__vClearDataByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg)
{
    uint32_t u32PinValue;

    u32PinValue = 1U;
    u32PinValue <<= (uint32_t) enPinNumberArg;

    GPIO__vClearData(enModuleArg, u32PinValue);
}

void GPIO__vToggleDataByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg)
{
    uint32_t u32PinValue;

    u32PinValue = 1U;
    u32PinValue <<= (uint32_t) enPinNumberArg;

    GPIO__vToggleData(enModuleArg, u32PinValue);
}

GPIO_nVALUE GPIO__enGetDataByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg)
{
    GPIO_Register_t stRegister;

    stRegister.u16Shift = (uint16_t) enPinNumberArg;
    stRegister.u32Mask = GPIO_DATA_DAT_PIN0_MASK;
    stRegister.uptrAddress = GPIO_DATA_DAT_OFFSET;
    GPIO__u32ReadRegister(enModuleArg, &stRegister);
    return ((GPIO_nVALUE) stRegister.u32Value);
}


void GPIO__vDataByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg, GPIO_nVALUE enValueArg)
{
    uint32_t u32FunctionReg;
    uint32_t u32BitNumberReg;
    uint32_t u32ModuleReg;

    u32FunctionReg = (uint32_t) enFunctionArg;

    u32FunctionReg >>= 8U;
    u32BitNumberReg = u32FunctionReg;
    u32BitNumberReg &= 0xFFU;

    u32FunctionReg >>= 8U;
    u32ModuleReg = u32FunctionReg;
    u32ModuleReg &= 0xFFU;

    GPIO__vDataByNumber((GPIO_nPORT) u32ModuleReg, (GPIO_nPIN_NUMBER) u32BitNumberReg, enValueArg);
}

void GPIO__vSetDataByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg)
{
    uint32_t u32FunctionReg;
    uint32_t u32BitNumberReg;
    uint32_t u32ModuleReg;

    u32FunctionReg = (uint32_t) enFunctionArg;

    u32FunctionReg >>= 8U;
    u32BitNumberReg = u32FunctionReg;
    u32BitNumberReg &= 0xFFU;

    u32FunctionReg >>= 8U;
    u32ModuleReg = u32FunctionReg;
    u32ModuleReg &= 0xFFU;

    GPIO__vSetDataByNumber((GPIO_nPORT) u32ModuleReg, (GPIO_nPIN_NUMBER) u32BitNumberReg);
}

void GPIO__vClearDataByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg)
{
    uint32_t u32FunctionReg;
    uint32_t u32BitNumberReg;
    uint32_t u32ModuleReg;

    u32FunctionReg = (uint32_t) enFunctionArg;

    u32FunctionReg >>= 8U;
    u32BitNumberReg = u32FunctionReg;
    u32BitNumberReg &= 0xFFU;

    u32FunctionReg >>= 8U;
    u32ModuleReg = u32FunctionReg;
    u32ModuleReg &= 0xFFU;

    GPIO__vClearDataByNumber((GPIO_nPORT) u32ModuleReg, (GPIO_nPIN_NUMBER) u32BitNumberReg);
}

void GPIO__vToggleDataByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg)
{
    uint32_t u32FunctionReg;
    uint32_t u32BitNumberReg;
    uint32_t u32ModuleReg;

    u32FunctionReg = (uint32_t) enFunctionArg;

    u32FunctionReg >>= 8U;
    u32BitNumberReg = u32FunctionReg;
    u32BitNumberReg &= 0xFFU;

    u32FunctionReg >>= 8U;
    u32ModuleReg = u32FunctionReg;
    u32ModuleReg &= 0xFFU;

    GPIO__vToggleDataByNumber((GPIO_nPORT) u32ModuleReg, (GPIO_nPIN_NUMBER) u32BitNumberReg);
}

GPIO_nVALUE GPIO__enGetDataByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg)
{
    uint32_t u32FunctionReg;
    uint32_t u32BitNumberReg;
    uint32_t u32ModuleReg;
    GPIO_nVALUE enValueReg;

    u32FunctionReg = (uint32_t) enFunctionArg;

    u32FunctionReg >>= 8U;
    u32BitNumberReg = u32FunctionReg;
    u32BitNumberReg &= 0xFFU;

    u32FunctionReg >>= 8U;
    u32ModuleReg = u32FunctionReg;
    u32ModuleReg &= 0xFFU;

    enValueReg = GPIO__enGetDataByNumber((GPIO_nPORT) u32ModuleReg, (GPIO_nPIN_NUMBER) u32BitNumberReg);
    return (enValueReg);
}





