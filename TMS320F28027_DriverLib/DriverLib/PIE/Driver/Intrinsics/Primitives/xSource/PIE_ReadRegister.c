/**
 *
 * @file PIE_ReadRegister.c
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
#include "DriverLib/PIE/Driver/Intrinsics/Primitives/xHeader/PIE_ReadRegister.h"
#include "DriverLib/PIE/Peripheral/PIE_Peripheral.h"
#include "DriverLib/MCU/MCU.h"


uint16_t PIE__u16ReadRegister(PIE_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uint16_t u16RegisterValue;
    uptrModuleBase = PIE__uptrBlockBaseAddress();
    pstModuleArg->uptrAddress += uptrModuleBase;
    u16RegisterValue = MCU__u16ReadRegister(pstModuleArg);
    return (u16RegisterValue);
}

uint32_t PIE_VECTOR__u32ReadRegister(PIE_VECTOR_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uint32_t u32RegisterValue;
    uptrModuleBase = PIE_VECTOR__uptrBlockBaseAddress();
    pstModuleArg->uptrAddress += uptrModuleBase;
    u32RegisterValue = MCU__u32ReadRegister(pstModuleArg);
    return (u32RegisterValue);
}
