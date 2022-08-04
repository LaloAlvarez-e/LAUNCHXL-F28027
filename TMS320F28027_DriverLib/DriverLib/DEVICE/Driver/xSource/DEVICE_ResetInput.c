/**
 *
 * @file DEVICE_ResetInput.c
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
#include "DriverLib/DEVICE/Driver/xHeader/DEVICE_ResetInput.h"
#include "DriverLib/DEVICE/Driver/Intrinsics/DEVICE_Intrinsics.h"
#include "DriverLib/DEVICE/Peripheral/DEVICE_Peripheral.h"

DEVICE_nRESET_INPUT DEVICE__enGetResetInputStatus(void)
{
    DEVICE_Register32Bits_t stRegister;

    stRegister.u16Shift = DEVICE_CNF_R_XRS_BIT;
    stRegister.u32Mask = DEVICE_CNF_XRS_MASK;
    stRegister.uptrAddress = DEVICE_CNF_OFFSET;
    stRegister.u32Value = (uint32_t) DEVICE_enRESET_INPUT_LOW;
    DEVICE__u32ReadRegister(&stRegister);
    return ((DEVICE_nRESET_INPUT) stRegister.u32Value);
}




