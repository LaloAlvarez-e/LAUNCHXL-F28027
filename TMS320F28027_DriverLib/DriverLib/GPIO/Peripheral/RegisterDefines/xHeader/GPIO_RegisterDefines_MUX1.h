/**
 *
 * @file GPIO_RegisterDefines_MUX1.h
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

#ifndef DRIVERLIB_GPIO_PERIPHERAL_REGISTERDEFINES_XHEADER_GPIO_REGISTERDEFINES_MUX1_H_
#define DRIVERLIB_GPIO_PERIPHERAL_REGISTERDEFINES_XHEADER_GPIO_REGISTERDEFINES_MUX1_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 4 MUX1 *********************************************
 ******************************************************************************************/
/*----------*/
#define GPIO_MUX1_R_PIN_MASK    ((uint32_t) 0x00000003UL)
#define GPIO_MUX1_R_PIN_GPIO    ((uint32_t) 0x00000000UL)
#define GPIO_MUX1_R_PIN_PERIPHERAL1    ((uint32_t) 0x00000001UL)
#define GPIO_MUX1_R_PIN_PERIPHERAL2    ((uint32_t) 0x00000002UL)
#define GPIO_MUX1_R_PIN_PERIPHERAL3    ((uint32_t) 0x00000003UL)
/*----------*/

/*----------*/
#define GPIO_MUX1_R_PIN0_BIT    (0UL)

#define GPIO_MUX1_R_PIN0_MASK    ((uint32_t) 0x00000003UL)
#define GPIO_MUX1_R_PIN0_GPIO    ((uint32_t) 0x00000000UL)
#define GPIO_MUX1_R_PIN0_PERIPHERAL1    ((uint32_t) 0x00000001UL)
#define GPIO_MUX1_R_PIN0_PERIPHERAL2    ((uint32_t) 0x00000002UL)
#define GPIO_MUX1_R_PIN0_PERIPHERAL3    ((uint32_t) 0x00000003UL)

#define GPIO_MUX1_PIN0_MASK    (GPIO_MUX1_R_PIN0_MASK << GPIO_MUX1_R_PIN0_BIT)
#define GPIO_MUX1_PIN0_GPIO    (GPIO_MUX1_R_PIN0_GPIO << GPIO_MUX1_R_PIN0_BIT)
#define GPIO_MUX1_PIN0_PERIPHERAL1    (GPIO_MUX1_R_PIN0_PERIPHERAL1 << GPIO_MUX1_R_PIN0_BIT)
#define GPIO_MUX1_PIN0_PERIPHERAL2    (GPIO_MUX1_R_PIN0_PERIPHERAL2 << GPIO_MUX1_R_PIN0_BIT)
#define GPIO_MUX1_PIN0_PERIPHERAL3    (GPIO_MUX1_R_PIN0_PERIPHERAL3 << GPIO_MUX1_R_PIN0_BIT)
/*----------*/

/*----------*/
#define GPIO_MUX1_R_PIN1_BIT    (2UL)

#define GPIO_MUX1_R_PIN1_MASK    ((uint32_t) 0x00000003UL)
#define GPIO_MUX1_R_PIN1_GPIO    ((uint32_t) 0x00000000UL)
#define GPIO_MUX1_R_PIN1_PERIPHERAL1    ((uint32_t) 0x00000001UL)
#define GPIO_MUX1_R_PIN1_PERIPHERAL2    ((uint32_t) 0x00000002UL)
#define GPIO_MUX1_R_PIN1_PERIPHERAL3    ((uint32_t) 0x00000003UL)

#define GPIO_MUX1_PIN1_MASK    (GPIO_MUX1_R_PIN1_MASK << GPIO_MUX1_R_PIN1_BIT)
#define GPIO_MUX1_PIN1_GPIO    (GPIO_MUX1_R_PIN1_GPIO << GPIO_MUX1_R_PIN1_BIT)
#define GPIO_MUX1_PIN1_PERIPHERAL1    (GPIO_MUX1_R_PIN1_PERIPHERAL1 << GPIO_MUX1_R_PIN1_BIT)
#define GPIO_MUX1_PIN1_PERIPHERAL2    (GPIO_MUX1_R_PIN1_PERIPHERAL2 << GPIO_MUX1_R_PIN1_BIT)
#define GPIO_MUX1_PIN1_PERIPHERAL3    (GPIO_MUX1_R_PIN1_PERIPHERAL3 << GPIO_MUX1_R_PIN1_BIT)
/*----------*/

/*----------*/
#define GPIO_MUX1_R_PIN2_BIT    (4UL)

#define GPIO_MUX1_R_PIN2_MASK    ((uint32_t) 0x00000003UL)
#define GPIO_MUX1_R_PIN2_GPIO    ((uint32_t) 0x00000000UL)
#define GPIO_MUX1_R_PIN2_PERIPHERAL1    ((uint32_t) 0x00000001UL)
#define GPIO_MUX1_R_PIN2_PERIPHERAL2    ((uint32_t) 0x00000002UL)
#define GPIO_MUX1_R_PIN2_PERIPHERAL3    ((uint32_t) 0x00000003UL)

#define GPIO_MUX1_PIN2_MASK    (GPIO_MUX1_R_PIN2_MASK << GPIO_MUX1_R_PIN2_BIT)
#define GPIO_MUX1_PIN2_GPIO    (GPIO_MUX1_R_PIN2_GPIO << GPIO_MUX1_R_PIN2_BIT)
#define GPIO_MUX1_PIN2_PERIPHERAL1    (GPIO_MUX1_R_PIN2_PERIPHERAL1 << GPIO_MUX1_R_PIN2_BIT)
#define GPIO_MUX1_PIN2_PERIPHERAL2    (GPIO_MUX1_R_PIN2_PERIPHERAL2 << GPIO_MUX1_R_PIN2_BIT)
#define GPIO_MUX1_PIN2_PERIPHERAL3    (GPIO_MUX1_R_PIN2_PERIPHERAL3 << GPIO_MUX1_R_PIN2_BIT)
/*----------*/

/*----------*/
#define GPIO_MUX1_R_PIN3_BIT    (6UL)

#define GPIO_MUX1_R_PIN3_MASK    ((uint32_t) 0x00000003UL)
#define GPIO_MUX1_R_PIN3_GPIO    ((uint32_t) 0x00000000UL)
#define GPIO_MUX1_R_PIN3_PERIPHERAL1    ((uint32_t) 0x00000001UL)
#define GPIO_MUX1_R_PIN3_PERIPHERAL2    ((uint32_t) 0x00000002UL)
#define GPIO_MUX1_R_PIN3_PERIPHERAL3    ((uint32_t) 0x00000003UL)

#define GPIO_MUX1_PIN3_MASK    (GPIO_MUX1_R_PIN3_MASK << GPIO_MUX1_R_PIN3_BIT)
#define GPIO_MUX1_PIN3_GPIO    (GPIO_MUX1_R_PIN3_GPIO << GPIO_MUX1_R_PIN3_BIT)
#define GPIO_MUX1_PIN3_PERIPHERAL1    (GPIO_MUX1_R_PIN3_PERIPHERAL1 << GPIO_MUX1_R_PIN3_BIT)
#define GPIO_MUX1_PIN3_PERIPHERAL2    (GPIO_MUX1_R_PIN3_PERIPHERAL2 << GPIO_MUX1_R_PIN3_BIT)
#define GPIO_MUX1_PIN3_PERIPHERAL3    (GPIO_MUX1_R_PIN3_PERIPHERAL3 << GPIO_MUX1_R_PIN3_BIT)
/*----------*/

/*----------*/
#define GPIO_MUX1_R_PIN4_BIT    (8UL)

#define GPIO_MUX1_R_PIN4_MASK    ((uint32_t) 0x00000003UL)
#define GPIO_MUX1_R_PIN4_GPIO    ((uint32_t) 0x00000000UL)
#define GPIO_MUX1_R_PIN4_PERIPHERAL1    ((uint32_t) 0x00000001UL)
#define GPIO_MUX1_R_PIN4_PERIPHERAL2    ((uint32_t) 0x00000002UL)
#define GPIO_MUX1_R_PIN4_PERIPHERAL3    ((uint32_t) 0x00000003UL)

