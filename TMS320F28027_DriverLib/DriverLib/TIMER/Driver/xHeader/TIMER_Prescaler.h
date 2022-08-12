/**
 *
 * @file TIMER_Prescaler.h
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
 * @verbatim 12 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_TIMER_DRIVER_XHEADER_TIMER_PRESCALER_H_
#define DRIVERLIB_TIMER_DRIVER_XHEADER_TIMER_PRESCALER_H_

#include "DriverLib/TIMER/Peripheral/xHeader/TIMER_Enum.h"

void TIMER__vSetPrescalerValue(TIMER_nMODULE enModuleArg, uint16_t u16PrescalerValueArg);
uint16_t TIMER__u16GetPrescalerValue(TIMER_nMODULE enModuleArg);

uint16_t TIMER__u16GetPrescalerCounter(TIMER_nMODULE enModuleArg);

#endif /* DRIVERLIB_TIMER_DRIVER_XHEADER_TIMER_PRESCALER_H_ */
