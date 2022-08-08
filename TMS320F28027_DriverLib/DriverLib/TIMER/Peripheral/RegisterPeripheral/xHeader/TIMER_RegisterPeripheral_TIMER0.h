/**
 *
 * @file TIMER_RegisterPeripheral_TIMER0.h
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

#ifndef DRIVERLIB_TIMER_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_TIMER_REGISTERPERIPHERAL_TIMER0_H_
#define DRIVERLIB_TIMER_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_TIMER_REGISTERPERIPHERAL_TIMER0_H_

#include "DriverLib/TIMER/Peripheral/xHeader/TIMER_RegisterAddress.h"
#include "DriverLib/TIMER/Peripheral/xHeader/TIMER_StructPeripheral.h"
#include "DriverLib/MCU/xHeader/MCU_Variables.h"

#define TIMER0 ((TIMER_t*) TIMER0_BASE)

/******************************************************************************************
 ************************************ 1 TIM *********************************************
 ******************************************************************************************/
#define TIMER0_TIM_R   (*(volatile uint32_t*) (TIMER0_BASE + TIMER_TIM_OFFSET))
#define TIMER0_TIM     ((TIMER_TIM_t*) (TIMER0_BASE + TIMER_TIM_OFFSET))

/******************************************************************************************
 ************************************ 2 PRD *********************************************
 ******************************************************************************************/
#define TIMER0_PRD_R   (*(volatile uint32_t*) (TIMER0_BASE + TIMER_PRD_OFFSET))
#define TIMER0_PRD     ((TIMER_PRD_t*) (TIMER0_BASE + TIMER_PRD_OFFSET))

/******************************************************************************************
 ************************************ 3 TCR *********************************************
 ******************************************************************************************/
#define TIMER0_TCR_R   (*(volatile uint16_t*) (TIMER0_BASE + TIMER_TCR_OFFSET))
#define TIMER0_TCR     ((TIMER_TCR_t*) (TIMER0_BASE + TIMER_TCR_OFFSET))

/******************************************************************************************
 ************************************ 4 TPR *********************************************
 ******************************************************************************************/
#define TIMER0_TPR_R   (*(volatile uint16_t*) (TIMER0_BASE + TIMER_TPR_OFFSET))
#define TIMER0_TPR     ((TIMER_TPR_t*) (TIMER0_BASE + TIMER_TPR_OFFSET))

/******************************************************************************************
 ************************************ 5 TPRH *********************************************
 ******************************************************************************************/
#define TIMER0_TPRH_R   (*(volatile uint16_t*) (TIMER0_BASE + TIMER_TPRH_OFFSET))
#define TIMER0_TPRH     ((TIMER_TPRH_t*) (TIMER0_BASE + TIMER_TPRH_OFFSET))

#endif /* DRIVERLIB_TIMER_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_TIMER_REGISTERPERIPHERAL_TIMER0_H_ */
