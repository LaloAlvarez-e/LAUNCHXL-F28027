/**
 *
 * @file SYSCTL_RegisterDefines_PLLCR.h
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
 * @verbatim 4 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PLLCR_H_
#define DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PLLCR_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 11 PLLCR *********************************************
 ******************************************************************************************/
/*-----------*/
#define SYSCTL_PLLCR_R_DIV_BIT ((uint16_t) 0U)

#define SYSCTL_PLLCR_DIV_MASK ((uint16_t) 0x000FU)

#define SYSCTL_PLLCR_R_DIV_MASK (SYSCTL_PLLCR_DIV_MASK<< SYSCTL_PLLCR_R_DIV_BIT)
/*-----------*/

#endif /* DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PLLCR_H_ */