#define GPIO_MUX1_PIN4_MASK    (GPIO_MUX1_R_PIN4_MASK << GPIO_MUX1_R_PIN4_BIT)
#define GPIO_MUX1_PIN4_GPIO    (GPIO_MUX1_R_PIN4_GPIO << GPIO_MUX1_R_PIN4_BIT)
#define GPIO_MUX1_PIN4_PERIPHERAL1    (GPIO_MUX1_R_PIN4_PERIPHERAL1 << GPIO_MUX1_R_PIN4_BIT)
#define GPIO_MUX1_PIN4_PERIPHERAL2    (GPIO_MUX1_R_PIN4_PERIPHERAL2 << GPIO_MUX1_R_PIN4_BIT)
#define GPIO_MUX1_PIN4_PERIPHERAL3    (GPIO_MUX1_R_PIN4_PERIPHERAL3 << GPIO_MUX1_R_PIN4_BIT)
/*----------*/

/*----------*/
#define GPIO_MUX1_R_PIN5_BIT    (10UL)

#define GPIO_MUX1_R_PIN5_MASK    ((uint32_t) 0x00000003UL)
#define GPIO_MUX1_R_PIN5_GPIO    ((uint32_t) 0x00000000UL)
#define GPIO_MUX1_R_PIN5_PERIPHERAL1    ((uint32_t) 0x00000001UL)
#define GPIO_MUX1_R_PIN5_PERIPHERAL2    ((uint32_t) 0x00000002UL)
#define GPIO_MUX1_R_PIN5_PERIPHERAL3    ((uint32_t) 0x00000003UL)

#define GPIO_MUX1_PIN5_MASK    (GPIO_MUX1_R_PIN5_MASK << GPIO_MUX1_R_PIN5_BIT)
#define GPIO_MUX1_PIN5_GPIO    (GPIO_MUX1_R_PIN5_GPIO << GPIO_MUX1_R_PIN5_BIT)
#define GPIO_MUX1_PIN5_PERIPHERAL1    (GPIO_MUX1_R_PIN5_PERIPHERAL1 << GPIO_MUX1_R_PIN5_BIT)
#define GPIO_MUX1_PIN5_PERIPHERAL2    (GPIO_MUX1_R_PIN5_PERIPHERAL2 << GPIO_MUX1_R_PIN5_BIT)
#define GPIO_MUX1_PIN5_PERIPHERAL3    (GPIO_MUX1_R_PIN5_PERIPHERAL3 << GPIO_MUX1_R_PIN5_BIT)
/*----------*/

/*----------*/
#define GPIO_MUX1_R_PIN6_BIT    (12UL)

#define GPIO_MUX1_R_PIN6_MASK    ((uint32_t) 0x00000003UL)
#define GPIO_MUX1_R_PIN6_GPIO    ((uint32_t) 0x00000000UL)
#define GPIO_MUX1_R_PIN6_PERIPHERAL1    ((uint32_t) 0x00000001UL)
#define GPIO_MUX1_R_PIN6_PERIPHERAL2    ((uint32_t) 0x00000002UL)
#define GPIO_MUX1_R_PIN6_PERIPHERAL3    ((uint32_t) 0x00000003UL)

#define GPIO_MUX1_PIN6_MASK    (GPIO_MUX1_R_PIN6_MASK << GPIO_MUX1_R_PIN6_BIT)
#define GPIO_MUX1_PIN6_GPIO    (GPIO_MUX1_R_PIN6_GPIO << GPIO_MUX1_R_PIN6_BIT)
#define GPIO_MUX1_PIN6_PERIPHERAL1    (GPIO_MUX1_R_PIN6_PERIPHERAL1 << GPIO_MUX1_R_PIN6_BIT)
#define GPIO_MUX1_PIN6_PERIPHERAL2    (GPIO_MUX1_R_PIN6_PERIPHERAL2 << GPIO_MUX1_R_PIN6_BIT)
#define GPIO_MUX1_PIN6_PERIPHERAL3    (GPIO_MUX1_R_PIN6_PERIPHERAL3 << GPIO_MUX1_R_PIN6_BIT)
/*----------*/

/*----------*/
#define GPIO_MUX1_R_PIN7_BIT    (14UL)

#define GPIO_MUX1_R_PIN7_MASK    ((uint32_t) 0x00000003UL)
#define GPIO_MUX1_R_PIN7_GPIO    ((uint32_t) 0x00000000UL)
#define GPIO_MUX1_R_PIN7_PERIPHERAL1    ((uint32_t) 0x00000001UL)
#define GPIO_MUX1_R_PIN7_PERIPHERAL2    ((uint32_t) 0x00000002UL)
#define GPIO_MUX1_R_PIN7_PERIPHERAL3    ((uint32_t) 0x00000003UL)

#define GPIO_MUX1_PIN7_MASK    (GPIO_MUX1_R_PIN7_MASK << GPIO_MUX1_R_PIN7_BIT)
#define GPIO_MUX1_PIN7_GPIO    (GPIO_MUX1_R_PIN7_GPIO << GPIO_MUX1_R_PIN7_BIT)
#define GPIO_MUX1_PIN7_PERIPHERAL1    (GPIO_MUX1_R_PIN7_PERIPHERAL1 << GPIO_MUX1_R_PIN7_BIT)
#define GPIO_MUX1_PIN7_PERIPHERAL2    (GPIO_MUX1_R_PIN7_PERIPHERAL2 << GPIO_MUX1_R_PIN7_BIT)
#define GPIO_MUX1_PIN7_PERIPHERAL3    (GPIO_MUX1_R_PIN7_PERIPHERAL3 << GPIO_MUX1_R_PIN7_BIT)
/*----------*/

/*----------*/
#define GPIO_MUX1_R_PIN8_BIT    (16UL)

#define GPIO_MUX1_R_PIN8_MASK    ((uint32_t) 0x00000003UL)
#define GPIO_MUX1_R_PIN8_GPIO    ((uint32_t) 0x00000000UL)
#define GPIO_MUX1_R_PIN8_PERIPHERAL1    ((uint32_t) 0x00000001UL)
#define GPIO_MUX1_R_PIN8_PERIPHERAL2    ((uint32_t) 0x00000002UL)
#define GPIO_MUX1_R_PIN8_PERIPHERAL3    ((uint32_t) 0x00000003UL)

#define GPIO_MUX1_PIN8_MASK    (GPIO_MUX1_R_PIN8_MASK << GPIO_MUX1_R_PIN8_BIT)
#define GPIO_MUX1_PIN8_GPIO    (GPIO_MUX1_R_PIN8_GPIO << GPIO_MUX1_R_PIN8_BIT)
#define GPIO_MUX1_PIN8_PERIPHERAL1    (GPIO_MUX1_R_PIN8_PERIPHERAL1 << GPIO_MUX1_R_PIN8_BIT)
#define GPIO_MUX1_PIN8_PERIPHERAL2    (GPIO_MUX1_R_PIN8_PERIPHERAL2 << GPIO_MUX1_R_PIN8_BIT)
#define GPIO_MUX1_PIN8_PERIPHERAL3    (GPIO_MUX1_R_PIN8_PERIPHERAL3 << GPIO_MUX1_R_PIN8_BIT)
/*----------*/

/*----------*/
#define GPIO_MUX1_R_PIN9_BIT    (18UL)

#define GPIO_MUX1_R_PIN9_MASK    ((uint32_t) 0x00000003UL)
#define GPIO_MUX1_R_PIN9_GPIO    ((uint32_t) 0x00000000UL)
#define GPIO_MUX1_R_PIN9_PERIPHERAL1    ((uint32_t) 0x00000001UL)
#define GPIO_MUX1_R_PIN9_PERIPHERAL2    ((uint32_t) 0x00000002UL)
#define GPIO_MUX1_R_PIN9_PERIPHERAL3    ((uint32_t) 0x00000003UL)

#define GPIO_MUX1_PIN9_MASK    (GPIO_MUX1_R_PIN9_MASK << GPIO_MUX1_R_PIN9_BIT)
#define GPIO_MUX1_PIN9_GPIO    (GPIO_MUX1_R_PIN9_GPIO << GPIO_MUX1_R_PIN9_BIT)
#define GPIO_MUX1_PIN9_PERIPHERAL1    (GPIO_MUX1_R_PIN9_PERIPHERAL1 << GPIO_MUX1_R_PIN9_BIT)
#define GPIO_MUX1_PIN9_PERIPHERAL2    (GPIO_MUX1_R_PIN9_PERIPHERAL2 << GPIO_MUX1_R_PIN9_BIT)
#define GPIO_MUX1_PIN9_PERIPHERAL3    (GPIO_MUX1_R_PIN9_PERIPHERAL3 << GPIO_MUX1_R_PIN9_BIT)
/*----------*/

