/**
 *
 * @file ECAP_RegisterDefines_EVENT.h
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
 * @verbatim 27 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_ECAP_PERIPHERAL_REGISTERDEFINES_XHEADER_ECAP_REGISTERDEFINES_EVENT_H_
#define DRIVERLIB_ECAP_PERIPHERAL_REGISTERDEFINES_XHEADER_ECAP_REGISTERDEFINES_EVENT_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 1 EVENT *********************************************
 ******************************************************************************************/
/*----------*/
#define ECAP_EVENT_R_VALUE_BIT    (0UL)
#define ECAP_PERIOD_R_VALUE_BIT    (0UL)
#define ECAP_COMPARE_R_VALUE_BIT    (0UL)
#define ECAP_PERIOD_SHADOW_R_VALUE_BIT    (0UL)
#define ECAP_COMPARE_SHADOW_R_VALUE_BIT    (0UL)

#define ECAP_EVENT_VALUE_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define ECAP_PERIOD_VALUE_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define ECAP_COMPARE_VALUE_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define ECAP_PERIOD_SHADOW_VALUE_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define ECAP_COMPARE_SHADOW_VALUE_MASK    ((uint32_t) 0xFFFFFFFFUL)

#define ECAP_EVENT_R_VALUE_MASK    (ECAP_EVENT_VALUE_MASK << ECAP_EVENT_R_VALUE_BIT)
#define ECAP_PERIOD_R_VALUE_MASK    (ECAP_PERIOD_VALUE_MASK << ECAP_PERIOD_R_VALUE_BIT)
#define ECAP_COMPARE_R_VALUE_MASK    (ECAP_COMPARE_VALUE_MASK << ECAP_COMPARE_R_VALUE_BIT)
#define ECAP_PERIOD_SHADOW_R_VALUE_MASK    (ECAP_PERIOD_SHADOW_VALUE_MASK << ECAP_PERIOD_SHADOW_R_VALUE_BIT)
#define ECAP_COMPARE_SHADOW_R_VALUE_MASK    (ECAP_COMPARE_SHADOW_VALUE_MASK << ECAP_COMPARE_SHADOW_R_VALUE_BIT)
/*----------*/

#endif /* DRIVERLIB_ECAP_PERIPHERAL_REGISTERDEFINES_XHEADER_ECAP_REGISTERDEFINES_EVENT_H_ */
