/**
 *
 * @file DEVICE_Debugger.c
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
 * @verbatim 3 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/DEVICE/Driver/xHeader/DEVICE_Debugger.h"
#include "DriverLib/DEVICE/Driver/Intrinsics/DEVICE_Intrinsics.h"
#include "DriverLib/DEVICE/Peripheral/DEVICE_Peripheral.h"

DEVICE_nDEBUGGER DEVICE__enGetDebuggerStatus(void)
{
    DEVICE_Register32Bits_t stRegister;

    stRegister.u16Shift = DEVICE_CNF_R_TRST_BIT;
    stRegister.u32Mask = DEVICE_CNF_TRST_MASK;
    stRegister.uptrAddress = DEVICE_CNF_OFFSET;
    stRegister.u32Value = (uint32_t) DEVICE_enDEBUGGER_DISCONNECT;
    DEVICE__u32ReadRegister(&stRegister);
    return ((DEVICE_nDEBUGGER) stRegister.u32Value);
}




