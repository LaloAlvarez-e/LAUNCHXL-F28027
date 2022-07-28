/**
 *
 * @file PIE_Enable.c
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
#include "DriverLib/PIE/Driver/xHeader/PIE_Enable.h"
#include "DriverLib/PIE/Driver/Intrinsics/PIE_Intrinsics.h"
#include "DriverLib/PIE/Peripheral/PIE_Peripheral.h"

void PIE__vSetEnable(PIE_nENABLE enEnableArg)
{
    PIE_Register_t stRegister;

    stRegister.u16Shift = PIE_CTRL_R_EN_BIT;
    stRegister.u16Mask = PIE_CTRL_EN_MASK;
    stRegister.uptrAddress = PIE_CTRL_OFFSET;
    stRegister.u16Value = (uint16_t) enEnableArg;
    PIE__vWriteRegister(&stRegister);
}

void PIE__vEnable(void)
{
    PIE__vSetEnable(PIE_enENABLE_ENA);
}

void PIE__vDisable(void)
{
    PIE__vSetEnable(PIE_enENABLE_DIS);
}

PIE_nENABLE PIE__enGetEnable(void)
{
    PIE_Register_t stRegister;

    stRegister.u16Shift = PIE_CTRL_R_EN_BIT;
    stRegister.u16Mask = PIE_CTRL_EN_MASK;
    stRegister.uptrAddress = PIE_CTRL_OFFSET;
    stRegister.u16Value = (uint16_t) PIE_enENABLE_DIS;
    PIE__u16ReadRegister(&stRegister);
    return ((PIE_nENABLE) stRegister.u16Value);
}

