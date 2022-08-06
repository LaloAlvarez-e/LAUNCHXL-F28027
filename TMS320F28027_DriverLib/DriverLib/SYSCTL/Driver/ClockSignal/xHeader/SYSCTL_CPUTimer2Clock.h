/**
 *
 * @file SYSCTL_CPUTimer2Clock.h
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

#ifndef DRIVERLIB_SYSCTL_DRIVER_CLOCKSIGNAL_XHEADER_SYSCTL_CPUTIMER2CLOCK_H_
#define DRIVERLIB_SYSCTL_DRIVER_CLOCKSIGNAL_XHEADER_SYSCTL_CPUTIMER2CLOCK_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

void SYSCTL__vSetCPUTimer2ClockSource(SYSCTL_nTIMER2CLK_SRC enClockSourceArg);
SYSCTL_nTIMER2CLK_SRC SYSCTL__enGetCPUTimer2ClockSource(void);

void SYSCTL__vSetCPUTimer2ClockDivisor(SYSCTL_nTIMER2CLK_DIV enClockDivisorArg);
SYSCTL_nTIMER2CLK_DIV SYSCTL__enGetCPUTimer2ClockDivisor(void);

void SYSCTL__vSetCPUTimer2ClockDivisorNum(uint16_t u16DivArg);
uint16_t SYSCTL__u16GetCPUTimer2ClockDivisor(void);

uint32_t SYSCTL__u32GetCPUTimer2ClockFrequency(void);

#endif /* DRIVERLIB_SYSCTL_DRIVER_CLOCKSIGNAL_XHEADER_SYSCTL_CPUTIMER2CLOCK_H_ */
