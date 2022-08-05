/**
 *
 * @file SYSCTL_RegisterDefines_LOSPCP.h
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

#ifndef DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_LOSPCP_H_
#define DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_LOSPCP_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 6 LOSPCP *********************************************
 ******************************************************************************************/
/*-----------*/
#define SYSCTL_LOSPCP_R_LSPCLK_BIT ((uint16_t) 0U)

#define SYSCTL_LOSPCP_LSPCLK_MASK ((uint16_t) 0x0007U)
#define SYSCTL_LOSPCP_LSPCLK_DIV1 ((uint16_t) 0x0000U)
#define SYSCTL_LOSPCP_LSPCLK_DIV2 ((uint16_t) 0x0001U)
#define SYSCTL_LOSPCP_LSPCLK_DIV4 ((uint16_t) 0x0002U)
#define SYSCTL_LOSPCP_LSPCLK_DIV6 ((uint16_t) 0x0003U)
#define SYSCTL_LOSPCP_LSPCLK_DIV8 ((uint16_t) 0x0004U)
#define SYSCTL_LOSPCP_LSPCLK_DIV10 ((uint16_t) 0x0005U)
#define SYSCTL_LOSPCP_LSPCLK_DIV12 ((uint16_t) 0x0006U)
#define SYSCTL_LOSPCP_LSPCLK_DIV14 ((uint16_t) 0x0007U)

#define SYSCTL_LOSPCP_R_LSPCLK_MASK (SYSCTL_LOSPCP_LSPCLK_MASK<< SYSCTL_LOSPCP_R_LSPCLK_BIT)
#define SYSCTL_LOSPCP_R_LSPCLK_DIV1 (SYSCTL_LOSPCP_LSPCLK_DIV1 << SYSCTL_LOSPCP_R_LSPCLK_BIT)
#define SYSCTL_LOSPCP_R_LSPCLK_DIV2 (SYSCTL_LOSPCP_LSPCLK_DIV2 << SYSCTL_LOSPCP_R_LSPCLK_BIT)
#define SYSCTL_LOSPCP_R_LSPCLK_DIV4 (SYSCTL_LOSPCP_LSPCLK_DIV4 << SYSCTL_LOSPCP_R_LSPCLK_BIT)
#define SYSCTL_LOSPCP_R_LSPCLK_DIV6 (SYSCTL_LOSPCP_LSPCLK_DIV6 << SYSCTL_LOSPCP_R_LSPCLK_BIT)
#define SYSCTL_LOSPCP_R_LSPCLK_DIV8 (SYSCTL_LOSPCP_LSPCLK_DIV8 << SYSCTL_LOSPCP_R_LSPCLK_BIT)
#define SYSCTL_LOSPCP_R_LSPCLK_DIV10 (SYSCTL_LOSPCP_LSPCLK_DIV10 << SYSCTL_LOSPCP_R_LSPCLK_BIT)
#define SYSCTL_LOSPCP_R_LSPCLK_DIV12 (SYSCTL_LOSPCP_LSPCLK_DIV12 << SYSCTL_LOSPCP_R_LSPCLK_BIT)
#define SYSCTL_LOSPCP_R_LSPCLK_DIV14 (SYSCTL_LOSPCP_LSPCLK_DIV14 << SYSCTL_LOSPCP_R_LSPCLK_BIT)
/*-----------*/



#endif /* DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_LOSPCP_H_ */
