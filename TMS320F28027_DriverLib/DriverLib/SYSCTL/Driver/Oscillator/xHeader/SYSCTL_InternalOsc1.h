/**
 *
 * @file SYSCTL_InternalOsc1.h
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

#ifndef DRIVERLIB_SYSCTL_DRIVER_OSCILLATOR_XHEADER_SYSCTL_INTERNALOSC1_H_
#define DRIVERLIB_SYSCTL_DRIVER_OSCILLATOR_XHEADER_SYSCTL_INTERNALOSC1_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

uint32_t SYSCTL__u32GetInternalOsc1Frequency(void);

void SYSCTL__vSetInternalOsc1PowerState(SYSCTL_nSTATE enStateArg);
SYSCTL_nSTATE SYSCTL__enGetInternalOsc1PowerState(void);

void SYSCTL__vSetInternalOsc1OnHaltAction(SYSCTL_nONHALT enOnHaltArg);
SYSCTL_nONHALT SYSCTL__enGetInternalOsc1OnHaltAction(void);

void SYSCTL__vSetInternalOsc1CoarseTrimming(int16_t s16TrimArg);
int16_t SYSCTL__s16GetInternalOsc1CoarseTrimming(void);

void SYSCTL__vSetInternalOsc1FineTrimming(int16_t s16TrimArg);
int16_t SYSCTL__s16GetInternalOsc1FineTrimming(void);

void SYSCTL__vSetInternalOsc1Trimming(int16_t s16CoarseTrimArg, int16_t s16FineTrimArg);
SYSCTL_nERROR SYSCTL__enGetInternalOsc1CoarseTrimming(int16_t* ps16CoarseTrimArg, int16_t* ps16FineTrimArg);

#endif /* DRIVERLIB_SYSCTL_DRIVER_OSCILLATOR_XHEADER_SYSCTL_INTERNALOSC1_H_ */
