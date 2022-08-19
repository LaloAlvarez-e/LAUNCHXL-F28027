/**
 *
 * @file GPIO_RegisterDefines_XINTnCR.h
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
 * @verbatim 18 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_GPIO_PERIPHERAL_REGISTERDEFINES_XHEADER_GPIO_REGISTERDEFINES_XINTNCR_H_
#define DRIVERLIB_GPIO_PERIPHERAL_REGISTERDEFINES_XHEADER_GPIO_REGISTERDEFINES_XINTNCR_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 1 XINTnCR *********************************************
 ******************************************************************************************/
/*----------*/
#define GPIO_INTERRUPT_XINTnCR_R_ENABLE_BIT    (0UL)

#define GPIO_INTERRUPT_XINTnCR_ENABLE_MASK    ((uint16_t) 0x0001UL)
#define GPIO_INTERRUPT_XINTnCR_ENABLE_DIS    ((uint16_t) 0x0000UL)
#define GPIO_INTERRUPT_XINTnCR_ENABLE_ENA    ((uint16_t) 0x0001UL)

#define GPIO_INTERRUPT_XINTnCR_R_ENABLE_MASK    (GPIO_INTERRUPT_XINTnCR_ENABLE_MASK << GPIO_INTERRUPT_XINTnCR_R_ENABLE_BIT)
#define GPIO_INTERRUPT_XINTnCR_R_ENABLE_DIS    (GPIO_INTERRUPT_XINTnCR_ENABLE_DIS << GPIO_INTERRUPT_XINTnCR_R_ENABLE_BIT)
#define GPIO_INTERRUPT_XINTnCR_R_ENABLE_ENA    (GPIO_INTERRUPT_XINTnCR_ENABLE_ENA << GPIO_INTERRUPT_XINTnCR_R_ENABLE_BIT)
/*----------*/

/*----------*/
#define GPIO_INTERRUPT_XINTnCR_R_POLARITY_BIT    (2UL)

#define GPIO_INTERRUPT_XINTnCR_POLARITY_MASK    ((uint16_t) 0x0003UL)
#define GPIO_INTERRUPT_XINTnCR_POLARITY_FALLING    ((uint16_t) 0x0000UL)
#define GPIO_INTERRUPT_XINTnCR_POLARITY_RISING    ((uint16_t) 0x0001UL)
#define GPIO_INTERRUPT_XINTnCR_POLARITY_BOTH    ((uint16_t) 0x0003UL)

#define GPIO_INTERRUPT_XINTnCR_R_POLARITY_MASK    (GPIO_INTERRUPT_XINTnCR_POLARITY_MASK << GPIO_INTERRUPT_XINTnCR_R_POLARITY_BIT)
#define GPIO_INTERRUPT_XINTnCR_R_POLARITY_FALLING    (GPIO_INTERRUPT_XINTnCR_POLARITY_FALLING << GPIO_INTERRUPT_XINTnCR_R_POLARITY_BIT)
#define GPIO_INTERRUPT_XINTnCR_R_POLARITY_RISING    (GPIO_INTERRUPT_XINTnCR_POLARITY_RISING << GPIO_INTERRUPT_XINTnCR_R_POLARITY_BIT)
#define GPIO_INTERRUPT_XINTnCR_R_POLARITY_BOTH    (GPIO_INTERRUPT_XINTnCR_POLARITY_BOTH << GPIO_INTERRUPT_XINTnCR_R_POLARITY_BIT)
/*----------*/

/*----------*/
#define GPIO_INTERRUPT_XINT1CR_R_ENABLE_BIT    GPIO_INTERRUPT_XINTnCR_R_ENABLE_BIT

#define GPIO_INTERRUPT_XINT1CR_ENABLE_MASK    GPIO_INTERRUPT_XINTnCR_ENABLE_MASK
#define GPIO_INTERRUPT_XINT1CR_ENABLE_DIS    GPIO_INTERRUPT_XINTnCR_ENABLE_DIS
#define GPIO_INTERRUPT_XINT1CR_ENABLE_ENA    GPIO_INTERRUPT_XINTnCR_ENABLE_ENA

