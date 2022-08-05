/**
 *
 * @file SYSCTL_StructPeripheral.h
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

#ifndef DRIVERLIB_SYSCTL_PERIPHERAL_XHEADER_SYSCTL_STRUCTPERIPHERAL_H_
#define DRIVERLIB_SYSCTL_PERIPHERAL_XHEADER_SYSCTL_STRUCTPERIPHERAL_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_StructRegister.h"

typedef volatile struct
{
    union
    {
        volatile unsigned short XCLK;
        SYSCTL_XCLK_t XCLK_bits;
    };
    union
    {
        volatile unsigned short PLLSTS;
        SYSCTL_PLLSTS_t PLLSTS_bits;
    };
    union
    {
        volatile unsigned short CLKCTL;
        SYSCTL_CLKCTL_t CLKCTL_bits;
    };
    union
    {
        volatile unsigned short PLLLOCKPRD;
        SYSCTL_PLLLOCKPRD_t PLLLOCKPRD_bits;
    };
    union
    {
        volatile unsigned short INTOSC1TRIM;
        SYSCTL_INTOSCnTRIM_t INTOSC1TRIM_bits;
    };
    const unsigned short reserved1[1U];
    union
    {
        volatile unsigned short INTOSC2TRIM;
        SYSCTL_INTOSCnTRIM_t INTOSC2TRIM_bits;
    };
    const unsigned short reserved2[4U];
    union
    {
        volatile unsigned short LOSPCP;
        SYSCTL_LOSPCP_t LOSPCP_bits;
    };
    union
    {
        volatile unsigned short PCLKCR0;
        SYSCTL_PCLKCR0_t PCLKCR0_bits;
    };
    union
    {
        volatile unsigned short PCLKCR1;
        SYSCTL_PCLKCR1_t PCLKCR1_bits;
    };
    union
    {
        volatile unsigned short LPMCR0;
        SYSCTL_LPMCR0_t LPMCR0_bits;
    };
    const unsigned short reserved3[1U];
    union
    {
        volatile unsigned short PCLKCR3;
        SYSCTL_PCLKCR3_t PCLKCR3_bits;
    };
    union
    {
        volatile unsigned short PLLCR;
        SYSCTL_PLLCR_t PLLCR_bits;
    };
}SYSCTL_t;

#endif /* DRIVERLIB_SYSCTL_PERIPHERAL_XHEADER_SYSCTL_STRUCTPERIPHERAL_H_ */
