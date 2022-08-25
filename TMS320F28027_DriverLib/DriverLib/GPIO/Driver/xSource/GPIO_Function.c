/**
 *
 * @file GPIO_Function.c
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
 * @verbatim 23 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/GPIO/Driver/xHeader/GPIO_Function.h"

#include "DriverLib/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h"
#include "DriverLib/GPIO/Peripheral/GPIO_Peripheral.h"

void GPIO__vSetFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg)
{
    uint32_t u32FunctionReg;
    uint32_t u32BitNumberReg;
    uint32_t u32PeriphReg;
    uint32_t u32ModuleReg;

    u32FunctionReg = (uint32_t) enFunctionArg;
    u32PeriphReg = u32FunctionReg;
    u32PeriphReg &= 0xFFU;

    u32FunctionReg >>= 8U;
    u32BitNumberReg = u32FunctionReg;
    u32BitNumberReg &= 0xFFU;

    u32FunctionReg >>= 8U;
    u32ModuleReg = u32FunctionReg;
    u32ModuleReg &= 0xFFU;

    GPIO__vSetFunctionByNumber((GPIO_nPORT) u32ModuleReg, (GPIO_nPIN_NUMBER) u32BitNumberReg, (GPIO_nFUNCTION) u32PeriphReg);
}

void GPIO__vSetFunctionByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg, GPIO_nFUNCTION enFunctionArg)
{
    GPIO_Register_t stRegister;
    uint16_t u16OffsetReg;
    uint16_t u16ShiftReg;

    u16OffsetReg = (uint16_t) enPinNumberArg;
    u16OffsetReg >>= 4U;
    u16OffsetReg &= 0x1U;
    u16OffsetReg += GPIO_CONTROL_MUX_LOW_OFFSET;

    u16ShiftReg = (uint16_t) enPinNumberArg;;
    u16OffsetReg &= 0xFU;
    u16ShiftReg <<= 1U;

    stRegister.u16Shift = u16ShiftReg;
    stRegister.u32Mask = GPIO_CONTROL_MUX_LOW_PIN0_MASK;
    stRegister.uptrAddress = u16OffsetReg;
    stRegister.u32Value = (uint32_t) enFunctionArg;
    GPIO_CONTROL__vWriteRegister(enModuleArg, &stRegister);
}


GPIO_nFUNCTION GPIO__enGetFunctionByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg)
{
    GPIO_Register_t stRegister;
    uint16_t u16OffsetReg;
    uint16_t u16ShiftReg;

    u16OffsetReg = (uint16_t) enPinNumberArg;
    u16OffsetReg >>= 4U;
    u16OffsetReg &= 0x1U;
    u16OffsetReg += GPIO_CONTROL_MUX_LOW_OFFSET;

    u16ShiftReg = (uint16_t) enPinNumberArg;;
    u16OffsetReg &= 0xFU;
    u16ShiftReg <<= 1U;

    stRegister.u16Shift = u16ShiftReg;
    stRegister.u32Mask = GPIO_CONTROL_MUX_LOW_PIN0_MASK;
    stRegister.uptrAddress = u16OffsetReg;
    GPIO__u32ReadRegister(enModuleArg, &stRegister);

    return ((GPIO_nFUNCTION) stRegister.u32Value);
}
