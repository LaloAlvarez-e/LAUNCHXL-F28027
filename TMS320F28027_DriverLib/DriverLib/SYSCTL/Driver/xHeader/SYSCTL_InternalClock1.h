/**
 *
 * @file SYSCTL_InternalClock1.h
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

#ifndef DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_INTERNALCLOCK1_H_
#define DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_INTERNALCLOCK1_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

void SYSCTL__vSetInternalClock1Source(SYSCTL_nINCLK_SRC enInputPinArg);
SYSCTL_nINCLK_SRC SYSCTL__enGetInternalClock1Source(void);


#endif /* DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_INTERNALCLOCK1_H_ */