#define GPIO_INTERRUPT_XINT1CR_R_ENABLE_MASK    (GPIO_INTERRUPT_XINT1CR_ENABLE_MASK << GPIO_INTERRUPT_XINT1CR_R_ENABLE_BIT)
#define GPIO_INTERRUPT_XINT1CR_R_ENABLE_DIS    (GPIO_INTERRUPT_XINT1CR_ENABLE_DIS << GPIO_INTERRUPT_XINT1CR_R_ENABLE_BIT)
#define GPIO_INTERRUPT_XINT1CR_R_ENABLE_ENA    (GPIO_INTERRUPT_XINT1CR_ENABLE_ENA << GPIO_INTERRUPT_XINT1CR_R_ENABLE_BIT)
/*----------*/

/*----------*/
#define GPIO_INTERRUPT_XINT1CR_R_POLARITY_BIT    GPIO_INTERRUPT_XINTnCR_R_POLARITY_BIT

#define GPIO_INTERRUPT_XINT1CR_POLARITY_MASK    GPIO_INTERRUPT_XINTnCR_POLARITY_MASK
#define GPIO_INTERRUPT_XINT1CR_POLARITY_FALLING    GPIO_INTERRUPT_XINTnCR_POLARITY_FALLING
#define GPIO_INTERRUPT_XINT1CR_POLARITY_RISING    GPIO_INTERRUPT_XINTnCR_POLARITY_RISING
#define GPIO_INTERRUPT_XINT1CR_POLARITY_BOTH    GPIO_INTERRUPT_XINTnCR_POLARITY_BOTH

#define GPIO_INTERRUPT_XINT1CR_R_POLARITY_MASK    (GPIO_INTERRUPT_XINT1CR_POLARITY_MASK << GPIO_INTERRUPT_XINT1CR_R_POLARITY_BIT)
#define GPIO_INTERRUPT_XINT1CR_R_POLARITY_FALLING    (GPIO_INTERRUPT_XINT1CR_POLARITY_FALLING << GPIO_INTERRUPT_XINT1CR_R_POLARITY_BIT)
#define GPIO_INTERRUPT_XINT1CR_R_POLARITY_RISING    (GPIO_INTERRUPT_XINT1CR_POLARITY_RISING << GPIO_INTERRUPT_XINT1CR_R_POLARITY_BIT)
#define GPIO_INTERRUPT_XINT1CR_R_POLARITY_BOTH    (GPIO_INTERRUPT_XINT1CR_POLARITY_BOTH << GPIO_INTERRUPT_XINT1CR_R_POLARITY_BIT)
/*----------*/

/*----------*/
#define GPIO_INTERRUPT_XINT2CR_R_ENABLE_BIT    GPIO_INTERRUPT_XINTnCR_R_ENABLE_BIT

#define GPIO_INTERRUPT_XINT2CR_ENABLE_MASK    GPIO_INTERRUPT_XINTnCR_ENABLE_MASK
#define GPIO_INTERRUPT_XINT2CR_ENABLE_DIS    GPIO_INTERRUPT_XINTnCR_ENABLE_DIS
#define GPIO_INTERRUPT_XINT2CR_ENABLE_ENA    GPIO_INTERRUPT_XINTnCR_ENABLE_ENA

#define GPIO_INTERRUPT_XINT2CR_R_ENABLE_MASK    (GPIO_INTERRUPT_XINT2CR_ENABLE_MASK << GPIO_INTERRUPT_XINT2CR_R_ENABLE_BIT)
#define GPIO_INTERRUPT_XINT2CR_R_ENABLE_DIS    (GPIO_INTERRUPT_XINT2CR_ENABLE_DIS << GPIO_INTERRUPT_XINT2CR_R_ENABLE_BIT)
#define GPIO_INTERRUPT_XINT2CR_R_ENABLE_ENA    (GPIO_INTERRUPT_XINT2CR_ENABLE_ENA << GPIO_INTERRUPT_XINT2CR_R_ENABLE_BIT)
/*----------*/

/*----------*/
#define GPIO_INTERRUPT_XINT2CR_R_POLARITY_BIT    GPIO_INTERRUPT_XINTnCR_R_POLARITY_BIT

#define GPIO_INTERRUPT_XINT2CR_POLARITY_MASK    GPIO_INTERRUPT_XINTnCR_POLARITY_MASK
#define GPIO_INTERRUPT_XINT2CR_POLARITY_FALLING    GPIO_INTERRUPT_XINTnCR_POLARITY_FALLING
#define GPIO_INTERRUPT_XINT2CR_POLARITY_RISING    GPIO_INTERRUPT_XINTnCR_POLARITY_RISING
#define GPIO_INTERRUPT_XINT2CR_POLARITY_BOTH    GPIO_INTERRUPT_XINTnCR_POLARITY_BOTH

