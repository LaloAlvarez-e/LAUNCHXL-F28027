/**
 *
 * @file SYSCTL_ExternalOsc.h
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

#ifndef DRIVERLIB_SYSCTL_DRIVER_OSCILLATOR_XHEADER_SYSCTL_EXTERNALOSC_H_
#define DRIVERLIB_SYSCTL_DRIVER_OSCILLATOR_XHEADER_SYSCTL_EXTERNALOSC_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

uint16_t SYSCTL__u32GetExternalOscFrequency(void);

void SYSCTL__vSetExternalOscPowerState(SYSCTL_nSTATE enStateArg);
SYSCTL_nSTATE SYSCTL__enGetExternalOscPowerState(void);

#endif /* DRIVERLIB_SYSCTL_DRIVER_OSCILLATOR_XHEADER_SYSCTL_EXTERNALOSC_H_ */