/*----------*/
#define GPIO_MUX1_R_PIN10_BIT    (20UL)

#define GPIO_MUX1_R_PIN10_MASK    ((uint32_t) 0x00000003UL)
#define GPIO_MUX1_R_PIN10_GPIO    ((uint32_t) 0x00000000UL)
#define GPIO_MUX1_R_PIN10_PERIPHERAL1    ((uint32_t) 0x00000001UL)
#define GPIO_MUX1_R_PIN10_PERIPHERAL2    ((uint32_t) 0x00000002UL)
#define GPIO_MUX1_R_PIN10_PERIPHERAL3    ((uint32_t) 0x00000003UL)

#define GPIO_MUX1_PIN10_MASK    (GPIO_MUX1_R_PIN10_MASK << GPIO_MUX1_R_PIN10_BIT)
#define GPIO_MUX1_PIN10_GPIO    (GPIO_MUX1_R_PIN10_GPIO << GPIO_MUX1_R_PIN10_BIT)
#define GPIO_MUX1_PIN10_PERIPHERAL1    (GPIO_MUX1_R_PIN10_PERIPHERAL1 << GPIO_MUX1_R_PIN10_BIT)
#define GPIO_MUX1_PIN10_PERIPHERAL2    (GPIO_MUX1_R_PIN10_PERIPHERAL2 << GPIO_MUX1_R_PIN10_BIT)
#define GPIO_MUX1_PIN10_PERIPHERAL3    (GPIO_MUX1_R_PIN10_PERIPHERAL3 << GPIO_MUX1_R_PIN10_BIT)
/*----------*/

/*----------*/
#define GPIO_MUX1_R_PIN11_BIT    (22UL)

#define GPIO_MUX1_R_PIN11_MASK    ((uint32_t) 0x00000003UL)
#define GPIO_MUX1_R_PIN11_GPIO    ((uint32_t) 0x00000000UL)
#define GPIO_MUX1_R_PIN11_PERIPHERAL1    ((uint32_t) 0x00000001UL)
#define GPIO_MUX1_R_PIN11_PERIPHERAL2    ((uint32_t) 0x00000002UL)
#define GPIO_MUX1_R_PIN11_PERIPHERAL3    ((uint32_t) 0x00000003UL)

#define GPIO_MUX1_PIN11_MASK    (GPIO_MUX1_R_PIN11_MASK << GPIO_MUX1_R_PIN11_BIT)
#define GPIO_MUX1_PIN11_GPIO    (GPIO_MUX1_R_PIN11_GPIO << GPIO_MUX1_R_PIN11_BIT)
#define GPIO_MUX1_PIN11_PERIPHERAL1    (GPIO_MUX1_R_PIN11_PERIPHERAL1 << GPIO_MUX1_R_PIN11_BIT)
#define GPIO_MUX1_PIN11_PERIPHERAL2    (GPIO_MUX1_R_PIN11_PERIPHERAL2 << GPIO_MUX1_R_PIN11_BIT)
#define GPIO_MUX1_PIN11_PERIPHERAL3    (GPIO_MUX1_R_PIN11_PERIPHERAL3 << GPIO_MUX1_R_PIN11_BIT)
/*----------*/

/*----------*/
#define GPIO_MUX1_R_PIN12_BIT    (24UL)

#define GPIO_MUX1_R_PIN12_MASK    ((uint32_t) 0x00000003UL)
#define GPIO_MUX1_R_PIN12_GPIO    ((uint32_t) 0x00000000UL)
#define GPIO_MUX1_R_PIN12_PERIPHERAL1    ((uint32_t) 0x00000001UL)
#define GPIO_MUX1_R_PIN12_PERIPHERAL2    ((uint32_t) 0x00000002UL)
#define GPIO_MUX1_R_PIN12_PERIPHERAL3    ((uint32_t) 0x00000003UL)

#define GPIO_MUX1_PIN12_MASK    (GPIO_MUX1_R_PIN12_MASK << GPIO_MUX1_R_PIN12_BIT)
#define GPIO_MUX1_PIN12_GPIO    (GPIO_MUX1_R_PIN12_GPIO << GPIO_MUX1_R_PIN12_BIT)
#define GPIO_MUX1_PIN12_PERIPHERAL1    (GPIO_MUX1_R_PIN12_PERIPHERAL1 << GPIO_MUX1_R_PIN12_BIT)
#define GPIO_MUX1_PIN12_PERIPHERAL2    (GPIO_MUX1_R_PIN12_PERIPHERAL2 << GPIO_MUX1_R_PIN12_BIT)
#define GPIO_MUX1_PIN12_PERIPHERAL3    (GPIO_MUX1_R_PIN12_PERIPHERAL3 << GPIO_MUX1_R_PIN12_BIT)
/*----------*/

/*----------*/
#define GPIO_MUX1_R_PIN13_BIT    (26UL)

#define GPIO_MUX1_R_PIN13_MASK    ((uint32_t) 0x00000003UL)
#define GPIO_MUX1_R_PIN13_GPIO    ((uint32_t) 0x00000000UL)
#define GPIO_MUX1_R_PIN13_PERIPHERAL1    ((uint32_t) 0x00000001UL)
#define GPIO_MUX1_R_PIN13_PERIPHERAL2    ((uint32_t) 0x00000002UL)
#define GPIO_MUX1_R_PIN13_PERIPHERAL3    ((uint32_t) 0x00000003UL)

#define GPIO_MUX1_PIN13_MASK    (GPIO_MUX1_R_PIN13_MASK << GPIO_MUX1_R_PIN13_BIT)
#define GPIO_MUX1_PIN13_GPIO    (GPIO_MUX1_R_PIN13_GPIO << GPIO_MUX1_R_PIN13_BIT)
#define GPIO_MUX1_PIN13_PERIPHERAL1    (GPIO_MUX1_R_PIN13_PERIPHERAL1 << GPIO_MUX1_R_PIN13_BIT)
#define GPIO_MUX1_PIN13_PERIPHERAL2    (GPIO_MUX1_R_PIN13_PERIPHERAL2 << GPIO_MUX1_R_PIN13_BIT)
#define GPIO_MUX1_PIN13_PERIPHERAL3    (GPIO_MUX1_R_PIN13_PERIPHERAL3 << GPIO_MUX1_R_PIN13_BIT)
/*----------*/

/*----------*/
#define GPIO_MUX1_R_PIN14_BIT    (28UL)

#define GPIO_MUX1_R_PIN14_MASK    ((uint32_t) 0x00000003UL)
#define GPIO_MUX1_R_PIN14_GPIO    ((uint32_t) 0x00000000UL)
#define GPIO_MUX1_R_PIN14_PERIPHERAL1    ((uint32_t) 0x00000001UL)
#define GPIO_MUX1_R_PIN14_PERIPHERAL2    ((uint32_t) 0x00000002UL)
#define GPIO_MUX1_R_PIN14_PERIPHERAL3    ((uint32_t) 0x00000003UL)

#define GPIO_MUX1_PIN14_MASK    (GPIO_MUX1_R_PIN14_MASK << GPIO_MUX1_R_PIN14_BIT)
#define GPIO_MUX1_PIN14_GPIO    (GPIO_MUX1_R_PIN14_GPIO << GPIO_MUX1_R_PIN14_BIT)
#define GPIO_MUX1_PIN14_PERIPHERAL1    (GPIO_MUX1_R_PIN14_PERIPHERAL1 << GPIO_MUX1_R_PIN14_BIT)
#define GPIO_MUX1_PIN14_PERIPHERAL2    (GPIO_MUX1_R_PIN14_PERIPHERAL2 << GPIO_MUX1_R_PIN14_BIT)
#define GPIO_MUX1_PIN14_PERIPHERAL3    (GPIO_MUX1_R_PIN14_PERIPHERAL3 << GPIO_MUX1_R_PIN14_BIT)
/*----------*/

/*----------*/
#define GPIO_MUX1_R_PIN15_BIT    (30UL)

#define GPIO_MUX1_R_PIN15_MASK    ((uint32_t) 0x00000003UL)
#define GPIO_MUX1_R_PIN15_GPIO    ((uint32_t) 0x00000000UL)
#define GPIO_MUX1_R_PIN15_PERIPHERAL1    ((uint32_t) 0x00000001UL)
#define GPIO_MUX1_R_PIN15_PERIPHERAL2    ((uint32_t) 0x00000002UL)
#define GPIO_MUX1_R_PIN15_PERIPHERAL3    ((uint32_t) 0x00000003UL)