#define GPIO_INTERRUPT_XINT2CR_R_POLARITY_MASK    (GPIO_INTERRUPT_XINT2CR_POLARITY_MASK << GPIO_INTERRUPT_XINT2CR_R_POLARITY_BIT)
#define GPIO_INTERRUPT_XINT2CR_R_POLARITY_FALLING    (GPIO_INTERRUPT_XINT2CR_POLARITY_FALLING << GPIO_INTERRUPT_XINT2CR_R_POLARITY_BIT)
#define GPIO_INTERRUPT_XINT2CR_R_POLARITY_RISING    (GPIO_INTERRUPT_XINT2CR_POLARITY_RISING << GPIO_INTERRUPT_XINT2CR_R_POLARITY_BIT)
#define GPIO_INTERRUPT_XINT2CR_R_POLARITY_BOTH    (GPIO_INTERRUPT_XINT2CR_POLARITY_BOTH << GPIO_INTERRUPT_XINT2CR_R_POLARITY_BIT)
/*----------*/

/*----------*/
#define GPIO_INTERRUPT_XINT3CR_R_ENABLE_BIT    GPIO_INTERRUPT_XINTnCR_R_ENABLE_BIT

#define GPIO_INTERRUPT_XINT3CR_ENABLE_MASK    GPIO_INTERRUPT_XINTnCR_ENABLE_MASK
#define GPIO_INTERRUPT_XINT3CR_ENABLE_DIS    GPIO_INTERRUPT_XINTnCR_ENABLE_DIS
#define GPIO_INTERRUPT_XINT3CR_ENABLE_ENA    GPIO_INTERRUPT_XINTnCR_ENABLE_ENA

#define GPIO_INTERRUPT_XINT3CR_R_ENABLE_MASK    (GPIO_INTERRUPT_XINT3CR_ENABLE_MASK << GPIO_INTERRUPT_XINT3CR_R_ENABLE_BIT)
#define GPIO_INTERRUPT_XINT3CR_R_ENABLE_DIS    (GPIO_INTERRUPT_XINT3CR_ENABLE_DIS << GPIO_INTERRUPT_XINT3CR_R_ENABLE_BIT)
#define GPIO_INTERRUPT_XINT3CR_R_ENABLE_ENA    (GPIO_INTERRUPT_XINT3CR_ENABLE_ENA << GPIO_INTERRUPT_XINT3CR_R_ENABLE_BIT)
/*----------*/

/*----------*/
#define GPIO_INTERRUPT_XINT3CR_R_POLARITY_BIT    GPIO_INTERRUPT_XINTnCR_R_POLARITY_BIT

#define GPIO_INTERRUPT_XINT3CR_POLARITY_MASK    GPIO_INTERRUPT_XINTnCR_POLARITY_MASK
#define GPIO_INTERRUPT_XINT3CR_POLARITY_FALLING    GPIO_INTERRUPT_XINTnCR_POLARITY_FALLING
#define GPIO_INTERRUPT_XINT3CR_POLARITY_RISING    GPIO_INTERRUPT_XINTnCR_POLARITY_RISING
#define GPIO_INTERRUPT_XINT3CR_POLARITY_BOTH    GPIO_INTERRUPT_XINTnCR_POLARITY_BOTH

#define GPIO_INTERRUPT_XINT3CR_R_POLARITY_MASK    (GPIO_INTERRUPT_XINT3CR_POLARITY_MASK << GPIO_INTERRUPT_XINT3CR_R_POLARITY_BIT)
#define GPIO_INTERRUPT_XINT3CR_R_POLARITY_FALLING    (GPIO_INTERRUPT_XINT3CR_POLARITY_FALLING << GPIO_INTERRUPT_XINT3CR_R_POLARITY_BIT)
#define GPIO_INTERRUPT_XINT3CR_R_POLARITY_RISING    (GPIO_INTERRUPT_XINT3CR_POLARITY_RISING << GPIO_INTERRUPT_XINT3CR_R_POLARITY_BIT)
#define GPIO_INTERRUPT_XINT3CR_R_POLARITY_BOTH    (GPIO_INTERRUPT_XINT3CR_POLARITY_BOTH << GPIO_INTERRUPT_XINT3CR_R_POLARITY_BIT)
/*----------*/

/*----------*/
#define GPIOA_INTERRUPT_XINTnCR_ENABLE_BIT    GPIO_INTERRUPT_XINTnCR_R_ENABLE_BIT

