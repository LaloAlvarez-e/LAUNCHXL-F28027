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
    volatile unsigned short EN: 1;
    volatile unsigned short VECT: 15;
}SYSCTL_CTRL_t;

typedef volatile struct
{
    volatile unsigned short ACK: 12;
    const unsigned short reserved1: 4;
}SYSCTL_ACK_t;

typedef volatile struct
{
    volatile unsigned short IE1: 1;
    volatile unsigned short IE2: 1;
    volatile unsigned short IE3: 1;
    volatile unsigned short IE4: 1;
    volatile unsigned short IE5: 1;
    volatile unsigned short IE6: 1;
    volatile unsigned short IE7: 1;
    volatile unsigned short IE8: 1;
    const unsigned short reserved1: 8;
}SYSCTL_IERn_t;

typedef volatile struct
{
    volatile unsigned short IE: 8;
    const unsigned short reserved1: 8;
}SYSCTL_IER_t;

typedef volatile struct
{
    volatile unsigned short ADC1_IE: 1;
    volatile unsigned short ADC2_IE: 1;
    const unsigned short reserved1: 1;
    volatile unsigned short X1_IE: 1;
    volatile unsigned short X2_IE: 1;
    volatile unsigned short ADC9_IE: 1;
    volatile unsigned short T0_IE: 1;
    volatile unsigned short WAKE_IE: 1;
    const unsigned short reserved2: 8;
}SYSCTL_IER1_t;

typedef volatile struct
{
    volatile unsigned short EPWM1_TZ_IE: 1;
    volatile unsigned short EPWM2_TZ_IE: 1;
    volatile unsigned short EPWM3_TZ_IE: 1;
    volatile unsigned short EPWM4_TZ_IE: 1;
    const unsigned short reserved1: 12;
}SYSCTL_IER2_t;

typedef volatile struct
{
    volatile unsigned short EPWM1_IE: 1;
    volatile unsigned short EPWM2_IE: 1;
    volatile unsigned short EPWM3_IE: 1;
    volatile unsigned short EPWM4_IE: 1;
    const unsigned short reserved1: 12;
}SYSCTL_IER3_t;

typedef volatile struct
{
    volatile unsigned short ECAP1_IE: 1;
    const unsigned short reserved1: 15;
}SYSCTL_IER4_t;

typedef volatile struct
{
    volatile unsigned short SW1_IE: 1;
    const unsigned short reserved1: 15;
}SYSCTL_IER5_t;

typedef volatile struct
{
    volatile unsigned short SPIA_RX_IE: 1;
    volatile unsigned short SPIA_TX_IE: 1;
    const unsigned short reserved1: 14;
}SYSCTL_IER6_t;

typedef volatile struct
{
    volatile unsigned short SW2_IE: 1;
    const unsigned short reserved1: 15;
}SYSCTL_IER7_t;

typedef volatile struct
{
    volatile unsigned short I2C1A_IE: 1;
    volatile unsigned short I2C2A_IE: 1;
    const unsigned short reserved1: 14;
}SYSCTL_IER8_t;

typedef volatile struct
{
    volatile unsigned short SCIA_RX_IE: 1;
    volatile unsigned short SCIA_TX_IE: 1;
    const unsigned short reserved1: 14;
}SYSCTL_IER9_t;

typedef volatile struct
{
    volatile unsigned short ADC1_IE: 1;
    volatile unsigned short ADC2_IE: 1;
    volatile unsigned short ADC3_IE: 1;
    volatile unsigned short ADC4_IE: 1;
    volatile unsigned short ADC5_IE: 1;
    volatile unsigned short ADC6_IE: 1;
    volatile unsigned short ADC7_IE: 1;
    volatile unsigned short ADC8_IE: 1;
    const unsigned short reserved1: 8;
}SYSCTL_IER10_t;

typedef volatile struct
{
    volatile unsigned short SW3_IE: 1;
    const unsigned short reserved1: 15;
}SYSCTL_IER11_t;

typedef volatile struct
{
    volatile unsigned short X3_IE: 1;
    const unsigned short reserved1: 15;
}SYSCTL_IER12_t;

