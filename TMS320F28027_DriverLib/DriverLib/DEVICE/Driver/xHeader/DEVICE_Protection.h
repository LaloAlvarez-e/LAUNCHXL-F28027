/**
 *
 * @file DEVICE_Protection.h
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

#ifndef DRIVERLIB_DEVICE_DRIVER_XHEADER_DEVICE_PROTECTION_H_
#define DRIVERLIB_DEVICE_DRIVER_XHEADER_DEVICE_PROTECTION_H_

#include "DriverLib/DEVICE/Peripheral/xHeader/DEVICE_Enum.h"

void DEVICE__vSetWriteReadProtection(DEVICE_nSTATE enEnableArg);
void DEVICE__vEnableWriteReadProtection(void);
void DEVICE__vDisableWriteReadProtection(void);
DEVICE_nSTATE DEVICE__enGetWriteReadProtection(void);

#endif /* DRIVERLIB_DEVICE_DRIVER_XHEADER_DEVICE_PROTECTION_H_ */
