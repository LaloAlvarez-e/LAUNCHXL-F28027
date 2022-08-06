/**
 *
 * @file SYSCTL_CPUWatchdogClock.h
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
 * @verbatim 6 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_SYSCTL_DRIVER_CLOCKSIGNAL_XHEADER_SYSCTL_CPUWATCHDOGCLOCK_H_
#define DRIVERLIB_SYSCTL_DRIVER_CLOCKSIGNAL_XHEADER_SYSCTL_CPUWATCHDOGCLOCK_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

void SYSCTL__vSetCPUWatchdogClockSource(SYSCTL_nWDTCLK_SRC enClockSourceArg);
SYSCTL_nWDTCLK_SRC SYSCTL__enGetCPUWatchdogClockSource(void);

void SYSCTL__vSetCPUWatchdogClockOnHaltAction(SYSCTL_nONHALT enOnHaltArg);
SYSCTL_nONHALT SYSCTL__enGetCPUWatchdogClockOnHaltAction(void);

uint32_t SYSCTL__u32GetCPUWatchdogClockFrequency(void);

#endif /* DRIVERLIB_SYSCTL_DRIVER_CLOCKSIGNAL_XHEADER_SYSCTL_CPUWATCHDOGCLOCK_H_ */
