/**
 *
 * @file DEVICE_StructPeripheral.h
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

#ifndef DRIVERLIB_DEVICE_PERIPHERAL_XHEADER_DEVICE_STRUCTPERIPHERAL_H_
#define DRIVERLIB_DEVICE_PERIPHERAL_XHEADER_DEVICE_STRUCTPERIPHERAL_H_

#include "DriverLib/DEVICE/Peripheral/xHeader/DEVICE_StructRegister.h"

typedef volatile struct
{
    union
    {
        volatile unsigned short IER;
        DEVICE_IER_t IER_bits;
        DEVICE_IERn_t IERn_bits;
    };
    union
    {
        volatile unsigned short IFR;
        DEVICE_IFR_t IFR_bits;
        DEVICE_IFRn_t IFRn_bits;
    };
}DEVICE_GROUP_t;


typedef volatile struct
{
    union
    {
        volatile unsigned short IER1;
        DEVICE_IER1_t IER1_bits;
    };
    union
    {
        volatile unsigned short IFR1;
        DEVICE_IFR1_t IFR1_bits;
    };
    union
    {
        volatile unsigned short IER2;
        DEVICE_IER2_t IER2_bits;
    };
    union
    {
        volatile unsigned short IFR2;
        DEVICE_IFR2_t IFR2_bits;
    };
    union
    {
        volatile unsigned short IER3;
        DEVICE_IER3_t IER3_bits;
    };
    union
    {
        volatile unsigned short IFR3;
        DEVICE_IFR3_t IFR3_bits;
    };
    union
    {
        volatile unsigned short IER4;
        DEVICE_IER4_t IER4_bits;
    };
    union
    {
        volatile unsigned short IFR4;
        DEVICE_IFR4_t IFR4_bits;
    };
    union
    {
        volatile unsigned short IER5;
        DEVICE_IER5_t IER5_bits;
    };
    union
    {
        volatile unsigned short IFR5;
        DEVICE_IFR5_t IFR5_bits;
    };
    union
    {
        volatile unsigned short IER6;
        DEVICE_IER6_t IER6_bits;
    };
    union
    {
        volatile unsigned short IFR6;
        DEVICE_IFR6_t IFR6_bits;
    };
    union
    {
        volatile unsigned short IER7;
        DEVICE_IER7_t IER7_bits;
    };
    union
    {
        volatile unsigned short IFR7;
        DEVICE_IFR7_t IFR7_bits;
    };
    union
    {
        volatile unsigned short IER8;
        DEVICE_IER8_t IER8_bits;
    };
    union
    {
        volatile unsigned short IFR8;
        DEVICE_IFR8_t IFR8_bits;
    };
    union
    {
        volatile unsigned short IER9;
        DEVICE_IER9_t IER9_bits;
    };
    union
    {
        volatile unsigned short IFR9;
        DEVICE_IFR9_t IFR9_bits;
    };
    union
    {
        volatile unsigned short IER10;
        DEVICE_IER10_t IER10_bits;
    };
    union
    {
        volatile unsigned short IFR10;
        DEVICE_IFR10_t IFR10_bits;
    };
    union
    {
        volatile unsigned short IER11;
        DEVICE_IER11_t IER11_bits;
    };
    union
    {
        volatile unsigned short IFR11;
        DEVICE_IFR11_t IFR11_bits;
    };
    union
    {
        volatile unsigned short IER12;
        DEVICE_IER12_t IER12_bits;
    };
    union
    {
        volatile unsigned short IFR12;
        DEVICE_IFR12_t IFR12_bits;
    };
}DEVICE_GROUP_EXT_t;

typedef volatile struct
{
    union
    {
       volatile unsigned short CTRL;
       DEVICE_CTRL_t CTRL_bits;
    };
    union
    {
       volatile unsigned short ACK;
       DEVICE_ACK_t ACK_bits;
    };
    union
    {
        DEVICE_GROUP_t GROUP[12U];
        DEVICE_GROUP_EXT_t GROUP_EXT;
    };
}DEVICE_t;

typedef volatile struct
{
    MCU__pvfIRQVectorHandler_t RESET_IRQ;
    MCU__pvfIRQVectorHandler_t reserved1[12U];
    MCU__pvfIRQVectorHandler_t T1_IRQ;
    MCU__pvfIRQVectorHandler_t T2_IRQ;
    MCU__pvfIRQVectorHandler_t DLOG_IRQ;
    MCU__pvfIRQVectorHandler_t RTOS_IRQ;
    MCU__pvfIRQVectorHandler_t EMU_IRQ;
    MCU__pvfIRQVectorHandler_t NMI_IRQ;
    MCU__pvfIRQVectorHandler_t ILLEGAL_IRQ;
    MCU__pvfIRQVectorHandler_t USER_IRQ[12U];
    MCU__pvfIRQVectorHandler_t GROUP1_IRQ[8U];
    MCU__pvfIRQVectorHandler_t GROUP2_IRQ[8U];
    MCU__pvfIRQVectorHandler_t GROUP3_IRQ[8U];
    MCU__pvfIRQVectorHandler_t GROUP4_IRQ[8U];
    MCU__pvfIRQVectorHandler_t GROUP5_IRQ[8U];
    MCU__pvfIRQVectorHandler_t GROUP6_IRQ[8U];
    MCU__pvfIRQVectorHandler_t GROUP7_IRQ[8U];
    MCU__pvfIRQVectorHandler_t GROUP8_IRQ[8U];
    MCU__pvfIRQVectorHandler_t GROUP9_IRQ[8U];
    MCU__pvfIRQVectorHandler_t GROUP10_IRQ[8U];
    MCU__pvfIRQVectorHandler_t GROUP11_IRQ[8U];
    MCU__pvfIRQVectorHandler_t GROUP12_IRQ[8U];
}DEVICE_IRQ_t;

typedef volatile struct
{
    MCU__pvfIRQVectorHandler_t ARRAY[128U];
}DEVICE_IRQ_ARRAY_t;

typedef volatile struct
{
    MCU__pvfIRQVectorHandler_t RESET_IRQ;
    MCU__pvfIRQVectorHandler_t reserved1[12U];
    MCU__pvfIRQVectorHandler_t T1_IRQ;
    MCU__pvfIRQVectorHandler_t T2_IRQ;
    MCU__pvfIRQVectorHandler_t DLOG_IRQ;
    MCU__pvfIRQVectorHandler_t RTOS_IRQ;
    MCU__pvfIRQVectorHandler_t EMU_IRQ;
    MCU__pvfIRQVectorHandler_t NMI_IRQ;
    MCU__pvfIRQVectorHandler_t ILLEGAL_IRQ;
    MCU__pvfIRQVectorHandler_t USER_IRQ[12U];
    MCU__pvfIRQVectorHandler_t ADC1_PRI_IRQ;
    MCU__pvfIRQVectorHandler_t ADC2_PRI_IRQ;
    MCU__pvfIRQVectorHandler_t reserved2;
    MCU__pvfIRQVectorHandler_t X1_IRQ;
    MCU__pvfIRQVectorHandler_t X2_IRQ;
    MCU__pvfIRQVectorHandler_t ADC9_IRQ;
    MCU__pvfIRQVectorHandler_t T0_IRQ;
    MCU__pvfIRQVectorHandler_t WAKE_IRQ;
    MCU__pvfIRQVectorHandler_t EPWM1_TZ_IRQ;
    MCU__pvfIRQVectorHandler_t EPWM2_TZ_IRQ;
    MCU__pvfIRQVectorHandler_t EPWM3_TZ_IRQ;
    MCU__pvfIRQVectorHandler_t EPWM4_TZ_IRQ;
    MCU__pvfIRQVectorHandler_t reserved3[4U];
    MCU__pvfIRQVectorHandler_t EPWM1_IRQ;
    MCU__pvfIRQVectorHandler_t EPWM2_IRQ;
    MCU__pvfIRQVectorHandler_t EPWM3_IRQ;
    MCU__pvfIRQVectorHandler_t EPWM4_IRQ;
    MCU__pvfIRQVectorHandler_t reserved4[4U];
    MCU__pvfIRQVectorHandler_t ECAP1_IRQ;
    MCU__pvfIRQVectorHandler_t reserved5[7U];
    MCU__pvfIRQVectorHandler_t SW1_IRQ;
    MCU__pvfIRQVectorHandler_t reserved6[7U];
    MCU__pvfIRQVectorHandler_t SPIA_RX_IRQ;
    MCU__pvfIRQVectorHandler_t SPIA_TX_IRQ;
    MCU__pvfIRQVectorHandler_t reserved7[6U];
    MCU__pvfIRQVectorHandler_t SW2_IRQ;
    MCU__pvfIRQVectorHandler_t reserved8[7U];
    MCU__pvfIRQVectorHandler_t I2C1A_IRQ;
    MCU__pvfIRQVectorHandler_t I2C2A_IRQ;
    MCU__pvfIRQVectorHandler_t reserved9[6U];
    MCU__pvfIRQVectorHandler_t SCIA_RX_IRQ;
    MCU__pvfIRQVectorHandler_t SCIA_TX_IRQ;
    MCU__pvfIRQVectorHandler_t reserved10[6U];
    MCU__pvfIRQVectorHandler_t ADC1_IRQ;
    MCU__pvfIRQVectorHandler_t ADC2_IRQ;
    MCU__pvfIRQVectorHandler_t ADC3_IRQ;
    MCU__pvfIRQVectorHandler_t ADC4_IRQ;
    MCU__pvfIRQVectorHandler_t ADC5_IRQ;
    MCU__pvfIRQVectorHandler_t ADC6_IRQ;
    MCU__pvfIRQVectorHandler_t ADC7_IRQ;
    MCU__pvfIRQVectorHandler_t ADC8_IRQ;
    MCU__pvfIRQVectorHandler_t SW3_IRQ;
    MCU__pvfIRQVectorHandler_t reserved11[7U];
    MCU__pvfIRQVectorHandler_t X3_IRQ;
    MCU__pvfIRQVectorHandler_t reserved12[7U];
}DEVICE_IRQ_EXT_t;

typedef volatile struct
{
    union
    {
        DEVICE_IRQ_ARRAY_t IRQ_ARRAY;
        DEVICE_IRQ_t IRQ;
        DEVICE_IRQ_EXT_t IRQ_EXT;
    };
}DEVICE_VECTOR_t;

#endif /* DRIVERLIB_DEVICE_PERIPHERAL_XHEADER_DEVICE_STRUCTPERIPHERAL_H_ */
