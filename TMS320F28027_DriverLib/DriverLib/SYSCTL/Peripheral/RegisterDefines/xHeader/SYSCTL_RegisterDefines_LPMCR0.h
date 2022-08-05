/**
 *
 * @file SYSCTL_RegisterDefines_LPMCR0.h
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

#ifndef DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_LPMCR0_H_
#define DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_LPMCR0_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 9 LPMCR0 *********************************************
 ******************************************************************************************/
/*-----------*/
#define SYSCTL_LPMCR0_R_LPM_BIT ((uint16_t) 0U)

#define SYSCTL_LPMCR0_LPM_MASK ((uint16_t) 0x0003U)
#define SYSCTL_LPMCR0_LPM_IDLE ((uint16_t) 0x0000U)
#define SYSCTL_LPMCR0_LPM_STANDBY ((uint16_t) 0x0001U)
#define SYSCTL_LPMCR0_LPM_HALT ((uint16_t) 0x0002U)

#define SYSCTL_LPMCR0_R_LPM_MASK (SYSCTL_LPMCR0_LPM_MASK<< SYSCTL_LPMCR0_R_LPM_BIT)
#define SYSCTL_LPMCR0_R_LPM_IDLE (SYSCTL_LPMCR0_LPM_IDLE << SYSCTL_LPMCR0_R_LPM_BIT)
#define SYSCTL_LPMCR0_R_LPM_STANDBY (SYSCTL_LPMCR0_LPM_STANDBY << SYSCTL_LPMCR0_R_LPM_BIT)
#define SYSCTL_LPMCR0_R_LPM_HALT (SYSCTL_LPMCR0_LPM_HALT << SYSCTL_LPMCR0_R_LPM_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_LPMCR0_R_QUALSTDBY_BIT ((uint16_t) 2U)

#define SYSCTL_LPMCR0_QUALSTDBY_MASK ((uint16_t) 0x003FU)

#define SYSCTL_LPMCR0_R_QUALSTDBY_MASK (SYSCTL_LPMCR0_QUALSTDBY_MASK<< SYSCTL_LPMCR0_R_QUALSTDBY_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_LPMCR0_R_WDINTE_BIT ((uint16_t) 15U)

#define SYSCTL_LPMCR0_WDINTE_MASK ((uint16_t) 0x0001U)
#define SYSCTL_LPMCR0_WDINTE_DIS ((uint16_t) 0x0000U)
#define SYSCTL_LPMCR0_WDINTE_ENA ((uint16_t) 0x0001U)

#define SYSCTL_LPMCR0_R_WDINTE_MASK (SYSCTL_LPMCR0_WDINTE_MASK<< SYSCTL_LPMCR0_R_WDINTE_BIT)
#define SYSCTL_LPMCR0_R_WDINTE_DIS (SYSCTL_LPMCR0_WDINTE_DIS << SYSCTL_LPMCR0_R_WDINTE_BIT)
#define SYSCTL_LPMCR0_R_WDINTE_ENA (SYSCTL_LPMCR0_WDINTE_ENA << SYSCTL_LPMCR0_R_WDINTE_BIT)
/*-----------*/

#endif /* DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_LPMCR0_H_ */
