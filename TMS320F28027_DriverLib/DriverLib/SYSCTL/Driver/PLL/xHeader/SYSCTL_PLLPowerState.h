/**
 *
 * @file SYSCTL_PLLPowerState.h
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

#ifndef DRIVERLIB_SYSCTL_DRIVER_PLL_XHEADER_SYSCTL_PLLPOWERSTATE_H_
#define DRIVERLIB_SYSCTL_DRIVER_PLL_XHEADER_SYSCTL_PLLPOWERSTATE_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

void SYSCTL__vSetPLLPowerState(SYSCTL_nSTATE enStateArg);
SYSCTL_nSTATE SYSCTL__enGetPLLPowerState(void);

#endif /* DRIVERLIB_SYSCTL_DRIVER_PLL_XHEADER_SYSCTL_PLLPOWERSTATE_H_ */
