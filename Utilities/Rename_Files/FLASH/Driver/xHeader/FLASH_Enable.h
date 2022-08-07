/**
 *
 * @file FLASH_Enable.h
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

#ifndef DRIVERLIB_FLASH_DRIVER_XHEADER_FLASH_ENABLE_H_
#define DRIVERLIB_FLASH_DRIVER_XHEADER_FLASH_ENABLE_H_

#include "DriverLib/FLASH/Peripheral/xHeader/FLASH_Enum.h"

void FLASH__vSetEnable(FLASH_nENABLE enEnableArg);
void FLASH__vEnable(void);
void FLASH__vDisable(void);
FLASH_nENABLE FLASH__enGetEnable(void);

#endif /* DRIVERLIB_FLASH_DRIVER_XHEADER_FLASH_ENABLE_H_ */
