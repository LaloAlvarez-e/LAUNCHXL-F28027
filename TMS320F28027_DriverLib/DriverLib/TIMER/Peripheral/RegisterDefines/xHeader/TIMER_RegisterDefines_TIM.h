/**
 *
 * @file TIMER_RegisterDefines_TIM.h
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

#ifndef DRIVERLIB_TIMER_PERIPHERAL_REGISTERDEFINES_XHEADER_TIMER_REGISTERDEFINES_TIM_H_
#define DRIVERLIB_TIMER_PERIPHERAL_REGISTERDEFINES_XHEADER_TIMER_REGISTERDEFINES_TIM_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 1 TIM *********************************************
 ******************************************************************************************/
/*-----------*/
#define TIMER_TIM_R_TIM_BIT ((uint16_t) 0U)

#define TIMER_TIM_TIM_MASK ((uint32_t) 0xFFFFFFFFU)

#define TIMER_TIM_R_TIM_MASK (TIMER_TIM_TIM_MASK<< TIMER_TIM_R_TIM_BIT)
/*-----------*/

#endif /* DRIVERLIB_TIMER_PERIPHERAL_REGISTERDEFINES_XHEADER_TIMER_REGISTERDEFINES_TIM_H_ */
