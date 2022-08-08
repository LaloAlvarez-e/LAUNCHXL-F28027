/**
 *
 * @file TIMER_State.h
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
 * @verbatim 7 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_TIMER_DRIVER_XHEADER_TIMER_STATE_H_
#define DRIVERLIB_TIMER_DRIVER_XHEADER_TIMER_STATE_H_

#include "DriverLib/TIMER/Peripheral/xHeader/TIMER_Enum.h"

void TIMER__vSetState(TIMER_nMODULE enModuleArg, TIMER_nSTATE enStateArg);
void TIMER__vStart(TIMER_nMODULE enModuleArg);
void TIMER__vStop(TIMER_nMODULE enModuleArg);
TIMER_nSTATUS TIMER__enGetStatus(TIMER_nMODULE enModuleArg);



#endif /* DRIVERLIB_TIMER_DRIVER_XHEADER_TIMER_STATE_H_ */