#define GPIO_MUX1_PIN15_MASK    (GPIO_MUX1_R_PIN15_MASK << GPIO_MUX1_R_PIN15_BIT)
#define GPIO_MUX1_PIN15_GPIO    (GPIO_MUX1_R_PIN15_GPIO << GPIO_MUX1_R_PIN15_BIT)
#define GPIO_MUX1_PIN15_PERIPHERAL1    (GPIO_MUX1_R_PIN15_PERIPHERAL1 << GPIO_MUX1_R_PIN15_BIT)
#define GPIO_MUX1_PIN15_PERIPHERAL2    (GPIO_MUX1_R_PIN15_PERIPHERAL2 << GPIO_MUX1_R_PIN15_BIT)
#define GPIO_MUX1_PIN15_PERIPHERAL3    (GPIO_MUX1_R_PIN15_PERIPHERAL3 << GPIO_MUX1_R_PIN15_BIT)
/*----------*/

/*----------*/
#define GPIOA_MUX1_R_PIN0_BIT    (0UL)

#define GPIOA_MUX1_R_PIN0_MASK    ((uint32_t) 0x00000003UL)
#define GPIOA_MUX1_R_PIN0_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_MUX1_R_PIN0_EPWM1_OUTA    ((uint32_t) 0x00000001UL)

#define GPIOA_MUX1_PIN0_MASK    (GPIOA_MUX1_R_PIN0_MASK << GPIOA_MUX1_R_PIN0_BIT)
#define GPIOA_MUX1_PIN0_GPIO    (GPIOA_MUX1_R_PIN0_GPIO << GPIOA_MUX1_R_PIN0_BIT)
#define GPIOA_MUX1_PIN0_EPWM1_OUTA    (GPIOA_MUX1_R_PIN0_EPWM1_OUTA << GPIOA_MUX1_R_PIN0_BIT)
/*----------*/

/*----------*/
#define GPIOA_MUX1_R_PIN1_BIT    (2UL)

#define GPIOA_MUX1_R_PIN1_MASK    ((uint32_t) 0x00000003UL)
#define GPIOA_MUX1_R_PIN1_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_MUX1_R_PIN1_EPWM1_OUTB    ((uint32_t) 0x00000001UL)
#define GPIOA_MUX1_R_PIN1_COMP1_OUT    ((uint32_t) 0x00000003UL)

#define GPIOA_MUX1_PIN1_MASK    (GPIOA_MUX1_R_PIN1_MASK << GPIOA_MUX1_R_PIN1_BIT)
#define GPIOA_MUX1_PIN1_GPIO    (GPIOA_MUX1_R_PIN1_GPIO << GPIOA_MUX1_R_PIN1_BIT)
#define GPIOA_MUX1_PIN1_EPWM1_OUTB    (GPIOA_MUX1_R_PIN1_EPWM1_OUTB << GPIOA_MUX1_R_PIN1_BIT)
#define GPIOA_MUX1_PIN1_COMP1_OUT    (GPIOA_MUX1_R_PIN1_COMP1_OUT << GPIOA_MUX1_R_PIN1_BIT)
/*----------*/

/*----------*/
#define GPIOA_MUX1_R_PIN2_BIT    (4UL)

#define GPIOA_MUX1_R_PIN2_MASK    ((uint32_t) 0x00000003UL)
#define GPIOA_MUX1_R_PIN2_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_MUX1_R_PIN2_EPWM2_OUTA    ((uint32_t) 0x00000001UL)

#define GPIOA_MUX1_PIN2_MASK    (GPIOA_MUX1_R_PIN2_MASK << GPIOA_MUX1_R_PIN2_BIT)
#define GPIOA_MUX1_PIN2_GPIO    (GPIOA_MUX1_R_PIN2_GPIO << GPIOA_MUX1_R_PIN2_BIT)
#define GPIOA_MUX1_PIN2_EPWM2_OUTA    (GPIOA_MUX1_R_PIN2_EPWM2_OUTA << GPIOA_MUX1_R_PIN2_BIT)
/*----------*/

/*----------*/
#define GPIOA_MUX1_R_PIN3_BIT    (6UL)

#define GPIOA_MUX1_R_PIN3_MASK    ((uint32_t) 0x00000003UL)
#define GPIOA_MUX1_R_PIN3_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_MUX1_R_PIN3_EPWM2_OUTB    ((uint32_t) 0x00000001UL)
#define GPIOA_MUX1_R_PIN3_COMP2_OUT    ((uint32_t) 0x00000003UL)

#define GPIOA_MUX1_PIN3_MASK    (GPIOA_MUX1_R_PIN3_MASK << GPIOA_MUX1_R_PIN3_BIT)
#define GPIOA_MUX1_PIN3_GPIO    (GPIOA_MUX1_R_PIN3_GPIO << GPIOA_MUX1_R_PIN3_BIT)
#define GPIOA_MUX1_PIN3_EPWM2_OUTB    (GPIOA_MUX1_R_PIN3_EPWM2_OUTB << GPIOA_MUX1_R_PIN3_BIT)
#define GPIOA_MUX1_PIN3_COMP2_OUT    (GPIOA_MUX1_R_PIN3_COMP2_OUT << GPIOA_MUX1_R_PIN3_BIT)
/*----------*/

/*----------*/
#define GPIOA_MUX1_R_PIN4_BIT    (8UL)

#define GPIOA_MUX1_R_PIN4_MASK    ((uint32_t) 0x00000003UL)
#define GPIOA_MUX1_R_PIN4_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_MUX1_R_PIN4_EPWM3_OUTA    ((uint32_t) 0x00000001UL)

#define GPIOA_MUX1_PIN4_MASK    (GPIOA_MUX1_R_PIN4_MASK << GPIOA_MUX1_R_PIN4_BIT)
#define GPIOA_MUX1_PIN4_GPIO    (GPIOA_MUX1_R_PIN4_GPIO << GPIOA_MUX1_R_PIN4_BIT)
#define GPIOA_MUX1_PIN4_EPWM3_OUTA    (GPIOA_MUX1_R_PIN4_EPWM3_OUTA << GPIOA_MUX1_R_PIN4_BIT)
/*----------*/

/*----------*/
#define GPIOA_MUX1_R_PIN5_BIT    (10UL)

#define GPIOA_MUX1_R_PIN5_MASK    ((uint32_t) 0x00000003UL)
#define GPIOA_MUX1_R_PIN5_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_MUX1_R_PIN5_EPWM3_OUTB    ((uint32_t) 0x00000001UL)
#define GPIOA_MUX1_R_PIN5_ECAP1    ((uint32_t) 0x00000003UL)

#define GPIOA_MUX1_PIN5_MASK    (GPIOA_MUX1_R_PIN5_MASK << GPIOA_MUX1_R_PIN5_BIT)
#define GPIOA_MUX1_PIN5_GPIO    (GPIOA_MUX1_R_PIN5_GPIO << GPIOA_MUX1_R_PIN5_BIT)
#define GPIOA_MUX1_PIN5_EPWM3_OUTB    (GPIOA_MUX1_R_PIN5_EPWM3_OUTB << GPIOA_MUX1_R_PIN5_BIT)
#define GPIOA_MUX1_PIN5_ECAP1    (GPIOA_MUX1_R_PIN5_ECAP1 << GPIOA_MUX1_R_PIN5_BIT)
/*----------*/

/*----------*/
#define GPIOA_MUX1_R_PIN6_BIT    (12UL)

#define GPIOA_MUX1_R_PIN6_MASK    ((uint32_t) 0x00000003UL)
#define GPIOA_MUX1_R_PIN6_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_MUX1_R_PIN6_EPWM4_OUTA    ((uint32_t) 0x00000001UL)
#define GPIOA_MUX1_R_PIN6_EPWM_SYNCIN    ((uint32_t) 0x00000002UL)
#define GPIOA_MUX1_R_PIN6_EPWM_SYNCOUT    ((uint32_t) 0x00000003UL)

