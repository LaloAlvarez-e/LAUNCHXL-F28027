/**
 *
 * @file SYSCTL_Enable.c
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
#include "DriverLib/SYSCTL/Driver/xHeader/SYSCTL_Enable.h"
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

void SYSCTL__vSetEnable(SYSCTL_nENABLE enEnableArg)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_CTRL_R_EN_BIT;
    stRegister.u16Mask = SYSCTL_CTRL_EN_MASK;
    stRegister.uptrAddress = SYSCTL_CTRL_OFFSET;
    stRegister.u16Value = (uint16_t) enEnableArg;
    SYSCTL__vWriteRegister(&stRegister);
}

void SYSCTL__vEnable(void)
{
    SYSCTL__vSetEnable(SYSCTL_enENABLE_ENA);
}

void SYSCTL__vDisable(void)
{
    SYSCTL__vSetEnable(SYSCTL_enENABLE_DIS);
}

SYSCTL_nENABLE SYSCTL__enGetEnable(void)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_CTRL_R_EN_BIT;
    stRegister.u16Mask = SYSCTL_CTRL_EN_MASK;
    stRegister.uptrAddress = SYSCTL_CTRL_OFFSET;
    stRegister.u16Value = (uint16_t) SYSCTL_enENABLE_DIS;
    SYSCTL__u16ReadRegister(&stRegister);
    return ((SYSCTL_nENABLE) stRegister.u16Value);
}

