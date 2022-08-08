/**
 *
 * @file TIMER_RegisterDefines_TPRH.h
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

#ifndef DRIVERLIB_TIMER_PERIPHERAL_REGISTERDEFINES_XHEADER_TIMER_REGISTERDEFINES_TPRH_H_
#define DRIVERLIB_TIMER_PERIPHERAL_REGISTERDEFINES_XHEADER_TIMER_REGISTERDEFINES_TPRH_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 5 TPRH *********************************************
 ******************************************************************************************/
/*-----------*/
#define TIMER_TPRH_R_TDDRH_BIT ((uint16_t) 0U)

#define TIMER_TPRH_TDDRH_MASK ((uint16_t) 0xFFU)

#define TIMER_TPRH_R_TDDRH_MASK (TIMER_TPRH_TDDRH_MASK<< TIMER_TPRH_R_TDDRH_BIT)
/*-----------*/

/*-----------*/
#define TIMER_TPRH_R_PSCH_BIT ((uint16_t) 8U)

#define TIMER_TPRH_PSCH_MASK ((uint16_t) 0xFFU)

#define TIMER_TPRH_R_PSCH_MASK (TIMER_TPRH_PSCH_MASK<< TIMER_TPRH_R_PSCH_BIT)
/*-----------*/


#endif /* DRIVERLIB_TIMER_PERIPHERAL_REGISTERDEFINES_XHEADER_TIMER_REGISTERDEFINES_TPRH_H_ */
