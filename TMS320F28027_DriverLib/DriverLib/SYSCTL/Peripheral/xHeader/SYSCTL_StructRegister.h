/**
 *
 * @file SYSCTL_StructRegister.h
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
 * @verbatim 26 jun. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 jun. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_SYSCTL_PERIPHERAL_XHEADER_SYSCTL_STRUCTREGISTER_H_
#define DRIVERLIB_SYSCTL_PERIPHERAL_XHEADER_SYSCTL_STRUCTREGISTER_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

typedef volatile struct
{
    volatile unsigned short HRPWMENCLK: 1;
    const unsigned short reserved1: 1;
    volatile unsigned short TBCLKSYNC: 1;
    volatile unsigned short ADCENCLK: 1;
    volatile unsigned short I2CAENCLK: 1;
    const unsigned short reserved2: 3;
    volatile unsigned short SPIAENCLK: 1;
    const unsigned short reserved3: 1;
    volatile unsigned short SCIAENCLK: 1;
    const unsigned short reserved4: 5;
}SYSCTL_PCLKCR0_t;

typedef volatile struct
{
    volatile unsigned short EPWM1ENCLK: 1;
    volatile unsigned short EPWM2ENCLK: 1;
    volatile unsigned short EPWM3ENCLK: 1;
    volatile unsigned short EPWM4ENCLK: 1;
    const unsigned short reserved1: 4;
    volatile unsigned short ECAP1ENCLK: 1;
    const unsigned short reserved2: 7;
}SYSCTL_PCLKCR1_t;

typedef volatile struct
{
    volatile unsigned short COMP1ENCLK: 1;
    volatile unsigned short COMP2ENCLK: 1;
    const unsigned short reserved1: 6;
    volatile unsigned short CPUTIMER0ENCLK: 1;
    volatile unsigned short CPUTIMER1ENCLK: 1;
    volatile unsigned short CPUTIMER2ENCLK: 1;
    const unsigned short reserved2: 2;
    volatile unsigned short GPIOINENCLK: 1;
    const unsigned short reserved3: 2;
}SYSCTL_PCLKCR3_t;

typedef volatile struct
{
    volatile unsigned short LSPCLK: 3;
    const unsigned short reserved1: 13;
}SYSCTL_LOSPCP_t;

typedef volatile struct
{
    volatile unsigned short COARSETRIM: 8;
    const unsigned short reserved1: 1;
    volatile unsigned short FINETRIM: 6;
    const unsigned short reserved2: 1;
}SYSCTL_INTOSCnTRIM_t;

typedef volatile struct
{
    volatile unsigned short XCLKOUTDIV: 2;
    const unsigned short reserved1: 4;
    volatile unsigned short XCLKINSEL: 1;
    const unsigned short reserved2: 9;
}SYSCTL_XCLK_t;

typedef volatile struct
{
    volatile unsigned short OSCCLKSRCSEL: 1;
    volatile unsigned short OSCCLKSRC2SEL: 1;
    volatile unsigned short WDCLKSRCSEL: 1;
    volatile unsigned short TMR2CLKSRCSEL: 2;
    volatile unsigned short TMR2CLKPRESCALE: 3;
    volatile unsigned short INTOSC1OFF: 1;
    volatile unsigned short INTOSC1HALTI: 1;
    volatile unsigned short INTOSC2OFF: 1;
    volatile unsigned short INTOSC2HALTI: 1;
    volatile unsigned short WDHALTI: 1;
    volatile unsigned short XCLKINOFF: 1;
    volatile unsigned short XTALOSCOFF: 1;
    volatile unsigned short NMIRESETSEL: 1;
}SYSCTL_CLKCTL_t;

typedef volatile struct
{
    volatile unsigned short DIV: 4;
    const unsigned short reserved1: 12;
}SYSCTL_PLLCR_t;

typedef volatile struct
{
    volatile const unsigned short PLLLOCKS: 1;
    const unsigned short reserved1: 1;
    volatile unsigned short PLLOFF: 1;
    volatile const unsigned short MCLKSTS: 1;
    volatile unsigned short MCLKCLR: 1;
    volatile unsigned short OSCOFF: 1;
    volatile unsigned short MCLKOFF: 1;
    volatile unsigned short DIVSEL: 2;
    const unsigned short reserved2: 6;
    volatile unsigned short NORMRDYE: 1;
}SYSCTL_PLLSTS_t;

typedef volatile struct
{
    volatile unsigned short PLLLOCKPRD: 16;
}SYSCTL_PLLLOCKPRD_t;

typedef volatile struct
{
    volatile unsigned short LPM: 2;
    volatile unsigned short QUALSTDBY: 6;
    const unsigned short reserved1: 7;
    volatile unsigned short WDINTE: 1;
}SYSCTL_LPMCR0_t;





#endif /* DRIVERLIB_SYSCTL_PERIPHERAL_XHEADER_SYSCTL_STRUCTREGISTER_H_ */
