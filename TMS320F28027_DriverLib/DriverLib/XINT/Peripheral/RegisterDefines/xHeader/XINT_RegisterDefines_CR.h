/**
 *
 * @file XINT_RegisterDefines_CR.h
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
 * @verbatim 21 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_XINT_PERIPHERAL_REGISTERDEFINES_XHEADER_XINT_REGISTERDEFINES_CR_H_
#define DRIVERLIB_XINT_PERIPHERAL_REGISTERDEFINES_XHEADER_XINT_REGISTERDEFINES_CR_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 1 CR *********************************************
 ******************************************************************************************/
/*----------*/
#define XINT_CR_R_ENABLE_BIT    (0UL)

#define XINT_CR_ENABLE_MASK    ((uint16_t) 0x0001UL)
#define XINT_CR_ENABLE_DIS    ((uint16_t) 0x0000UL)
#define XINT_CR_ENABLE_ENA    ((uint16_t) 0x0001UL)

#define XINT_CR_R_ENABLE_MASK    (XINT_CR_ENABLE_MASK << XINT_CR_R_ENABLE_BIT)
#define XINT_CR_R_ENABLE_DIS    (XINT_CR_ENABLE_DIS << XINT_CR_R_ENABLE_BIT)
#define XINT_CR_R_ENABLE_ENA    (XINT_CR_ENABLE_ENA << XINT_CR_R_ENABLE_BIT)
/*----------*/

/*----------*/
#define XINT_CR_R_POLARITY_BIT    (2UL)

#define XINT_CR_POLARITY_MASK    ((uint16_t) 0x0003UL)
#define XINT_CR_POLARITY_FALLING    ((uint16_t) 0x0000UL)
#define XINT_CR_POLARITY_RISING    ((uint16_t) 0x0001UL)
#define XINT_CR_POLARITY_BOTH    ((uint16_t) 0x0003UL)

#define XINT_CR_R_POLARITY_MASK    (XINT_CR_POLARITY_MASK << XINT_CR_R_POLARITY_BIT)
#define XINT_CR_R_POLARITY_FALLING    (XINT_CR_POLARITY_FALLING << XINT_CR_R_POLARITY_BIT)
#define XINT_CR_R_POLARITY_RISING    (XINT_CR_POLARITY_RISING << XINT_CR_R_POLARITY_BIT)
#define XINT_CR_R_POLARITY_BOTH    (XINT_CR_POLARITY_BOTH << XINT_CR_R_POLARITY_BIT)
/*----------*/

#endif /* DRIVERLIB_XINT_PERIPHERAL_REGISTERDEFINES_XHEADER_XINT_REGISTERDEFINES_CR_H_ */