#define GPIOA_MUX1_PIN6_MASK    (GPIOA_MUX1_R_PIN6_MASK << GPIOA_MUX1_R_PIN6_BIT)
#define GPIOA_MUX1_PIN6_GPIO    (GPIOA_MUX1_R_PIN6_GPIO << GPIOA_MUX1_R_PIN6_BIT)
#define GPIOA_MUX1_PIN6_EPWM4_OUTA    (GPIOA_MUX1_R_PIN6_EPWM4_OUTA << GPIOA_MUX1_R_PIN6_BIT)
#define GPIOA_MUX1_PIN6_EPWM_SYNCIN    (GPIOA_MUX1_R_PIN6_EPWM_SYNCIN << GPIOA_MUX1_R_PIN6_BIT)
#define GPIOA_MUX1_PIN6_EPWM_SYNCOUT    (GPIOA_MUX1_R_PIN6_EPWM_SYNCOUT << GPIOA_MUX1_R_PIN6_BIT)
/*----------*/

/*----------*/
#define GPIOA_MUX1_R_PIN7_BIT    (14UL)

#define GPIOA_MUX1_R_PIN7_MASK    ((uint32_t) 0x00000003UL)
#define GPIOA_MUX1_R_PIN7_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_MUX1_R_PIN7_EPWM4_OUTB    ((uint32_t) 0x00000001UL)
#define GPIOA_MUX1_R_PIN7_SCIA_RX    ((uint32_t) 0x00000002UL)

#define GPIOA_MUX1_PIN7_MASK    (GPIOA_MUX1_R_PIN7_MASK << GPIOA_MUX1_R_PIN7_BIT)
#define GPIOA_MUX1_PIN7_GPIO    (GPIOA_MUX1_R_PIN7_GPIO << GPIOA_MUX1_R_PIN7_BIT)
#define GPIOA_MUX1_PIN7_EPWM4_OUTB    (GPIOA_MUX1_R_PIN7_EPWM4_OUTB << GPIOA_MUX1_R_PIN7_BIT)
#define GPIOA_MUX1_PIN7_SCIA_RX    (GPIOA_MUX1_R_PIN7_SCIA_RX << GPIOA_MUX1_R_PIN7_BIT)
/*----------*/

/*----------*/
#define GPIOA_MUX1_R_PIN8_BIT    (16UL)

#define GPIOA_MUX1_R_PIN8_MASK    ((uint32_t) 0x00000003UL)
#define GPIOA_MUX1_R_PIN8_GPIO    ((uint32_t) 0x00000000UL)

#define GPIOA_MUX1_PIN8_MASK    (GPIOA_MUX1_R_PIN8_MASK << GPIOA_MUX1_R_PIN8_BIT)
#define GPIOA_MUX1_PIN8_GPIO    (GPIOA_MUX1_R_PIN8_GPIO << GPIOA_MUX1_R_PIN8_BIT)
/*----------*/

/*----------*/
#define GPIOA_MUX1_R_PIN9_BIT    (18UL)

#define GPIOA_MUX1_R_PIN9_MASK    ((uint32_t) 0x00000003UL)
#define GPIOA_MUX1_R_PIN9_GPIO    ((uint32_t) 0x00000000UL)

#define GPIOA_MUX1_PIN9_MASK    (GPIOA_MUX1_R_PIN9_MASK << GPIOA_MUX1_R_PIN9_BIT)
#define GPIOA_MUX1_PIN9_GPIO    (GPIOA_MUX1_R_PIN9_GPIO << GPIOA_MUX1_R_PIN9_BIT)
/*----------*/

/*----------*/
#define GPIOA_MUX1_R_PIN10_BIT    (20UL)

#define GPIOA_MUX1_R_PIN10_MASK    ((uint32_t) 0x00000003UL)
#define GPIOA_MUX1_R_PIN10_GPIO    ((uint32_t) 0x00000000UL)

#define GPIOA_MUX1_PIN10_MASK    (GPIOA_MUX1_R_PIN10_MASK << GPIOA_MUX1_R_PIN10_BIT)
#define GPIOA_MUX1_PIN10_GPIO    (GPIOA_MUX1_R_PIN10_GPIO << GPIOA_MUX1_R_PIN10_BIT)
/*----------*/

/*----------*/
#define GPIOA_MUX1_R_PIN11_BIT    (22UL)

#define GPIOA_MUX1_R_PIN11_MASK    ((uint32_t) 0x00000003UL)
#define GPIOA_MUX1_R_PIN11_GPIO    ((uint32_t) 0x00000000UL)

#define GPIOA_MUX1_PIN11_MASK    (GPIOA_MUX1_R_PIN11_MASK << GPIOA_MUX1_R_PIN11_BIT)
#define GPIOA_MUX1_PIN11_GPIO    (GPIOA_MUX1_R_PIN11_GPIO << GPIOA_MUX1_R_PIN11_BIT)
/*----------*/

/*----------*/
#define GPIOA_MUX1_R_PIN12_BIT    (24UL)

#define GPIOA_MUX1_R_PIN12_MASK    ((uint32_t) 0x00000003UL)
#define GPIOA_MUX1_R_PIN12_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_MUX1_R_PIN12_EPWM_TZ1    ((uint32_t) 0x00000001UL)
#define GPIOA_MUX1_R_PIN12_SCIA_TX    ((uint32_t) 0x00000002UL)

#define GPIOA_MUX1_PIN12_MASK    (GPIOA_MUX1_R_PIN12_MASK << GPIOA_MUX1_R_PIN12_BIT)
#define GPIOA_MUX1_PIN12_GPIO    (GPIOA_MUX1_R_PIN12_GPIO << GPIOA_MUX1_R_PIN12_BIT)
#define GPIOA_MUX1_PIN12_EPWM_TZ1    (GPIOA_MUX1_R_PIN12_EPWM_TZ1 << GPIOA_MUX1_R_PIN12_BIT)
#define GPIOA_MUX1_PIN12_SCIA_TX    (GPIOA_MUX1_R_PIN12_SCIA_TX << GPIOA_MUX1_R_PIN12_BIT)
/*----------*/

/*----------*/
#define GPIOA_MUX1_R_PIN13_BIT    (26UL)

#define GPIOA_MUX1_R_PIN13_MASK    ((uint32_t) 0x00000003UL)
#define GPIOA_MUX1_R_PIN13_GPIO    ((uint32_t) 0x00000000UL)

#define GPIOA_MUX1_PIN13_MASK    (GPIOA_MUX1_R_PIN13_MASK << GPIOA_MUX1_R_PIN13_BIT)
#define GPIOA_MUX1_PIN13_GPIO    (GPIOA_MUX1_R_PIN13_GPIO << GPIOA_MUX1_R_PIN13_BIT)
/*----------*/

/*----------*/
#define GPIOA_MUX1_R_PIN14_BIT    (28UL)

#define GPIOA_MUX1_R_PIN14_MASK    ((uint32_t) 0x00000003UL)
#define GPIOA_MUX1_R_PIN14_GPIO    ((uint32_t) 0x00000000UL)

#define GPIOA_MUX1_PIN14_MASK    (GPIOA_MUX1_R_PIN14_MASK << GPIOA_MUX1_R_PIN14_BIT)
#define GPIOA_MUX1_PIN14_GPIO    (GPIOA_MUX1_R_PIN14_GPIO << GPIOA_MUX1_R_PIN14_BIT)
/*----------*/

/*----------*/
#define GPIOA_MUX1_R_PIN15_BIT    (30UL)

#define GPIOA_MUX1_R_PIN15_MASK    ((uint32_t) 0x00000003UL)
#define GPIOA_MUX1_R_PIN15_GPIO    ((uint32_t) 0x00000000UL)

#define GPIOA_MUX1_PIN15_MASK    (GPIOA_MUX1_R_PIN15_MASK << GPIOA_MUX1_R_PIN15_BIT)
#define GPIOA_MUX1_PIN15_GPIO    (GPIOA_MUX1_R_PIN15_GPIO << GPIOA_MUX1_R_PIN15_BIT)
/*----------*/

/*----------*/
#define GPIOB_MUX1_R_PIN0_BIT    (0UL)

#define GPIOB_MUX1_R_PIN0_MASK    ((uint32_t) 0x00000003UL)
#define GPIOB_MUX1_R_PIN0_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOB_MUX1_R_PIN0_I2CA_SDA    ((uint32_t) 0x00000001UL)
#define GPIOB_MUX1_R_PIN0_EPWM_SYNCIN    ((uint32_t) 0x00000002UL)
#define GPIOB_MUX1_R_PIN0_ADCA_SOC_OUT    ((uint32_t) 0x00000003UL)

