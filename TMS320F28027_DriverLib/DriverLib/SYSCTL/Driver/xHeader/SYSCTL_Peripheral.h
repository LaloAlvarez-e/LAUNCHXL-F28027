/**
 *
 * @file SYSCTL_Peripheral.h
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
 * @verbatim 4 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_PERIPHERAL_H_
#define DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_PERIPHERAL_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

void SYSCTL__vSetEnablePeripheral(SYSCTL_nPERIPHERAL enPeripheralArg, SYSCTL_nENABLE enEnableArg);
void SYSCTL__vEnablePeripheral(SYSCTL_nPERIPHERAL enPeripheralArg);
void SYSCTL__vDisablePeripheral(SYSCTL_nPERIPHERAL enPeripheralArg);
SYSCTL_nENABLE SYSCTL__enGetEnablePeripheral(SYSCTL_nPERIPHERAL enPeripheralArg);

#endif /* DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_PERIPHERAL_H_ */
