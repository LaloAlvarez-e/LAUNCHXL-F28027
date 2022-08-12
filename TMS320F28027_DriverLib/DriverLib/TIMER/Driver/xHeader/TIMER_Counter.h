/**
 *
 * @file TIMER_Counter.h
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

#ifndef DRIVERLIB_TIMER_DRIVER_XHEADER_TIMER_COUNTER_H_
#define DRIVERLIB_TIMER_DRIVER_XHEADER_TIMER_COUNTER_H_

#include "DriverLib/TIMER/Peripheral/xHeader/TIMER_Enum.h"

void TIMER__vSetCounter(TIMER_nMODULE enModuleArg, uint32_t u32CounterArg);
uint32_t TIMER__u32GetCounter(TIMER_nMODULE enModuleArg);

#endif /* DRIVERLIB_TIMER_DRIVER_XHEADER_TIMER_COUNTER_H_ */
