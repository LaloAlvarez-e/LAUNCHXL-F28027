/**
 *
 * @file SYSCTL_RegisterDefines_XCLK.h
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

#ifndef DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_XCLK_H_
#define DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_XCLK_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 1 XCLK *********************************************
 ******************************************************************************************/
/*-----------*/
#define SYSCTL_XCLK_R_XCLKOUTDIV_BIT ((uint16_t) 0U)

#define SYSCTL_XCLK_XCLKOUTDIV_MASK ((uint16_t) 0x0003U)
#define SYSCTL_XCLK_XCLKOUTDIV_SYSCLKOUT_4 ((uint16_t) 0x0000U)
#define SYSCTL_XCLK_XCLKOUTDIV_SYSCLKOUT_2 ((uint16_t) 0x0001U)
#define SYSCTL_XCLK_XCLKOUTDIV_SYSCLKOUT ((uint16_t) 0x0002U)
#define SYSCTL_XCLK_XCLKOUTDIV_OFF ((uint16_t) 0x0003U)

#define SYSCTL_XCLK_R_XCLKOUTDIV_MASK (SYSCTL_XCLK_XCLKOUTDIV_MASK<< SYSCTL_XCLK_R_XCLKOUTDIV_BIT)
#define SYSCTL_XCLK_R_XCLKOUTDIV_SYSCLKOUT_4 (SYSCTL_XCLK_XCLKOUTDIV_SYSCLKOUT_4 << SYSCTL_XCLK_R_XCLKOUTDIV_BIT)
#define SYSCTL_XCLK_R_XCLKOUTDIV_SYSCLKOUT_2 (SYSCTL_XCLK_XCLKOUTDIV_SYSCLKOUT_2 << SYSCTL_XCLK_R_XCLKOUTDIV_BIT)
#define SYSCTL_XCLK_R_XCLKOUTDIV_SYSCLKOUT (SYSCTL_XCLK_XCLKOUTDIV_SYSCLKOUT << SYSCTL_XCLK_R_XCLKOUTDIV_BIT)
#define SYSCTL_XCLK_R_XCLKOUTDIV_OFF (SYSCTL_XCLK_XCLKOUTDIV_OFF << SYSCTL_XCLK_R_XCLKOUTDIV_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_XCLK_R_XCLKINSEL_BIT ((uint16_t) 6U)

#define SYSCTL_XCLK_XCLKINSEL_MASK ((uint16_t) 0x0001U)
#define SYSCTL_XCLK_XCLKINSEL_GPIO38 ((uint16_t) 0x0000U)
#define SYSCTL_XCLK_XCLKINSEL_GPIO19 ((uint16_t) 0x0001U)

#define SYSCTL_XCLK_R_XCLKINSEL_MASK (SYSCTL_XCLK_XCLKINSEL_MASK<< SYSCTL_XCLK_R_XCLKINSEL_BIT)
#define SYSCTL_XCLK_R_XCLKINSEL_GPIO38 (SYSCTL_XCLK_XCLKINSEL_GPIO38 << SYSCTL_XCLK_R_XCLKINSEL_BIT)
#define SYSCTL_XCLK_R_XCLKINSEL_GPIO19 (SYSCTL_XCLK_XCLKINSEL_GPIO19 << SYSCTL_XCLK_R_XCLKINSEL_BIT)
/*-----------*/

#endif /* DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_XCLK_H_ */
