/**
 *
 * @file FLASH_StructPeripheral.h
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

#ifndef DRIVERLIB_FLASH_PERIPHERAL_XHEADER_FLASH_STRUCTPERIPHERAL_H_
#define DRIVERLIB_FLASH_PERIPHERAL_XHEADER_FLASH_STRUCTPERIPHERAL_H_

#include "DriverLib/FLASH/Peripheral/xHeader/FLASH_StructRegister.h"

typedef volatile struct
{
    union
    {
        volatile unsigned short IER;
        FLASH_IER_t IER_bits;
        FLASH_IERn_t IERn_bits;
    };
    union
    {
        volatile unsigned short IFR;
        FLASH_IFR_t IFR_bits;
        FLASH_IFRn_t IFRn_bits;
    };
}FLASH_GROUP_t;


typedef volatile struct
{
    union
    {
        volatile unsigned short IER1;
        FLASH_IER1_t IER1_bits;
    };
    union
    {
        volatile unsigned short IFR1;
        FLASH_IFR1_t IFR1_bits;
    };
    union
    {
        volatile unsigned short IER2;
        FLASH_IER2_t IER2_bits;
    };
    union
    {
        volatile unsigned short IFR2;
        FLASH_IFR2_t IFR2_bits;
    };
    union
    {
        volatile unsigned short IER3;
        FLASH_IER3_t IER3_bits;
    };
    union
    {
        volatile unsigned short IFR3;
        FLASH_IFR3_t IFR3_bits;
    };
    union
    {
        volatile unsigned short IER4;
        FLASH_IER4_t IER4_bits;
    };
    union
    {
        volatile unsigned short IFR4;
        FLASH_IFR4_t IFR4_bits;
    };
    union
    {
        volatile unsigned short IER5;
        FLASH_IER5_t IER5_bits;
    };
    union
    {
        volatile unsigned short IFR5;
        FLASH_IFR5_t IFR5_bits;
    };
    union
    {
        volatile unsigned short IER6;
        FLASH_IER6_t IER6_bits;
    };
    union
    {
        volatile unsigned short IFR6;
        FLASH_IFR6_t IFR6_bits;
    };
    union
    {
        volatile unsigned short IER7;
        FLASH_IER7_t IER7_bits;
    };
    union
    {
        volatile unsigned short IFR7;
        FLASH_IFR7_t IFR7_bits;
    };
    union
    {
        volatile unsigned short IER8;
        FLASH_IER8_t IER8_bits;
    };
    union
    {
        volatile unsigned short IFR8;
        FLASH_IFR8_t IFR8_bits;
    };
    union
    {
        volatile unsigned short IER9;
        FLASH_IER9_t IER9_bits;
    };
    union
    {
        volatile unsigned short IFR9;
        FLASH_IFR9_t IFR9_bits;
    };
    union
    {
        volatile unsigned short IER10;
        FLASH_IER10_t IER10_bits;
    };
    union
    {
        volatile unsigned short IFR10;
        FLASH_IFR10_t IFR10_bits;
    };
    union
    {
        volatile unsigned short IER11;
        FLASH_IER11_t IER11_bits;
    };
    union
    {
        volatile unsigned short IFR11;
        FLASH_IFR11_t IFR11_bits;
    };
    union
    {
        volatile unsigned short IER12;
        FLASH_IER12_t IER12_bits;
    };
    union
    {
        volatile unsigned short IFR12;
        FLASH_IFR12_t IFR12_bits;
    };
}FLASH_GROUP_EXT_t;

typedef volatile struct
{
    union
    {
       volatile unsigned short CTRL;
       FLASH_CTRL_t CTRL_bits;
    };
    union
    {
       volatile unsigned short ACK;
       FLASH_ACK_t ACK_bits;
    };
    union
    {
        FLASH_GROUP_t GROUP[12U];
        FLASH_GROUP_EXT_t GROUP_EXT;
    };
}FLASH_t;

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
}FLASH_IRQ_t;

typedef volatile struct
{
    MCU__pvfIRQVectorHandler_t ARRAY[128U];
}FLASH_IRQ_ARRAY_t;

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
}FLASH_IRQ_EXT_t;

typedef volatile struct
{
    union
    {
        FLASH_IRQ_ARRAY_t IRQ_ARRAY;
        FLASH_IRQ_t IRQ;
        FLASH_IRQ_EXT_t IRQ_EXT;
    };
}FLASH_VECTOR_t;

#endif /* DRIVERLIB_FLASH_PERIPHERAL_XHEADER_FLASH_STRUCTPERIPHERAL_H_ */