typedef volatile struct
{
    volatile unsigned short IE1: 1;
    volatile unsigned short IE2: 1;
    volatile unsigned short IE3: 1;
    volatile unsigned short IE4: 1;
    volatile unsigned short IE5: 1;
    volatile unsigned short IE6: 1;
    volatile unsigned short IE7: 1;
    volatile unsigned short IE8: 1;
    const unsigned short reserved1: 8;
}SYSCTL_IFRn_t;

typedef volatile struct
{
    volatile unsigned short IE: 8;
    const unsigned short reserved1: 8;
}SYSCTL_IFR_t;

typedef volatile struct
{
    volatile unsigned short ADC1_IFG: 1;
    volatile unsigned short ADC2_IFG: 1;
    const unsigned short reserved1: 1;
    volatile unsigned short X1_IFG: 1;
    volatile unsigned short X2_IFG: 1;
    volatile unsigned short ADC9_IFG: 1;
    volatile unsigned short T0_IFG: 1;
    volatile unsigned short WAKE_IFG: 1;
    const unsigned short reserved2: 8;
}SYSCTL_IFR1_t;

typedef volatile struct
{
    volatile unsigned short EPWM1_TZ_IFG: 1;
    volatile unsigned short EPWM2_TZ_IFG: 1;
    volatile unsigned short EPWM3_TZ_IFG: 1;
    volatile unsigned short EPWM4_TZ_IFG: 1;
    const unsigned short reserved1: 12;
}SYSCTL_IFR2_t;

typedef volatile struct
{
    volatile unsigned short EPWM1_IFG: 1;
    volatile unsigned short EPWM2_IFG: 1;
    volatile unsigned short EPWM3_IFG: 1;
    volatile unsigned short EPWM4_IFG: 1;
    const unsigned short reserved1: 12;
}SYSCTL_IFR3_t;

typedef volatile struct
{
    volatile unsigned short ECAP1_IFG: 1;
    const unsigned short reserved1: 15;
}SYSCTL_IFR4_t;

typedef volatile struct
{
    volatile unsigned short SW1_IFG: 1;
    const unsigned short reserved1: 15;
}SYSCTL_IFR5_t;

typedef volatile struct
{
    volatile unsigned short SPIA_RX_IFG: 1;
    volatile unsigned short SPIA_TX_IFG: 1;
    const unsigned short reserved1: 14;
}SYSCTL_IFR6_t;

typedef volatile struct
{
    volatile unsigned short SW2_IFG: 1;
    const unsigned short reserved1: 15;
}SYSCTL_IFR7_t;

typedef volatile struct
{
    volatile unsigned short I2C1A_IFG: 1;
    volatile unsigned short I2C2A_IFG: 1;
    const unsigned short reserved1: 14;
}SYSCTL_IFR8_t;

typedef volatile struct
{
    volatile unsigned short SCIA_RX_IFG: 1;
    volatile unsigned short SCIA_TX_IFG: 1;
    const unsigned short reserved1: 14;
}SYSCTL_IFR9_t;

typedef volatile struct
{
    volatile unsigned short ADC1_IFG: 1;
    volatile unsigned short ADC2_IFG: 1;
    volatile unsigned short ADC3_IFG: 1;
    volatile unsigned short ADC4_IFG: 1;
    volatile unsigned short ADC5_IFG: 1;
    volatile unsigned short ADC6_IFG: 1;
    volatile unsigned short ADC7_IFG: 1;
    volatile unsigned short ADC8_IFG: 1;
    const unsigned short reserved1: 8;
}SYSCTL_IFR10_t;

typedef volatile struct
{
    volatile unsigned short SW3_IFG: 1;
    const unsigned short reserved1: 15;
}SYSCTL_IFR11_t;

typedef volatile struct
{
    volatile unsigned short X3_IFG: 1;
    const unsigned short reserved1: 15;
}SYSCTL_IFR12_t;

#endif /* DRIVERLIB_SYSCTL_PERIPHERAL_XHEADER_SYSCTL_STRUCTREGISTER_H_ */
