/**
 *
 * @file TIMER_RegisterDefines_TPR.h
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

#ifndef DRIVERLIB_TIMER_PERIPHERAL_REGISTERDEFINES_XHEADER_TIMER_REGISTERDEFINES_TPR_H_
#define DRIVERLIB_TIMER_PERIPHERAL_REGISTERDEFINES_XHEADER_TIMER_REGISTERDEFINES_TPR_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 4 TPR *********************************************
 ******************************************************************************************/
/*-----------*/
#define TIMER_TPR_R_TDDR_BIT ((uint16_t) 0U)

#define TIMER_TPR_TDDR_MASK ((uint16_t) 0xFFU)

#define TIMER_TPR_R_TDDR_MASK (TIMER_TPR_TDDR_MASK<< TIMER_TPR_R_TDDR_BIT)
/*-----------*/

/*-----------*/
#define TIMER_TPR_R_PSC_BIT ((uint16_t) 8U)

#define TIMER_TPR_PSC_MASK ((uint16_t) 0xFFU)

#define TIMER_TPR_R_PSC_MASK (TIMER_TPR_PSC_MASK<< TIMER_TPR_R_PSC_BIT)
/*-----------*/




#endif /* DRIVERLIB_TIMER_PERIPHERAL_REGISTERDEFINES_XHEADER_TIMER_REGISTERDEFINES_TPR_H_ */
