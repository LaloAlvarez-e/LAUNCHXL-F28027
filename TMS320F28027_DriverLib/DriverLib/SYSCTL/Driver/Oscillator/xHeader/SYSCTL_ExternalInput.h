/**
 *
 * @file SYSCTL_ExternalInput.h
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

#ifndef DRIVERLIB_SYSCTL_DRIVER_OSCILLATOR_XHEADER_SYSCTL_EXTERNALINPUT_H_
#define DRIVERLIB_SYSCTL_DRIVER_OSCILLATOR_XHEADER_SYSCTL_EXTERNALINPUT_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

uint16_t SYSCTL__u32GetExternalInputFrequency(void);

void SYSCTL__vSetExternalInputPowerState(SYSCTL_nSTATE enStateArg);
SYSCTL_nSTATE SYSCTL__enGetExternalInputPowerState(void);

void SYSCTL__vSetExternalInputSource(SYSCTL_nINOSC_SRC enInputPinArg);
SYSCTL_nINOSC_SRC SYSCTL__enGetExternalInputSource(void);


#endif /* DRIVERLIB_SYSCTL_DRIVER_OSCILLATOR_XHEADER_SYSCTL_EXTERNALINPUT_H_ */