#define GPIOA_INTERRUPT_XINTnCR_ENABLE_MASK    GPIO_INTERRUPT_XINTnCR_ENABLE_MASK
#define GPIOA_INTERRUPT_XINTnCR_ENABLE_DIS    GPIO_INTERRUPT_XINTnCR_ENABLE_DIS
#define GPIOA_INTERRUPT_XINTnCR_ENABLE_ENA    GPIO_INTERRUPT_XINTnCR_ENABLE_ENA

#define GPIOA_INTERRUPT_XINTnCR_R_ENABLE_MASK    (GPIOA_INTERRUPT_XINTnCR_ENABLE_MASK << GPIOA_INTERRUPT_XINTnCR_ENABLE_BIT)
#define GPIOA_INTERRUPT_XINTnCR_R_ENABLE_DIS    (GPIOA_INTERRUPT_XINTnCR_ENABLE_DIS << GPIOA_INTERRUPT_XINTnCR_ENABLE_BIT)
#define GPIOA_INTERRUPT_XINTnCR_R_ENABLE_ENA    (GPIOA_INTERRUPT_XINTnCR_ENABLE_ENA << GPIOA_INTERRUPT_XINTnCR_ENABLE_BIT)
/*----------*/

/*----------*/
#define GPIOA_INTERRUPT_XINTnCR_POLARITY_BIT    GPIO_INTERRUPT_XINTnCR_R_POLARITY_BIT

#define GPIOA_INTERRUPT_XINTnCR_POLARITY_MASK    GPIO_INTERRUPT_XINTnCR_POLARITY_MASK
#define GPIOA_INTERRUPT_XINTnCR_POLARITY_FALLING    GPIO_INTERRUPT_XINTnCR_POLARITY_FALLING
#define GPIOA_INTERRUPT_XINTnCR_POLARITY_RISING    GPIO_INTERRUPT_XINTnCR_POLARITY_RISING
#define GPIOA_INTERRUPT_XINTnCR_POLARITY_BOTH    GPIO_INTERRUPT_XINTnCR_POLARITY_BOTH

#define GPIOA_INTERRUPT_XINTnCR_R_POLARITY_MASK    (GPIOA_INTERRUPT_XINTnCR_POLARITY_MASK << GPIOA_INTERRUPT_XINTnCR_POLARITY_BIT)
#define GPIOA_INTERRUPT_XINTnCR_R_POLARITY_FALLING    (GPIOA_INTERRUPT_XINTnCR_POLARITY_FALLING << GPIOA_INTERRUPT_XINTnCR_POLARITY_BIT)
#define GPIOA_INTERRUPT_XINTnCR_R_POLARITY_RISING    (GPIOA_INTERRUPT_XINTnCR_POLARITY_RISING << GPIOA_INTERRUPT_XINTnCR_POLARITY_BIT)
#define GPIOA_INTERRUPT_XINTnCR_R_POLARITY_BOTH    (GPIOA_INTERRUPT_XINTnCR_POLARITY_BOTH << GPIOA_INTERRUPT_XINTnCR_POLARITY_BIT)
/*----------*/


/*----------*/
#define GPIOA_INTERRUPT_XINT1CR_R_ENABLE_BIT    GPIOA_INTERRUPT_XINTnCR_ENABLE_BIT

#define GPIOA_INTERRUPT_XINT1CR_ENABLE_MASK    GPIOA_INTERRUPT_XINTnCR_ENABLE_MASK
#define GPIOA_INTERRUPT_XINT1CR_ENABLE_DIS    GPIOA_INTERRUPT_XINTnCR_ENABLE_DIS
#define GPIOA_INTERRUPT_XINT1CR_ENABLE_ENA    GPIOA_INTERRUPT_XINTnCR_ENABLE_ENA

#define GPIOA_INTERRUPT_XINT1CR_R_ENABLE_MASK    (GPIOA_INTERRUPT_XINT1CR_ENABLE_MASK << GPIOA_INTERRUPT_XINT1CR_R_ENABLE_BIT)
#define GPIOA_INTERRUPT_XINT1CR_R_ENABLE_DIS    (GPIOA_INTERRUPT_XINT1CR_ENABLE_DIS << GPIOA_INTERRUPT_XINT1CR_R_ENABLE_BIT)
#define GPIOA_INTERRUPT_XINT1CR_R_ENABLE_ENA    (GPIOA_INTERRUPT_XINT1CR_ENABLE_ENA << GPIOA_INTERRUPT_XINT1CR_R_ENABLE_BIT)
/*----------*/

