/**
 *
 * @file SYSCTL_LowPowerClock.h
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

#ifndef DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_LOWPOWERCLOCK_H_
#define DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_LOWPOWERCLOCK_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

void SYSCTL__vSetLowPowerClockConfig(SYSCTL_nLPCLK_SRC enSourceArg, SYSCTL_nLPCLK_DIV enDivisorArg);
void SYSCTL__vSetLowPowerClockSource(SYSCTL_nLPCLK_SRC enSourceArg);
void SYSCTL__vSetLowPowerClockDivisor(SYSCTL_nLPCLK_DIV enDivisorArg);
SYSCTL_nLPCLK_DIV SYSCTL__enGetLowPowerClockDivisor(void);
SYSCTL_nLPCLK_SRC SYSCTL__enGetLowPowerClockSource(void);

#endif /* DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_LOWPOWERCLOCK_H_ */