#define GPIOB_MUX1_PIN0_MASK    (GPIOB_MUX1_R_PIN0_MASK << GPIOB_MUX1_R_PIN0_BIT)
#define GPIOB_MUX1_PIN0_GPIO    (GPIOB_MUX1_R_PIN0_GPIO << GPIOB_MUX1_R_PIN0_BIT)
#define GPIOB_MUX1_PIN0_I2CA_SDA    (GPIOB_MUX1_R_PIN0_I2CA_SDA << GPIOB_MUX1_R_PIN0_BIT)
#define GPIOB_MUX1_PIN0_EPWM_SYNCIN    (GPIOB_MUX1_R_PIN0_EPWM_SYNCIN << GPIOB_MUX1_R_PIN0_BIT)
#define GPIOB_MUX1_PIN0_ADCA_SOC_OUT    (GPIOB_MUX1_R_PIN0_ADCA_SOC_OUT << GPIOB_MUX1_R_PIN0_BIT)
/*----------*/

/*----------*/
#define GPIOB_MUX1_R_PIN1_BIT    (2UL)

#define GPIOB_MUX1_R_PIN1_MASK    ((uint32_t) 0x00000003UL)
#define GPIOB_MUX1_R_PIN1_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOB_MUX1_R_PIN1_I2CA_SCL    ((uint32_t) 0x00000001UL)
#define GPIOB_MUX1_R_PIN1_EPWM_SYNCOUT    ((uint32_t) 0x00000002UL)
#define GPIOB_MUX1_R_PIN1_ADCB_SOC_OUT    ((uint32_t) 0x00000003UL)

#define GPIOB_MUX1_PIN1_MASK    (GPIOB_MUX1_R_PIN1_MASK << GPIOB_MUX1_R_PIN1_BIT)
#define GPIOB_MUX1_PIN1_GPIO    (GPIOB_MUX1_R_PIN1_GPIO << GPIOB_MUX1_R_PIN1_BIT)
#define GPIOB_MUX1_PIN1_I2CA_SCL    (GPIOB_MUX1_R_PIN1_I2CA_SCL << GPIOB_MUX1_R_PIN1_BIT)
#define GPIOB_MUX1_PIN1_EPWM_SYNCOUT    (GPIOB_MUX1_R_PIN1_EPWM_SYNCOUT << GPIOB_MUX1_R_PIN1_BIT)
#define GPIOB_MUX1_PIN1_ADCB_SOC_OUT    (GPIOB_MUX1_R_PIN1_ADCB_SOC_OUT << GPIOB_MUX1_R_PIN1_BIT)
/*----------*/

/*----------*/
#define GPIOB_MUX1_R_PIN2_BIT    (4UL)

#define GPIOB_MUX1_R_PIN2_MASK    ((uint32_t) 0x00000003UL)
#define GPIOB_MUX1_R_PIN2_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOB_MUX1_R_PIN2_COMP2_OUT    ((uint32_t) 0x00000001UL)

#define GPIOB_MUX1_PIN2_MASK    (GPIOB_MUX1_R_PIN2_MASK << GPIOB_MUX1_R_PIN2_BIT)
#define GPIOB_MUX1_PIN2_GPIO    (GPIOB_MUX1_R_PIN2_GPIO << GPIOB_MUX1_R_PIN2_BIT)
#define GPIOB_MUX1_PIN2_COMP2_OUT    (GPIOB_MUX1_R_PIN2_COMP2_OUT << GPIOB_MUX1_R_PIN2_BIT)
/*----------*/

/*----------*/
#define GPIOB_MUX1_R_PIN3_BIT    (6UL)

#define GPIOB_MUX1_R_PIN3_MASK    ((uint32_t) 0x00000003UL)
#define GPIOB_MUX1_R_PIN3_GPIO    ((uint32_t) 0x00000000UL)

#define GPIOB_MUX1_PIN3_MASK    (GPIOB_MUX1_R_PIN3_MASK << GPIOB_MUX1_R_PIN3_BIT)
#define GPIOB_MUX1_PIN3_GPIO    (GPIOB_MUX1_R_PIN3_GPIO << GPIOB_MUX1_R_PIN3_BIT)
/*----------*/

/*----------*/
#define GPIOB_MUX1_R_PIN4_BIT    (8UL)

#define GPIOB_MUX1_R_PIN4_MASK    ((uint32_t) 0x00000003UL)
#define GPIOB_MUX1_R_PIN4_GPIO    ((uint32_t) 0x00000000UL)

#define GPIOB_MUX1_PIN4_MASK    (GPIOB_MUX1_R_PIN4_MASK << GPIOB_MUX1_R_PIN4_BIT)
#define GPIOB_MUX1_PIN4_GPIO    (GPIOB_MUX1_R_PIN4_GPIO << GPIOB_MUX1_R_PIN4_BIT)
/*----------*/

/*----------*/
#define GPIOB_MUX1_R_PIN5_BIT    (10UL)

#define GPIOB_MUX1_R_PIN5_MASK    ((uint32_t) 0x00000003UL)
#define GPIOB_MUX1_R_PIN5_GPIO    ((uint32_t) 0x00000000UL)

#define GPIOB_MUX1_PIN5_MASK    (GPIOB_MUX1_R_PIN5_MASK << GPIOB_MUX1_R_PIN5_BIT)
#define GPIOB_MUX1_PIN5_GPIO    (GPIOB_MUX1_R_PIN5_GPIO << GPIOB_MUX1_R_PIN5_BIT)
/*----------*/

/*----------*/
#define GPIOB_MUX1_R_PIN6_BIT    (12UL)

#define GPIOB_MUX1_R_PIN6_MASK    ((uint32_t) 0x00000003UL)
#define GPIOB_MUX1_R_PIN6_GPIO    ((uint32_t) 0x00000000UL)

#define GPIOB_MUX1_PIN6_MASK    (GPIOB_MUX1_R_PIN6_MASK << GPIOB_MUX1_R_PIN6_BIT)
#define GPIOB_MUX1_PIN6_GPIO    (GPIOB_MUX1_R_PIN6_GPIO << GPIOB_MUX1_R_PIN6_BIT)
/*----------*/

/*----------*/
#define GPIOB_MUX1_R_PIN7_BIT    (14UL)

#define GPIOB_MUX1_R_PIN7_MASK    ((uint32_t) 0x00000003UL)
#define GPIOB_MUX1_R_PIN7_GPIO    ((uint32_t) 0x00000000UL)

#define GPIOB_MUX1_PIN7_MASK    (GPIOB_MUX1_R_PIN7_MASK << GPIOB_MUX1_R_PIN7_BIT)
#define GPIOB_MUX1_PIN7_GPIO    (GPIOB_MUX1_R_PIN7_GPIO << GPIOB_MUX1_R_PIN7_BIT)
/*----------*/

/*----------*/
#define GPIOB_MUX1_R_PIN8_BIT    (16UL)

#define GPIOB_MUX1_R_PIN8_MASK    ((uint32_t) 0x00000003UL)
#define GPIOB_MUX1_R_PIN8_GPIO    ((uint32_t) 0x00000000UL)

#define GPIOB_MUX1_PIN8_MASK    (GPIOB_MUX1_R_PIN8_MASK << GPIOB_MUX1_R_PIN8_BIT)
#define GPIOB_MUX1_PIN8_GPIO    (GPIOB_MUX1_R_PIN8_GPIO << GPIOB_MUX1_R_PIN8_BIT)
/*----------*/

/*----------*/
#define GPIOB_MUX1_R_PIN9_BIT    (18UL)

#define GPIOB_MUX1_R_PIN9_MASK    ((uint32_t) 0x00000003UL)
#define GPIOB_MUX1_R_PIN9_GPIO    ((uint32_t) 0x00000000UL)

#define GPIOB_MUX1_PIN9_MASK    (GPIOB_MUX1_R_PIN9_MASK << GPIOB_MUX1_R_PIN9_BIT)
#define GPIOB_MUX1_PIN9_GPIO    (GPIOB_MUX1_R_PIN9_GPIO << GPIOB_MUX1_R_PIN9_BIT)
/*----------*/

/*----------*/
#define GPIOB_MUX1_R_PIN10_BIT    (20UL)

#define GPIOB_MUX1_R_PIN10_MASK    ((uint32_t) 0x00000003UL)
#define GPIOB_MUX1_R_PIN10_GPIO    ((uint32_t) 0x00000000UL)

