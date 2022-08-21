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

void GPIO__vSetResistor(GPIO_nPORT enModuleArg, uint32_t u32PinArg, GPIO_nRESISTOR enResistorArg)
{
    GPIO_Register_t stRegister;
    uint32_t u32Reg;

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

uint32_t GPIO__u32GetResistor(GPIO_nPORT enModuleArg, uint32_t u32PinArg)
{
    GPIO_Register_t stRegister;


    stRegister.u16Shift = GPIO_CONTROL_PUD_R_PIN0_BIT;
    stRegister.u32Mask = u32PinArg;
    stRegister.uptrAddress = GPIO_CONTROL_PUD_OFFSET;
    GPIO__u32ReadRegister(enModuleArg, &stRegister);
    return (stRegister.u32Value);
}


void GPIO__vSetResistorByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg, GPIO_nRESISTOR enResistorArg)
{
    GPIO_Register_t stRegister;

    stRegister.u16Shift = (uint16_t) enPinNumberArg;
    stRegister.u32Mask = GPIO_CONTROL_PUD_PIN0_MASK;
    stRegister.uptrAddress = GPIO_CONTROL_PUD_OFFSET;
    stRegister.u32Value = (uint32_t) enResistorArg;
    GPIO_CONTROL__vWriteRegister(enModuleArg, &stRegister);
}


GPIO_nRESISTOR GPIO__enGetResistorByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg)
{
    GPIO_Register_t stRegister;

    stRegister.u16Shift = (uint16_t) enPinNumberArg;
    stRegister.u32Mask = GPIO_CONTROL_PUD_PIN0_MASK;
    stRegister.uptrAddress = GPIO_CONTROL_PUD_OFFSET;
    GPIO__u32ReadRegister(enModuleArg, &stRegister);
    return ((GPIO_nRESISTOR) stRegister.u32Value);
}

