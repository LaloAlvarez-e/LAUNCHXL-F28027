/**
 *
 * @file SYSCTL_InternalOsc2.h
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

#ifndef DRIVERLIB_SYSCTL_DRIVER_OSCILLATOR_XHEADER_SYSCTL_INTERNALOSC2_H_
#define DRIVERLIB_SYSCTL_DRIVER_OSCILLATOR_XHEADER_SYSCTL_INTERNALOSC2_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

uint32_t SYSCTL__u32GetInternalOsc2Frequency(void);

void SYSCTL__vSetInternalOsc2PowerState(SYSCTL_nSTATE enStateArg);
SYSCTL_nSTATE SYSCTL__enGetInternalOsc2PowerState(void);

void SYSCTL__vSetInternalOsc2OnHaltAction(SYSCTL_nONHALT enOnHaltArg);
SYSCTL_nONHALT SYSCTL__enGetInternalOsc2OnHaltAction(void);

void SYSCTL__vSetInternalOsc2CoarseTrimming(int16_t s16TrimArg);
int16_t SYSCTL__s16GetInternalOsc2CoarseTrimming(void);

void SYSCTL__vSetInternalOsc2FineTrimming(int16_t s16TrimArg);
int16_t SYSCTL__s16GetInternalOsc2FineTrimming(void);

void SYSCTL__vSetInternalOsc2Trimming(int16_t s16CoarseTrimArg, int16_t s16FineTrimArg);
void SYSCTL__vGetInternalOsc2CoarseTrimming(int16_t* ps16CoarseTrimArg, int16_t* ps16FineTrimArg);

#endif /* DRIVERLIB_SYSCTL_DRIVER_OSCILLATOR_XHEADER_SYSCTL_INTERNALOSC2_H_ */
