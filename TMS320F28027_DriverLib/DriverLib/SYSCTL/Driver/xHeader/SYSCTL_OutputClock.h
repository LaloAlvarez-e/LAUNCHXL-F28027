/**
 *
 * @file SYSCTL_OutputClock.h
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

#ifndef DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_OUTPUTCLOCK_H_
#define DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_OUTPUTCLOCK_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

void SYSCTL__vSetOutputClockConfig(SYSCTL_nOUTCLK_SRC enSourceArg, SYSCTL_nOUTCLK_DIV enDivisorArg);
void SYSCTL__vSetOutputClockSource(SYSCTL_nOUTCLK_SRC enSourceArg);
void SYSCTL__vSetOutputClockDivisor(SYSCTL_nOUTCLK_DIV enDivisorArg);
SYSCTL_nOUTCLK_DIV SYSCTL__enGetOutputClockDivisor(void);
SYSCTL_nOUTCLK_SRC SYSCTL__enGetOutputClockSource(void);

#endif /* DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_OUTPUTCLOCK_H_ */