/*----------*/
#define GPIOA_INTERRUPT_XINT1CR_R_POLARITY_BIT    GPIOA_INTERRUPT_XINTnCR_POLARITY_BIT

#define GPIOA_INTERRUPT_XINT1CR_POLARITY_MASK    GPIOA_INTERRUPT_XINTnCR_POLARITY_MASK
#define GPIOA_INTERRUPT_XINT1CR_POLARITY_FALLING    GPIOA_INTERRUPT_XINTnCR_POLARITY_FALLING
#define GPIOA_INTERRUPT_XINT1CR_POLARITY_RISING    GPIOA_INTERRUPT_XINTnCR_POLARITY_RISING
#define GPIOA_INTERRUPT_XINT1CR_POLARITY_BOTH    GPIOA_INTERRUPT_XINTnCR_POLARITY_BOTH

#define GPIOA_INTERRUPT_XINT1CR_R_POLARITY_MASK    (GPIOA_INTERRUPT_XINT1CR_POLARITY_MASK << GPIOA_INTERRUPT_XINT1CR_R_POLARITY_BIT)
#define GPIOA_INTERRUPT_XINT1CR_R_POLARITY_FALLING    (GPIOA_INTERRUPT_XINT1CR_POLARITY_FALLING << GPIOA_INTERRUPT_XINT1CR_R_POLARITY_BIT)
#define GPIOA_INTERRUPT_XINT1CR_R_POLARITY_RISING    (GPIOA_INTERRUPT_XINT1CR_POLARITY_RISING << GPIOA_INTERRUPT_XINT1CR_R_POLARITY_BIT)
#define GPIOA_INTERRUPT_XINT1CR_R_POLARITY_BOTH    (GPIOA_INTERRUPT_XINT1CR_POLARITY_BOTH << GPIOA_INTERRUPT_XINT1CR_R_POLARITY_BIT)
/*----------*/

/*----------*/
#define GPIOA_INTERRUPT_XINT2CR_R_ENABLE_BIT    GPIOA_INTERRUPT_XINTnCR_ENABLE_BIT

#define GPIOA_INTERRUPT_XINT2CR_ENABLE_MASK    GPIOA_INTERRUPT_XINTnCR_ENABLE_MASK
#define GPIOA_INTERRUPT_XINT2CR_ENABLE_DIS    GPIOA_INTERRUPT_XINTnCR_ENABLE_DIS
#define GPIOA_INTERRUPT_XINT2CR_ENABLE_ENA    GPIOA_INTERRUPT_XINTnCR_ENABLE_ENA

#define GPIOA_INTERRUPT_XINT2CR_R_ENABLE_MASK    (GPIOA_INTERRUPT_XINT2CR_ENABLE_MASK << GPIOA_INTERRUPT_XINT2CR_R_ENABLE_BIT)
#define GPIOA_INTERRUPT_XINT2CR_R_ENABLE_DIS    (GPIOA_INTERRUPT_XINT2CR_ENABLE_DIS << GPIOA_INTERRUPT_XINT2CR_R_ENABLE_BIT)
#define GPIOA_INTERRUPT_XINT2CR_R_ENABLE_ENA    (GPIOA_INTERRUPT_XINT2CR_ENABLE_ENA << GPIOA_INTERRUPT_XINT2CR_R_ENABLE_BIT)
/*----------*/

/*----------*/
#define GPIOA_INTERRUPT_XINT2CR_R_POLARITY_BIT    GPIOA_INTERRUPT_XINTnCR_POLARITY_BIT

#define GPIOA_INTERRUPT_XINT2CR_POLARITY_MASK    GPIOA_INTERRUPT_XINTnCR_POLARITY_MASK
#define GPIOA_INTERRUPT_XINT2CR_POLARITY_FALLING    GPIOA_INTERRUPT_XINTnCR_POLARITY_FALLING
#define GPIOA_INTERRUPT_XINT2CR_POLARITY_RISING    GPIOA_INTERRUPT_XINTnCR_POLARITY_RISING
#define GPIOA_INTERRUPT_XINT2CR_POLARITY_BOTH    GPIOA_INTERRUPT_XINTnCR_POLARITY_BOTH

