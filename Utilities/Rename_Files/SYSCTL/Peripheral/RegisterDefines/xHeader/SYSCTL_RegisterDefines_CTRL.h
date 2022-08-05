/**
 *
 * @file SYSCTL_RegisterDefines_CTRL.h
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
 * @verbatim 13 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_EN_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_CTRL_H_
#define DRIVERLIB_EN_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_CTRL_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 1 SYSCTLCTRL *********************************************
 ******************************************************************************************/
/*-----------*/
#define SYSCTL_CTRL_R_EN_BIT ((uint16_t) 0U)

#define SYSCTL_CTRL_EN_MASK ((uint16_t) 0x01U)
#define SYSCTL_CTRL_EN_DIS ((uint16_t) 0x00U)
#define SYSCTL_CTRL_EN_ENA ((uint16_t) 0x01U)

#define SYSCTL_CTRL_R_EN_MASK (SYSCTL_CTRL_EN_MASK<< SYSCTL_CTRL_R_EN_BIT)
#define SYSCTL_CTRL_R_EN_DIS (SYSCTL_CTRL_EN_DIS << SYSCTL_CTRL_R_EN_BIT)
#define SYSCTL_CTRL_R_EN_ENA (SYSCTL_CTRL_EN_ENA << SYSCTL_CTRL_R_EN_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_CTRL_R_VECT_BIT ((uint16_t) 0U)

#define SYSCTL_CTRL_VECT_MASK ((uint16_t) 0xFFFEU)

#define SYSCTL_CTRL_R_VECT_MASK (SYSCTL_CTRL_VECT_MASK<< SYSCTL_CTRL_R_VECT_BIT)
/*-----------*/


#endif /* DRIVERLIB_EN_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_CTRL_H_ */