#define GPIOB_MUX1_PIN10_MASK    (GPIOB_MUX1_R_PIN10_MASK << GPIOB_MUX1_R_PIN10_BIT)
#define GPIOB_MUX1_PIN10_GPIO    (GPIOB_MUX1_R_PIN10_GPIO << GPIOB_MUX1_R_PIN10_BIT)
/*----------*/

/*----------*/
#define GPIOB_MUX1_R_PIN11_BIT    (22UL)

#define GPIOB_MUX1_R_PIN11_MASK    ((uint32_t) 0x00000003UL)
#define GPIOB_MUX1_R_PIN11_GPIO    ((uint32_t) 0x00000000UL)

#define GPIOB_MUX1_PIN11_MASK    (GPIOB_MUX1_R_PIN11_MASK << GPIOB_MUX1_R_PIN11_BIT)
#define GPIOB_MUX1_PIN11_GPIO    (GPIOB_MUX1_R_PIN11_GPIO << GPIOB_MUX1_R_PIN11_BIT)
/*----------*/

/*----------*/
#define GPIOB_MUX1_R_PIN12_BIT    (24UL)

#define GPIOB_MUX1_R_PIN12_MASK    ((uint32_t) 0x00000003UL)
#define GPIOB_MUX1_R_PIN12_GPIO    ((uint32_t) 0x00000000UL)

#define GPIOB_MUX1_PIN12_MASK    (GPIOB_MUX1_R_PIN12_MASK << GPIOB_MUX1_R_PIN12_BIT)
#define GPIOB_MUX1_PIN12_GPIO    (GPIOB_MUX1_R_PIN12_GPIO << GPIOB_MUX1_R_PIN12_BIT)
/*----------*/

/*----------*/
#define GPIOB_MUX1_R_PIN13_BIT    (26UL)

#define GPIOB_MUX1_R_PIN13_MASK    ((uint32_t) 0x00000003UL)
#define GPIOB_MUX1_R_PIN13_GPIO    ((uint32_t) 0x00000000UL)

#define GPIOB_MUX1_PIN13_MASK    (GPIOB_MUX1_R_PIN13_MASK << GPIOB_MUX1_R_PIN13_BIT)
#define GPIOB_MUX1_PIN13_GPIO    (GPIOB_MUX1_R_PIN13_GPIO << GPIOB_MUX1_R_PIN13_BIT)
/*----------*/

/*----------*/
#define GPIOB_MUX1_R_PIN14_BIT    (28UL)

#define GPIOB_MUX1_R_PIN14_MASK    ((uint32_t) 0x00000003UL)
#define GPIOB_MUX1_R_PIN14_GPIO    ((uint32_t) 0x00000000UL)

#define GPIOB_MUX1_PIN14_MASK    (GPIOB_MUX1_R_PIN14_MASK << GPIOB_MUX1_R_PIN14_BIT)
#define GPIOB_MUX1_PIN14_GPIO    (GPIOB_MUX1_R_PIN14_GPIO << GPIOB_MUX1_R_PIN14_BIT)
/*----------*/

/*----------*/
#define GPIOB_MUX1_R_PIN15_BIT    (30UL)

#define GPIOB_MUX1_R_PIN15_MASK    ((uint32_t) 0x00000003UL)
#define GPIOB_MUX1_R_PIN15_GPIO    ((uint32_t) 0x00000000UL)

#define GPIOB_MUX1_PIN15_MASK    (GPIOB_MUX1_R_PIN15_MASK << GPIOB_MUX1_R_PIN15_BIT)
#define GPIOB_MUX1_PIN15_GPIO    (GPIOB_MUX1_R_PIN15_GPIO << GPIOB_MUX1_R_PIN15_BIT)
/*----------*/

/*----------*/
#define AIO_MUX1_R_PIN0_BIT    (0UL)

#define AIO_MUX1_R_PIN0_MASK    ((uint32_t) 0x00000003UL)
#define AIO_MUX1_R_PIN0_ADCA_IN0    ((uint32_t) 0x00000000UL)

#define AIO_MUX1_PIN0_MASK    (AIO_MUX1_R_PIN0_MASK << AIO_MUX1_R_PIN0_BIT)
#define AIO_MUX1_PIN0_ADCA_IN0    (AIO_MUX1_R_PIN0_ADCA_IN0 << AIO_MUX1_R_PIN0_BIT)
/*----------*/

/*----------*/
#define AIO_MUX1_R_PIN1_BIT    (2UL)

#define AIO_MUX1_R_PIN1_MASK    ((uint32_t) 0x00000003UL)
#define AIO_MUX1_R_PIN1_ADCA_IN1    ((uint32_t) 0x00000000UL)

#define AIO_MUX1_PIN1_MASK    (AIO_MUX1_R_PIN1_MASK << AIO_MUX1_R_PIN1_BIT)
#define AIO_MUX1_PIN1_ADCA_IN1    (AIO_MUX1_R_PIN1_ADCA_IN1 << AIO_MUX1_R_PIN1_BIT)
/*----------*/

/*----------*/
#define AIO_MUX1_R_PIN2_BIT    (4UL)

#define AIO_MUX1_R_PIN2_MASK    ((uint32_t) 0x00000003UL)
#define AIO_MUX1_R_PIN2_GPIO    ((uint32_t) 0x00000000UL)
#define AIO_MUX1_R_PIN2_ADCA_IN2    ((uint32_t) 0x00000002UL)
#define AIO_MUX1_R_PIN2_COMP1_A    ((uint32_t) 0x00000003UL)

#define AIO_MUX1_PIN2_MASK    (AIO_MUX1_R_PIN2_MASK << AIO_MUX1_R_PIN2_BIT)
#define AIO_MUX1_PIN2_GPIO    (AIO_MUX1_R_PIN2_GPIO << AIO_MUX1_R_PIN2_BIT)
#define AIO_MUX1_PIN2_ADCA_IN2    (AIO_MUX1_R_PIN2_ADCA_IN2 << AIO_MUX1_R_PIN2_BIT)
#define AIO_MUX1_PIN2_COMP1_A    (AIO_MUX1_R_PIN2_COMP1_A << AIO_MUX1_R_PIN2_BIT)
/*----------*/

/*----------*/
#define AIO_MUX1_R_PIN3_BIT    (6UL)

#define AIO_MUX1_R_PIN3_MASK    ((uint32_t) 0x00000003UL)
#define AIO_MUX1_R_PIN3_ADCA_IN3    ((uint32_t) 0x00000000UL)

#define AIO_MUX1_PIN3_MASK    (AIO_MUX1_R_PIN3_MASK << AIO_MUX1_R_PIN3_BIT)
#define AIO_MUX1_PIN3_ADCA_IN3    (AIO_MUX1_R_PIN3_ADCA_IN3 << AIO_MUX1_R_PIN3_BIT)
/*----------*/

/*----------*/
#define AIO_MUX1_R_PIN4_BIT    (8UL)

#define AIO_MUX1_R_PIN4_MASK    ((uint32_t) 0x00000003UL)
#define AIO_MUX1_R_PIN4_GPIO    ((uint32_t) 0x00000000UL)
#define AIO_MUX1_R_PIN4_ADCA_IN4    ((uint32_t) 0x00000002UL)
#define AIO_MUX1_R_PIN4_COMP2_A    ((uint32_t) 0x00000003UL)

#define AIO_MUX1_PIN4_MASK    (AIO_MUX1_R_PIN4_MASK << AIO_MUX1_R_PIN4_BIT)
#define AIO_MUX1_PIN4_GPIO    (AIO_MUX1_R_PIN4_GPIO << AIO_MUX1_R_PIN4_BIT)
#define AIO_MUX1_PIN4_ADCA_IN4    (AIO_MUX1_R_PIN4_ADCA_IN4 << AIO_MUX1_R_PIN4_BIT)
#define AIO_MUX1_PIN4_COMP2_A    (AIO_MUX1_R_PIN4_COMP2_A << AIO_MUX1_R_PIN4_BIT)
/*----------*/

/*----------*/
#define AIO_MUX1_R_PIN5_BIT    (10UL)

#define AIO_MUX1_R_PIN5_MASK    ((uint32_t) 0x00000003UL)
#define AIO_MUX1_R_PIN5_ADCA_IN5    ((uint32_t) 0x00000000UL)

#define AIO_MUX1_PIN5_MASK    (AIO_MUX1_R_PIN5_MASK << AIO_MUX1_R_PIN5_BIT)
#define AIO_MUX1_PIN5_ADCA_IN5    (AIO_MUX1_R_PIN5_ADCA_IN5 << AIO_MUX1_R_PIN5_BIT)
/*----------*/

