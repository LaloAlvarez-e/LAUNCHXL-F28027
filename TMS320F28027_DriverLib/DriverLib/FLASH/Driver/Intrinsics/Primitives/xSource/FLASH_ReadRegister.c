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
    u16RegisterValue = MCU__u16ReadRegister_RAM(pstModuleArg);
    return (u16RegisterValue);
}
