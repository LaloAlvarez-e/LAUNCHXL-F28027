/**
 *
 * @file GPIO_Direction.c
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
 * @verbatim 19 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/GPIO/Driver/xHeader/GPIO_Direction.h"

#include "DriverLib/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h"
#include "DriverLib/GPIO/Peripheral/GPIO_Peripheral.h"

void GPIO__vSetDirection(GPIO_nPORT enModuleArg, uint32_t u32PinArg, GPIO_nDIR enDirectionArg)
{
    GPIO_Register_t stRegister;
    uint32_t u32Reg;

    if(GPIO_enDIR_INPUT == enDirectionArg)
    {
        u32Reg = 0U;
    }
    else
    {
        u32Reg = u32PinArg;
    }

    stRegister.u16Shift = GPIO_CONTROL_DIR_R_PIN0_BIT;
    stRegister.u32Mask = u32PinArg;
    stRegister.uptrAddress = GPIO_CONTROL_DIR_OFFSET;
    stRegister.u32Value = u32Reg;
    GPIO_CONTROL__vWriteRegister(enModuleArg, &stRegister);
}

uint32_t GPIO__u32GetDirection(GPIO_nPORT enModuleArg, uint32_t u32PinArg)
{
    GPIO_Register_t stRegister;


    stRegister.u16Shift = GPIO_CONTROL_DIR_R_PIN0_BIT;
    stRegister.u32Mask = u32PinArg;
    stRegister.uptrAddress = GPIO_CONTROL_DIR_OFFSET;
    GPIO__u32ReadRegister(enModuleArg, &stRegister);
    return (stRegister.u32Value);
}



void GPIO__vSetDirectionByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg, GPIO_nDIR enDirectionArg)
{
    GPIO_Register_t stRegister;

    stRegister.u16Shift = (uint16_t) enPinNumberArg;
    stRegister.u32Mask = GPIO_CONTROL_DIR_PIN0_MASK;
    stRegister.uptrAddress = GPIO_CONTROL_DIR_OFFSET;
    stRegister.u32Value = (uint32_t) enDirectionArg;
    GPIO_CONTROL__vWriteRegister(enModuleArg, &stRegister);
}


GPIO_nDIR GPIO__enGetDirectionByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg)
{
    GPIO_Register_t stRegister;

    stRegister.u16Shift = (uint16_t) enPinNumberArg;
    stRegister.u32Mask = GPIO_CONTROL_DIR_PIN0_MASK;
    stRegister.uptrAddress = GPIO_CONTROL_DIR_OFFSET;
    GPIO__u32ReadRegister(enModuleArg, &stRegister);
    return ((GPIO_nDIR) stRegister.u32Value);
}


