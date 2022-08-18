/**
 *
 * @file GPIO_RegisterDefines_CTRL.h
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

#ifndef DRIVERLIB_GPIO_PERIPHERAL_REGISTERDEFINES_XHEADER_GPIO_REGISTERDEFINES_CTRL_H_
#define DRIVERLIB_GPIO_PERIPHERAL_REGISTERDEFINES_XHEADER_GPIO_REGISTERDEFINES_CTRL_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 1 CTRL *********************************************
 ******************************************************************************************/
/*----------*/
#define GPIO_CTRL_R_QUALPRD0_BIT    (0UL)

#define GPIO_CTRL_R_QUALPRD0_MASK    ((uint32_t) 0x000000FFUL)

#define GPIO_CTRL_QUALPRD0_MASK    (GPIO_CTRL_R_QUALPRD0_MASK<< GPIO_CTRL_R_QUALPRD0_BIT)
/*----------*/

/*----------*/
#define GPIO_CTRL_R_QUALPRD1_BIT    (8UL)

#define GPIO_CTRL_R_QUALPRD1_MASK    ((uint32_t) 0x000000FFUL)

#define GPIO_CTRL_QUALPRD1_MASK    (GPIO_CTRL_R_QUALPRD1_MASK<< GPIO_CTRL_R_QUALPRD1_BIT)
/*----------*/

/*----------*/
#define GPIO_CTRL_R_QUALPRD2_BIT    (16UL)

#define GPIO_CTRL_R_QUALPRD2_MASK    ((uint32_t) 0x000000FFUL)

#define GPIO_CTRL_QUALPRD2_MASK    (GPIO_CTRL_R_QUALPRD2_MASK<< GPIO_CTRL_R_QUALPRD2_BIT)
/*----------*/

/*----------*/
#define GPIO_CTRL_R_QUALPRD3_BIT    (24UL)

#define GPIO_CTRL_R_QUALPRD3_MASK    ((uint32_t) 0x000000FFUL)

#define GPIO_CTRL_QUALPRD3_MASK    (GPIO_CTRL_R_QUALPRD3_MASK<< GPIO_CTRL_R_QUALPRD3_BIT)
/*----------*/

#endif /* DRIVERLIB_GPIO_PERIPHERAL_REGISTERDEFINES_XHEADER_GPIO_REGISTERDEFINES_CTRL_H_ */
