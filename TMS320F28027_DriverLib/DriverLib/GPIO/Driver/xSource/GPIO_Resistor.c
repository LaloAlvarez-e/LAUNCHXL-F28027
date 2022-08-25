/**
 *
 * @file GPIO_Resistor.c
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
 * @verbatim 21 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/GPIO/Driver/xHeader/GPIO_Resistor.h"

#include "DriverLib/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h"
#include "DriverLib/GPIO/Peripheral/GPIO_Peripheral.h"

GPIO_nERROR GPIO__enSetResistor(GPIO_nPORT enModuleArg, uint32_t u32PinArg, GPIO_nRESISTOR enResistorArg)
{
    GPIO_Register_t stRegister;
    uint32_t u32Reg;
    GPIO_nERROR enErrorReg;

    if((GPIO_enPORT_A == enModuleArg) || (GPIO_enPORT_B == enModuleArg))
    {
        enErrorReg = GPIO_enERROR_OK;
        if(GPIO_enRESISTOR_PULLUP == enResistorArg)
        {
            u32Reg = 0U;
        }
        else
        {
            u32Reg = u32PinArg;
        }

        stRegister.u16Shift = GPIO_CONTROL_PUD_R_PIN0_BIT;
        stRegister.u32Mask = u32PinArg;
        stRegister.uptrAddress = GPIO_CONTROL_PUD_OFFSET;
        stRegister.u32Value = u32Reg;
        GPIO_CONTROL__vWriteRegister(enModuleArg, &stRegister);
    }
    else
    {
        enErrorReg = GPIO_enERROR_ARG;
    }

    return (enErrorReg);
}

uint32_t GPIO__u32GetResistor(GPIO_nPORT enModuleArg, uint32_t u32PinArg)
{
    GPIO_Register_t stRegister;
    uint32_t u32ResistorReg;

    if((GPIO_enPORT_A == enModuleArg) || (GPIO_enPORT_B == enModuleArg))
    {
        stRegister.u16Shift = GPIO_CONTROL_PUD_R_PIN0_BIT;
        stRegister.u32Mask = u32PinArg;
        stRegister.uptrAddress = GPIO_CONTROL_PUD_OFFSET;
        u32ResistorReg = GPIO__u32ReadRegister(enModuleArg, &stRegister);
    }
    else
    {
        u32ResistorReg = 0xFFFFFFFFU;
    }

    return (u32ResistorReg);
}


GPIO_nERROR GPIO__enSetResistorByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg, GPIO_nRESISTOR enResistorArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    if((GPIO_enPORT_A == enModuleArg) || (GPIO_enPORT_B == enModuleArg))
    {
        enErrorReg = GPIO_enERROR_OK;
        stRegister.u16Shift = (uint16_t) enPinNumberArg;
        stRegister.u32Mask = GPIO_CONTROL_PUD_PIN0_MASK;
        stRegister.uptrAddress = GPIO_CONTROL_PUD_OFFSET;
        stRegister.u32Value = (uint32_t) enResistorArg;
        GPIO_CONTROL__vWriteRegister(enModuleArg, &stRegister);
    }
    else
    {
        enErrorReg = GPIO_enERROR_ARG;
    }

    return (enErrorReg);
}


GPIO_nRESISTOR GPIO__enGetResistorByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg)
{
    GPIO_Register_t stRegister;
    GPIO_nRESISTOR enResistorReg;
    if((GPIO_enPORT_A == enModuleArg) || (GPIO_enPORT_B == enModuleArg))
    {
        stRegister.u16Shift = (uint16_t) enPinNumberArg;
        stRegister.u32Mask = GPIO_CONTROL_PUD_PIN0_MASK;
        stRegister.uptrAddress = GPIO_CONTROL_PUD_OFFSET;
        enResistorReg = (GPIO_nRESISTOR) GPIO__u32ReadRegister(enModuleArg, &stRegister);
    }
    else
    {
        enResistorReg = GPIO_enRESISTOR_NONE;
    }
    return (enResistorReg);
}


GPIO_nERROR GPIO__enSetResistorByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg, GPIO_nRESISTOR enResistorArg)
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

    enErrorReg = GPIO__enSetResistorByNumber((GPIO_nPORT) u32ModuleReg, (GPIO_nPIN_NUMBER) u32BitNumberReg, enResistorArg);

    return (enErrorReg);
}


GPIO_nRESISTOR GPIO__enGetResistorByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg)
{
    uint32_t u32FunctionReg;
    uint32_t u32BitNumberReg;
    uint32_t u32ModuleReg;
    GPIO_nRESISTOR enResistorReg;

    u32FunctionReg = (uint32_t) enFunctionArg;

    u32FunctionReg >>= 8U;
    u32BitNumberReg = u32FunctionReg;
    u32BitNumberReg &= 0xFFU;

    u32FunctionReg >>= 8U;
    u32ModuleReg = u32FunctionReg;
    u32ModuleReg &= 0xFFU;

    enResistorReg = GPIO__enGetResistorByNumber((GPIO_nPORT) u32ModuleReg, (GPIO_nPIN_NUMBER) u32BitNumberReg);
    return (enResistorReg);
}
