/**
 *
 * @file SYSCTL_InputClock.h
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

#ifndef DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_INPUTCLOCK_H_
#define DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_INPUTCLOCK_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

void SYSCTL__vSetInputClockSource(SYSCTL_nINCLK_SRC enInputPinArg);
SYSCTL_nINCLK_SRC SYSCTL__enGetInputClockSource(void);


#endif /* DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_INPUTCLOCK_H_ */