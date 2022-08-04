/**
 *
 * @file DEVICE_Enable.h
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

#ifndef DRIVERLIB_DEVICE_DRIVER_XHEADER_DEVICE_ENABLE_H_
#define DRIVERLIB_DEVICE_DRIVER_XHEADER_DEVICE_ENABLE_H_

#include "DriverLib/DEVICE/Peripheral/xHeader/DEVICE_Enum.h"

void DEVICE__vSetEnable(DEVICE_nENABLE enEnableArg);
void DEVICE__vEnable(void);
void DEVICE__vDisable(void);
DEVICE_nENABLE DEVICE__enGetEnable(void);

#endif /* DRIVERLIB_DEVICE_DRIVER_XHEADER_DEVICE_ENABLE_H_ */
