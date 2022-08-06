/**
 *
 * @file SYSCTL_OscClock.h
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
 * @verbatim 5 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_SYSCTL_DRIVER_CLOCKSIGNAL_XHEADER_SYSCTL_OSCCLOCK_H_
#define DRIVERLIB_SYSCTL_DRIVER_CLOCKSIGNAL_XHEADER_SYSCTL_OSCCLOCK_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

void SYSCTL__vSetOscClockSource(SYSCTL_nOSCCLK_SRC enClockSourceArg);
SYSCTL_nOSCCLK_SRC SYSCTL__enGetOscClockSource(void);

void SYSCTL__vSetOscClockPowerState(SYSCTL_nSTATE enStateArg);
SYSCTL_nSTATE SYSCTL__enGetOscClockPowerState(void);

void SYSCTL__vSetOscClockErrorDetectionState(SYSCTL_nSTATE enStateArg);
void SYSCTL__vEnableOscClockErrorDetection(void);
void SYSCTL__vDisableOscClockErrorDetection(void);
SYSCTL_nSTATE SYSCTL__enGetOscClockErrorDetectionState(void);

SYSCTL_nSTATUS SYSCTL__enGetOscClockErrorDetectionStatus(void);
void SYSCTL__enClearOscClockErrorDetectionStatus(void);

uint32_t SYSCTL__u32GetOscClockFrequency(void);

#endif /* DRIVERLIB_SYSCTL_DRIVER_CLOCKSIGNAL_XHEADER_SYSCTL_OSCCLOCK_H_ */
