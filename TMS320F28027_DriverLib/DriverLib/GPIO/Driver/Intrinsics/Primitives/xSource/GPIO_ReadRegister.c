/**
 *
 * @file GPIO_ReadRegister.c
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
 * @verbatim 22 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/GPIO/Driver/Intrinsics/Primitives/xHeader/GPIO_ReadRegister.h"
#include "DriverLib/GPIO/Peripheral/GPIO_Peripheral.h"
#include "DriverLib/MCU/MCU.h"

uint32_t GPIO__u32ReadRegister(GPIO_nPORT enPortArg, GPIO_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uint32_t u32RegisterValue;
    uptrModuleBase = GPIO__uptrBlockBaseAddress(enPortArg);
    pstModuleArg->uptrAddress += uptrModuleBase;
    u32RegisterValue = MCU__u32ReadRegister(pstModuleArg);
    return (u32RegisterValue);
}

uint32_t GPIO_CONTROL__u32ReadRegister(GPIO_nPORT enPortArg, GPIO_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uint32_t u32RegisterValue;
    uptrModuleBase = GPIO_CONTROL__uptrBlockBaseAddress(enPortArg);
    pstModuleArg->uptrAddress += uptrModuleBase;
    u32RegisterValue = MCU__u32ReadRegister(pstModuleArg);
    return (u32RegisterValue);
}

uint32_t GPIO_DATA__u32ReadRegister(GPIO_nPORT enPortArg, GPIO_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uint32_t u32RegisterValue;
    uptrModuleBase = GPIO_DATA__uptrBlockBaseAddress(enPortArg);
    pstModuleArg->uptrAddress += uptrModuleBase;
    u32RegisterValue = MCU__u32ReadRegister(pstModuleArg);
    return (u32RegisterValue);
}

