/**
 *
 * @file SYSCTL_RegisterAddress.h
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
 * @verbatim 27 jun. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 jun. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_SYSCTL_PERIPHERAL_XHEADER_SYSCTL_REGISTERADDRESS_H_
#define DRIVERLIB_SYSCTL_PERIPHERAL_XHEADER_SYSCTL_REGISTERADDRESS_H_

#define SYSCTL_BASE (0x7010U)

#define SYSCTL_XCLK_OFFSET (0x0000U)
#define SYSCTL_PLLSTS_OFFSET (0x0001U)
#define SYSCTL_CLKCTL_OFFSET (0x0002U)
#define SYSCTL_PLLLOCKPRD_OFFSET (0x0003U)
#define SYSCTL_INTOSC1TRIM_OFFSET (0x0004U)
#define SYSCTL_INTOSC2TRIM_OFFSET (0x0006U)
#define SYSCTL_LOSPCP_OFFSET (0x000BU)
#define SYSCTL_PCLKCR0_OFFSET (0x000CU)
#define SYSCTL_PCLKCR1_OFFSET (0x000DU)
#define SYSCTL_LPMCR0_OFFSET (0x000EU)
#define SYSCTL_PCLKCR3_OFFSET (0x0010U)
#define SYSCTL_PLLCR_OFFSET (0x0011U)
#define SYSCTL_JTAGDEBUG_OFFSET (0x001AU)

#endif /* DRIVERLIB_SYSCTL_PERIPHERAL_XHEADER_SYSCTL_REGISTERADDRESS_H_ */
