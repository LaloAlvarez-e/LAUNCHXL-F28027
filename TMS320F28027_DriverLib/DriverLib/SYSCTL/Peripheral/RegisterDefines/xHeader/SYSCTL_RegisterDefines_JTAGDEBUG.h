/**
 *
 * @file SYSCTL_RegisterDefines_JTAGDEBUG.h
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

#ifndef DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_JTAGDEBUG_H_
#define DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_JTAGDEBUG_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 13 JTAGDEBUG *********************************************
 ******************************************************************************************/
/*-----------*/
#define SYSCTL_JTAGDEBUG_R_JTAGDIS_BIT ((uint16_t) 0U)

#define SYSCTL_JTAGDEBUG_JTAGDIS_MASK ((uint16_t) 0x0001U)
#define SYSCTL_JTAGDEBUG_JTAGDIS_ENA ((uint16_t) 0x0000U)
#define SYSCTL_JTAGDEBUG_JTAGDIS_DIS ((uint16_t) 0x0001U)

#define SYSCTL_JTAGDEBUG_R_JTAGDIS_MASK (SYSCTL_JTAGDEBUG_JTAGDIS_MASK<< SYSCTL_JTAGDEBUG_R_JTAGDIS_BIT)
#define SYSCTL_JTAGDEBUG_R_JTAGDIS_ENA (SYSCTL_JTAGDEBUG_JTAGDIS_ENA << SYSCTL_JTAGDEBUG_R_JTAGDIS_BIT)
#define SYSCTL_JTAGDEBUG_R_JTAGDIS_DIS (SYSCTL_JTAGDEBUG_JTAGDIS_DIS << SYSCTL_JTAGDEBUG_R_JTAGDIS_BIT)
#define SYSCTL_JTAGDEBUG_R_JTAGDIS_EXTCLK (SYSCTL_JTAGDEBUG_JTAGDIS_EXTCLK << SYSCTL_JTAGDEBUG_R_JTAGDIS_BIT)
/*-----------*/
#endif /* DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_JTAGDEBUG_H_ */
