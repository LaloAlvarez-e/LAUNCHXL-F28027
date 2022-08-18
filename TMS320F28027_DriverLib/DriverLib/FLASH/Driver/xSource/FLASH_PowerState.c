/**
 *
 * @file FLASH_PowerState.c
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
 * @verbatim 7 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/FLASH/Driver/xHeader/FLASH_PowerState.h"

#include "DriverLib/FLASH/Driver/Intrinsics/FLASH_Intrinsics.h"
#include "DriverLib/FLASH/Peripheral/FLASH_Peripheral.h"

void FLASH__vSetPowerState(FLASH_nPOWER_STATE enStateArg)
{
    FLASH_Register_t stRegister;

    stRegister.u16Shift = FLASH_PWR_R_PWR_BIT;
    stRegister.u16Mask = FLASH_PWR_PWR_MASK;
    stRegister.uptrAddress = FLASH_PWR_OFFSET;
    stRegister.u16Value = (uint16_t) enStateArg;
    FLASH__vWriteRegister(&stRegister);
}

FLASH_nPOWER_STATE FLASH__enGetPowerState(void)
{
    FLASH_Register_t stRegister;

    stRegister.u16Shift = FLASH_STATUS_R_PWRS_BIT;
    stRegister.u16Mask = FLASH_STATUS_PWRS_MASK;
    stRegister.uptrAddress = FLASH_STATUS_OFFSET;
    FLASH__u16ReadRegister(&stRegister);
    return ((FLASH_nPOWER_STATE) stRegister.u16Value);
}





