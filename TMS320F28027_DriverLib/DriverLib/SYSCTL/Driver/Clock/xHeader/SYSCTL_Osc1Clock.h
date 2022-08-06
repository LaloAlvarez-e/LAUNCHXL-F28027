/**
 *
 * @file SYSCTL_Osc1Clock.h
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

#ifndef DRIVERLIB_SYSCTL_DRIVER_CLOCK_XHEADER_SYSCTL_OSC1CLOCK_H_
#define DRIVERLIB_SYSCTL_DRIVER_CLOCK_XHEADER_SYSCTL_OSC1CLOCK_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

void SYSCTL__vSetOsc1ClockSource(SYSCTL_nOSC1CLK_SRC enClockSourceArg);
SYSCTL_nOSC1CLK_SRC SYSCTL__enGetOsc1ClockSource(void);


uint32_t SYSCTL__u32GetOsc1ClockFrequency(void);

#endif /* DRIVERLIB_SYSCTL_DRIVER_CLOCK_XHEADER_SYSCTL_OSC1CLOCK_H_ */