#define GPIOA_INTERRUPT_XINT2CR_R_POLARITY_MASK    (GPIOA_INTERRUPT_XINT2CR_POLARITY_MASK << GPIOA_INTERRUPT_XINT2CR_R_POLARITY_BIT)
#define GPIOA_INTERRUPT_XINT2CR_R_POLARITY_FALLING    (GPIOA_INTERRUPT_XINT2CR_POLARITY_FALLING << GPIOA_INTERRUPT_XINT2CR_R_POLARITY_BIT)
#define GPIOA_INTERRUPT_XINT2CR_R_POLARITY_RISING    (GPIOA_INTERRUPT_XINT2CR_POLARITY_RISING << GPIOA_INTERRUPT_XINT2CR_R_POLARITY_BIT)
#define GPIOA_INTERRUPT_XINT2CR_R_POLARITY_BOTH    (GPIOA_INTERRUPT_XINT2CR_POLARITY_BOTH << GPIOA_INTERRUPT_XINT2CR_R_POLARITY_BIT)
/*----------*/

/*----------*/
#define GPIOA_INTERRUPT_XINT3CR_R_ENABLE_BIT    GPIOA_INTERRUPT_XINTnCR_ENABLE_BIT

#define GPIOA_INTERRUPT_XINT3CR_ENABLE_MASK    GPIOA_INTERRUPT_XINTnCR_ENABLE_MASK
#define GPIOA_INTERRUPT_XINT3CR_ENABLE_DIS    GPIOA_INTERRUPT_XINTnCR_ENABLE_DIS
#define GPIOA_INTERRUPT_XINT3CR_ENABLE_ENA    GPIOA_INTERRUPT_XINTnCR_ENABLE_ENA

#define GPIOA_INTERRUPT_XINT3CR_R_ENABLE_MASK    (GPIOA_INTERRUPT_XINT3CR_ENABLE_MASK << GPIOA_INTERRUPT_XINT3CR_R_ENABLE_BIT)
#define GPIOA_INTERRUPT_XINT3CR_R_ENABLE_DIS    (GPIOA_INTERRUPT_XINT3CR_ENABLE_DIS << GPIOA_INTERRUPT_XINT3CR_R_ENABLE_BIT)
#define GPIOA_INTERRUPT_XINT3CR_R_ENABLE_ENA    (GPIOA_INTERRUPT_XINT3CR_ENABLE_ENA << GPIOA_INTERRUPT_XINT3CR_R_ENABLE_BIT)
/*----------*/

/*----------*/
#define GPIOA_INTERRUPT_XINT3CR_R_POLARITY_BIT    GPIOA_INTERRUPT_XINTnCR_POLARITY_BIT

#define GPIOA_INTERRUPT_XINT3CR_POLARITY_MASK    GPIOA_INTERRUPT_XINTnCR_POLARITY_MASK
#define GPIOA_INTERRUPT_XINT3CR_POLARITY_FALLING    GPIOA_INTERRUPT_XINTnCR_POLARITY_FALLING
#define GPIOA_INTERRUPT_XINT3CR_POLARITY_RISING    GPIOA_INTERRUPT_XINTnCR_POLARITY_RISING
#define GPIOA_INTERRUPT_XINT3CR_POLARITY_BOTH    GPIOA_INTERRUPT_XINTnCR_POLARITY_BOTH

#define GPIOA_INTERRUPT_XINT3CR_R_POLARITY_MASK    (GPIOA_INTERRUPT_XINT3CR_POLARITY_MASK << GPIOA_INTERRUPT_XINT3CR_R_POLARITY_BIT)
#define GPIOA_INTERRUPT_XINT3CR_R_POLARITY_FALLING    (GPIOA_INTERRUPT_XINT3CR_POLARITY_FALLING << GPIOA_INTERRUPT_XINT3CR_R_POLARITY_BIT)
#define GPIOA_INTERRUPT_XINT3CR_R_POLARITY_RISING    (GPIOA_INTERRUPT_XINT3CR_POLARITY_RISING << GPIOA_INTERRUPT_XINT3CR_R_POLARITY_BIT)
#define GPIOA_INTERRUPT_XINT3CR_R_POLARITY_BOTH    (GPIOA_INTERRUPT_XINT3CR_POLARITY_BOTH << GPIOA_INTERRUPT_XINT3CR_R_POLARITY_BIT)
/*----------*/

#endif /* DRIVERLIB_GPIO_PERIPHERAL_REGISTERDEFINES_XHEADER_GPIO_REGISTERDEFINES_XINTNCR_H_ */