/*----------*/
#define AIO_MUX1_R_PIN6_BIT    (12UL)

#define AIO_MUX1_R_PIN6_MASK    ((uint32_t) 0x00000003UL)
#define AIO_MUX1_R_PIN6_GPIO    ((uint32_t) 0x00000000UL)
#define AIO_MUX1_R_PIN6_ADCA_IN6    ((uint32_t) 0x00000002UL)

#define AIO_MUX1_PIN6_MASK    (AIO_MUX1_R_PIN6_MASK << AIO_MUX1_R_PIN6_BIT)
#define AIO_MUX1_PIN6_GPIO    (AIO_MUX1_R_PIN6_GPIO << AIO_MUX1_R_PIN6_BIT)
#define AIO_MUX1_PIN6_ADCA_IN6    (AIO_MUX1_R_PIN6_ADCA_IN6 << AIO_MUX1_R_PIN6_BIT)
/*----------*/

/*----------*/
#define AIO_MUX1_R_PIN7_BIT    (14UL)

#define AIO_MUX1_R_PIN7_MASK    ((uint32_t) 0x00000003UL)
#define AIO_MUX1_R_PIN7_ADCA_IN7    ((uint32_t) 0x00000000UL)

#define AIO_MUX1_PIN7_MASK    (AIO_MUX1_R_PIN7_MASK << AIO_MUX1_R_PIN7_BIT)
#define AIO_MUX1_PIN7_ADCA_IN7    (AIO_MUX1_R_PIN7_ADCA_IN7 << AIO_MUX1_R_PIN7_BIT)
/*----------*/

/*----------*/
#define AIO_MUX1_R_PIN8_BIT    (16UL)

#define AIO_MUX1_R_PIN8_MASK    ((uint32_t) 0x00000003UL)
#define AIO_MUX1_R_PIN8_ADCB_IN0    ((uint32_t) 0x00000000UL)

#define AIO_MUX1_PIN8_MASK    (AIO_MUX1_R_PIN8_MASK << AIO_MUX1_R_PIN8_BIT)
#define AIO_MUX1_PIN8_ADCB_IN0    (AIO_MUX1_R_PIN8_ADCB_IN0 << AIO_MUX1_R_PIN8_BIT)
/*----------*/

/*----------*/
#define AIO_MUX1_R_PIN9_BIT    (18UL)

#define AIO_MUX1_R_PIN9_MASK    ((uint32_t) 0x00000003UL)
#define AIO_MUX1_R_PIN9_ADCB_IN1    ((uint32_t) 0x00000000UL)

#define AIO_MUX1_PIN9_MASK    (AIO_MUX1_R_PIN9_MASK << AIO_MUX1_R_PIN9_BIT)
#define AIO_MUX1_PIN9_ADCB_IN1    (AIO_MUX1_R_PIN9_ADCB_IN1 << AIO_MUX1_R_PIN9_BIT)
/*----------*/

/*----------*/
#define AIO_MUX1_R_PIN10_BIT    (20UL)

#define AIO_MUX1_R_PIN10_MASK    ((uint32_t) 0x00000003UL)
#define AIO_MUX1_R_PIN10_GPIO    ((uint32_t) 0x00000000UL)
#define AIO_MUX1_R_PIN10_ADCB_IN2    ((uint32_t) 0x00000002UL)
#define AIO_MUX1_R_PIN10_COMP1_B    ((uint32_t) 0x00000003UL)

#define AIO_MUX1_PIN10_MASK    (AIO_MUX1_R_PIN10_MASK << AIO_MUX1_R_PIN10_BIT)
#define AIO_MUX1_PIN10_GPIO    (AIO_MUX1_R_PIN10_GPIO << AIO_MUX1_R_PIN10_BIT)
#define AIO_MUX1_PIN10_ADCB_IN2    (AIO_MUX1_R_PIN10_ADCB_IN2 << AIO_MUX1_R_PIN10_BIT)
#define AIO_MUX1_PIN10_COMP1_B    (AIO_MUX1_R_PIN10_COMP1_B << AIO_MUX1_R_PIN10_BIT)
/*----------*/

/*----------*/
#define AIO_MUX1_R_PIN11_BIT    (22UL)

#define AIO_MUX1_R_PIN11_MASK    ((uint32_t) 0x00000003UL)
#define AIO_MUX1_R_PIN11_ADCB_IN3    ((uint32_t) 0x00000000UL)

#define AIO_MUX1_PIN11_MASK    (AIO_MUX1_R_PIN11_MASK << AIO_MUX1_R_PIN11_BIT)
#define AIO_MUX1_PIN11_ADCB_IN3    (AIO_MUX1_R_PIN11_ADCB_IN3 << AIO_MUX1_R_PIN11_BIT)
/*----------*/

/*----------*/
#define AIO_MUX1_R_PIN12_BIT    (24UL)

#define AIO_MUX1_R_PIN12_MASK    ((uint32_t) 0x00000003UL)
#define AIO_MUX1_R_PIN12_GPIO    ((uint32_t) 0x00000000UL)
#define AIO_MUX1_R_PIN12_ADCB_IN4    ((uint32_t) 0x00000002UL)
#define AIO_MUX1_R_PIN12_COMP2_B    ((uint32_t) 0x00000003UL)

#define AIO_MUX1_PIN12_MASK    (AIO_MUX1_R_PIN12_MASK << AIO_MUX1_R_PIN12_BIT)
#define AIO_MUX1_PIN12_GPIO    (AIO_MUX1_R_PIN12_GPIO << AIO_MUX1_R_PIN12_BIT)
#define AIO_MUX1_PIN12_ADCB_IN4    (AIO_MUX1_R_PIN12_ADCB_IN4 << AIO_MUX1_R_PIN12_BIT)
#define AIO_MUX1_PIN12_COMP2_B    (AIO_MUX1_R_PIN12_COMP2_B << AIO_MUX1_R_PIN12_BIT)
/*----------*/

/*----------*/
#define AIO_MUX1_R_PIN13_BIT    (26UL)

#define AIO_MUX1_R_PIN13_MASK    ((uint32_t) 0x00000003UL)
#define AIO_MUX1_R_PIN13_ADCB_IN5    ((uint32_t) 0x00000000UL)

#define AIO_MUX1_PIN13_MASK    (AIO_MUX1_R_PIN13_MASK << AIO_MUX1_R_PIN13_BIT)
#define AIO_MUX1_PIN13_ADCB_IN5    (AIO_MUX1_R_PIN13_ADCB_IN5 << AIO_MUX1_R_PIN13_BIT)
/*----------*/

/*----------*/
#define AIO_MUX1_R_PIN14_BIT    (28UL)

#define AIO_MUX1_R_PIN14_MASK    ((uint32_t) 0x00000003UL)
#define AIO_MUX1_R_PIN14_GPIO    ((uint32_t) 0x00000000UL)
#define AIO_MUX1_R_PIN14_ADCB_IN6    ((uint32_t) 0x00000002UL)

#define AIO_MUX1_PIN14_MASK    (AIO_MUX1_R_PIN14_MASK << AIO_MUX1_R_PIN14_BIT)
#define AIO_MUX1_PIN14_GPIO    (AIO_MUX1_R_PIN14_GPIO << AIO_MUX1_R_PIN14_BIT)
#define AIO_MUX1_PIN14_ADCB_IN6    (AIO_MUX1_R_PIN14_ADCB_IN6 << AIO_MUX1_R_PIN14_BIT)
/*----------*/

/*----------*/
#define AIO_MUX1_R_PIN15_BIT    (30UL)

#define AIO_MUX1_R_PIN15_MASK    ((uint32_t) 0x00000003UL)
#define AIO_MUX1_R_PIN15_ADCB_IN7    ((uint32_t) 0x00000000UL)

#define AIO_MUX1_PIN15_MASK    (AIO_MUX1_R_PIN15_MASK << AIO_MUX1_R_PIN15_BIT)
#define AIO_MUX1_PIN15_ADCB_IN7    (AIO_MUX1_R_PIN15_ADCB_IN7 << AIO_MUX1_R_PIN15_BIT)
/*----------*/

#endif /* DRIVERLIB_GPIO_PERIPHERAL_REGISTERDEFINES_XHEADER_GPIO_REGISTERDEFINES_MUX1_H_ */
