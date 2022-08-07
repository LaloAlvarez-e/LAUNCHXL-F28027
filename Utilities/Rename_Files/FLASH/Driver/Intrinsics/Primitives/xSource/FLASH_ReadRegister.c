/**
 *
 * @file FLASH_ReadRegister.c
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
#include "DriverLib/FLASH/Driver/Intrinsics/Primitives/xHeader/FLASH_ReadRegister.h"
#include "DriverLib/FLASH/Peripheral/FLASH_Peripheral.h"
#include "DriverLib/MCU/MCU.h"


uint16_t FLASH__u16ReadRegister(FLASH_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uint16_t u16RegisterValue;
    uptrModuleBase = FLASH__uptrBlockBaseAddress();
    pstModuleArg->uptrAddress += uptrModuleBase;
    u16RegisterValue = MCU__u16ReadRegister(pstModuleArg);
    return (u16RegisterValue);
}

uint32_t FLASH_VECTOR__u32ReadRegister(FLASH_VECTOR_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uint32_t u32RegisterValue;
    uptrModuleBase = FLASH_VECTOR__uptrBlockBaseAddress();
    pstModuleArg->uptrAddress += uptrModuleBase;
    u32RegisterValue = MCU__u32ReadRegister(pstModuleArg);
    return (u32RegisterValue);
}
