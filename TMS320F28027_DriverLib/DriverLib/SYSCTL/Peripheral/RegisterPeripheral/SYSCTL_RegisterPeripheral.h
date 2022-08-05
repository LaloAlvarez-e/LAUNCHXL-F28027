/**
 *
 * @file SYSCTL_RegisterPeripheral.h
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
 * @verbatim 22 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERPERIPHERAL_SYSCTL_REGISTERPERIPHERAL_H_
#define DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERPERIPHERAL_SYSCTL_REGISTERPERIPHERAL_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_RegisterAddress.h"
#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_StructPeripheral.h"
#include "DriverLib/MCU/xHeader/MCU_Variables.h"

#define SYSCTL ((SYSCTL_t*) SYSCTL_BASE)

/******************************************************************************************
 ************************************ 1 XCLK *********************************************
 ******************************************************************************************/
#define SYSCTL_XCLK_R   (*(volatile uint16_t*) (SYSCTL_BASE + SYSCTL_XCLK_OFFSET))
#define SYSCTL_XCLK     ((SYSCTL_XCLK_t*) (SYSCTL_BASE + SYSCTL_XCLK_OFFSET))

/******************************************************************************************
 ************************************ 2 PLLSTS *********************************************
 ******************************************************************************************/
#define SYSCTL_PLLSTS_R   (*(volatile uint16_t*) (SYSCTL_BASE + SYSCTL_PLLSTS_OFFSET))
#define SYSCTL_PLLSTS     ((SYSCTL_PLLSTS_t*) (SYSCTL_BASE + SYSCTL_PLLSTS_OFFSET))

/******************************************************************************************
 ************************************ 3 CLKCTL *********************************************
 ******************************************************************************************/
#define SYSCTL_CLKCTL_R   (*(volatile uint16_t*) (SYSCTL_BASE + SYSCTL_CLKCTL_OFFSET))
#define SYSCTL_CLKCTL     ((SYSCTL_CLKCTL_t*) (SYSCTL_BASE + SYSCTL_CLKCTL_OFFSET))

/******************************************************************************************
 ************************************ 4 PLLLOCKPRD *********************************************
 ******************************************************************************************/
#define SYSCTL_PLLLOCKPRD_R   (*(volatile uint16_t*) (SYSCTL_BASE + SYSCTL_PLLLOCKPRD_OFFSET))
#define SYSCTL_PLLLOCKPRD     ((SYSCTL_PLLLOCKPRD_t*) (SYSCTL_BASE + SYSCTL_PLLLOCKPRD_OFFSET))

/******************************************************************************************
 ************************************ 5 INTOSC1TRIM *********************************************
 ******************************************************************************************/
#define SYSCTL_INTOSC1TRIM_R   (*(volatile uint16_t*) (SYSCTL_BASE + SYSCTL_INTOSC1TRIM_OFFSET))
#define SYSCTL_INTOSC1TRIM     ((SYSCTL_INTOSC1TRIM_t*) (SYSCTL_BASE + SYSCTL_INTOSC1TRIM_OFFSET))

/******************************************************************************************
 ************************************ 6 INTOSC2TRIM *********************************************
 ******************************************************************************************/
#define SYSCTL_INTOSC2TRIM_R   (*(volatile uint16_t*) (SYSCTL_BASE + SYSCTL_INTOSC2TRIM_OFFSET))
#define SYSCTL_INTOSC2TRIM     ((SYSCTL_INTOSC2TRIM_t*) (SYSCTL_BASE + SYSCTL_INTOSC2TRIM_OFFSET))

/******************************************************************************************
 ************************************ 7 LOSPCP *********************************************
 ******************************************************************************************/
#define SYSCTL_LOSPCP_R   (*(volatile uint16_t*) (SYSCTL_BASE + SYSCTL_LOSPCP_OFFSET))
#define SYSCTL_LOSPCP     ((SYSCTL_LOSPCP_t*) (SYSCTL_BASE + SYSCTL_LOSPCP_OFFSET))

/******************************************************************************************
 ************************************ 8 PCLKCR0 *********************************************
 ******************************************************************************************/
#define SYSCTL_PCLKCR0_R   (*(volatile uint16_t*) (SYSCTL_BASE + SYSCTL_PCLKCR0_OFFSET))
#define SYSCTL_PCLKCR0     ((SYSCTL_PCLKCR0_t*) (SYSCTL_BASE + SYSCTL_PCLKCR0_OFFSET))

/******************************************************************************************
 ************************************ 9 PCLKCR1 *********************************************
 ******************************************************************************************/
#define SYSCTL_PCLKCR1_R   (*(volatile uint16_t*) (SYSCTL_BASE + SYSCTL_PCLKCR1_OFFSET))
#define SYSCTL_PCLKCR1     ((SYSCTL_PCLKCR1_t*) (SYSCTL_BASE + SYSCTL_PCLKCR1_OFFSET))

/******************************************************************************************
 ************************************ 10 LPMCR0 *********************************************
 ******************************************************************************************/
#define SYSCTL_LPMCR0_R   (*(volatile uint16_t*) (SYSCTL_BASE + SYSCTL_LPMCR0_OFFSET))
#define SYSCTL_LPMCR0     ((SYSCTL_LPMCR0_t*) (SYSCTL_BASE + SYSCTL_LPMCR0_OFFSET))

/******************************************************************************************
 ************************************ 11 PCLKCR3 *********************************************
 ******************************************************************************************/
#define SYSCTL_PCLKCR3_R   (*(volatile uint16_t*) (SYSCTL_BASE + SYSCTL_PCLKCR3_OFFSET))
#define SYSCTL_PCLKCR3     ((SYSCTL_PCLKCR3_t*) (SYSCTL_BASE + SYSCTL_PCLKCR3_OFFSET))

/******************************************************************************************
 ************************************ 12 PLLCR *********************************************
 ******************************************************************************************/
#define SYSCTL_PLLCR_R   (*(volatile uint16_t*) (SYSCTL_BASE + SYSCTL_PLLCR_OFFSET))
#define SYSCTL_PLLCR     ((SYSCTL_PLLCR_t*) (SYSCTL_BASE + SYSCTL_PLLCR_OFFSET))

uintptr_t SYSCTL__uptrBlockBaseAddress(void);

#endif /* DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERPERIPHERAL_SYSCTL_REGISTERPERIPHERAL_H_ */
