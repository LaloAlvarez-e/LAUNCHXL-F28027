/**
 *
 * @file SYSCTL_PLLMultiplier.h
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

#ifndef DRIVERLIB_SYSCTL_DRIVER_PLL_XHEADER_SYSCTL_PLLMULTIPLIER_H_
#define DRIVERLIB_SYSCTL_DRIVER_PLL_XHEADER_SYSCTL_PLLMULTIPLIER_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

void SYSCTL__vSetPLLMultiplier(SYSCTL_nPLL_MULTIPLIER enPLLMultiplierArg);
SYSCTL_nPLL_MULTIPLIER SYSCTL__enGetPLLMultiplier(void);
void SYSCTL__vSetPLLMultiplierNum(uint16_t u16MultiplierArg);
uint16_t SYSCTL__u16GetPLLMultiplier(void);

#endif /* DRIVERLIB_SYSCTL_DRIVER_PLL_XHEADER_SYSCTL_PLLMULTIPLIER_H_ */
