/**
 *
 * @file FLASH_Enable.c
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
#include "DriverLib/FLASH/Driver/xHeader/FLASH_Enable.h"
#include "DriverLib/FLASH/Driver/Intrinsics/FLASH_Intrinsics.h"
#include "DriverLib/FLASH/Peripheral/FLASH_Peripheral.h"

void FLASH__vSetEnable(FLASH_nENABLE enEnableArg)
{
    FLASH_Register_t stRegister;

    stRegister.u16Shift = FLASH_CTRL_R_EN_BIT;
    stRegister.u16Mask = FLASH_CTRL_EN_MASK;
    stRegister.uptrAddress = FLASH_CTRL_OFFSET;
    stRegister.u16Value = (uint16_t) enEnableArg;
    FLASH__vWriteRegister(&stRegister);
}

void FLASH__vEnable(void)
{
    FLASH__vSetEnable(FLASH_enENABLE_ENA);
}

void FLASH__vDisable(void)
{
    FLASH__vSetEnable(FLASH_enENABLE_DIS);
}

FLASH_nENABLE FLASH__enGetEnable(void)
{
    FLASH_Register_t stRegister;

    stRegister.u16Shift = FLASH_CTRL_R_EN_BIT;
    stRegister.u16Mask = FLASH_CTRL_EN_MASK;
    stRegister.uptrAddress = FLASH_CTRL_OFFSET;
    stRegister.u16Value = (uint16_t) FLASH_enENABLE_DIS;
    FLASH__u16ReadRegister(&stRegister);
    return ((FLASH_nENABLE) stRegister.u16Value);
}

