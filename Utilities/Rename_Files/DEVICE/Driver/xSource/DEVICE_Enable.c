/**
 *
 * @file DEVICE_Enable.c
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
 * @verbatim 28 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/DEVICE/Driver/xHeader/DEVICE_Enable.h"
#include "DriverLib/DEVICE/Driver/Intrinsics/DEVICE_Intrinsics.h"
#include "DriverLib/DEVICE/Peripheral/DEVICE_Peripheral.h"

void DEVICE__vSetEnable(DEVICE_nENABLE enEnableArg)
{
    DEVICE_Register_t stRegister;

    stRegister.u16Shift = DEVICE_CTRL_R_EN_BIT;
    stRegister.u16Mask = DEVICE_CTRL_EN_MASK;
    stRegister.uptrAddress = DEVICE_CTRL_OFFSET;
    stRegister.u16Value = (uint16_t) enEnableArg;
    DEVICE__vWriteRegister(&stRegister);
}

void DEVICE__vEnable(void)
{
    DEVICE__vSetEnable(DEVICE_enENABLE_ENA);
}

void DEVICE__vDisable(void)
{
    DEVICE__vSetEnable(DEVICE_enENABLE_DIS);
}

DEVICE_nENABLE DEVICE__enGetEnable(void)
{
    DEVICE_Register_t stRegister;

    stRegister.u16Shift = DEVICE_CTRL_R_EN_BIT;
    stRegister.u16Mask = DEVICE_CTRL_EN_MASK;
    stRegister.uptrAddress = DEVICE_CTRL_OFFSET;
    stRegister.u16Value = (uint16_t) DEVICE_enENABLE_DIS;
    DEVICE__u16ReadRegister(&stRegister);
    return ((DEVICE_nENABLE) stRegister.u16Value);
}

