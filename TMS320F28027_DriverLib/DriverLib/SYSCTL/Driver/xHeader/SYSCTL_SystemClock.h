/**
 *
 * @file SYSCTL_SystemClock.h
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

#ifndef DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_SYSTEMCLOCK_H_
#define DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_SYSTEMCLOCK_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

uint32_t SYSCTL__u32InitSystemClock(uint32_t u32FrequencyArg);

uint32_t SYSCTL__u32GetSystemClockFrequency(void);

#endif /* DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_SYSTEMCLOCK_H_ */
