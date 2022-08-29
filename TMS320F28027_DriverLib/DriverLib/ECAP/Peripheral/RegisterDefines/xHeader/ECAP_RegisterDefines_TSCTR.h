/**
 *
 * @file ECAP_RegisterDefines_TSCTR.h
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

#ifndef DRIVERLIB_ECAP_PERIPHERAL_REGISTERDEFINES_XHEADER_ECAP_REGISTERDEFINES_TSCTR_H_
#define DRIVERLIB_ECAP_PERIPHERAL_REGISTERDEFINES_XHEADER_ECAP_REGISTERDEFINES_TSCTR_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 1 TSCTR *********************************************
 ******************************************************************************************/
/*----------*/
#define ECAP_TSCTR_R_COUNTER_BIT    (0UL)

#define ECAP_TSCTR_COUNTER_MASK    ((uint32_t) 0xFFFFFFFFUL)

#define ECAP_TSCTR_R_COUNTER_MASK    (ECAP_TSCTR_COUNTER_MASK << ECAP_TSCTR_R_COUNTER_BIT)
/*----------*/

#endif /* DRIVERLIB_ECAP_PERIPHERAL_REGISTERDEFINES_XHEADER_ECAP_REGISTERDEFINES_TSCTR_H_ */
