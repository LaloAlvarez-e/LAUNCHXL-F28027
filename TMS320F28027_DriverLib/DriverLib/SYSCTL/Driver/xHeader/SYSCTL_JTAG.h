/**
 *
 * @file SYSCTL_JTAG.h
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
 * @verbatim 21 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_JTAG_H_
#define DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_JTAG_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

SYSCTL_nENABLE SYSCTL__enGetJTAGState(void);
void SYSCTL__vSetJTAGState(SYSCTL_nENABLE enStateArg);

#endif /* DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_JTAG_H_ */
