/**
 *
 * @file GPIO_Enum.h
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
 * @verbatim 17 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_GPIO_PERIPHERAL_XHEADER_GPIO_ENUM_H_
#define DRIVERLIB_GPIO_PERIPHERAL_XHEADER_GPIO_ENUM_H_

#include "DriverLib/MCU/xHeader/MCU_Enum.h"

typedef enum
{
    GPIO_enERROR_OK = 0UL,
    GPIO_enERROR_POINTER = 1U,
    GPIO_enERROR_VALUE = 2U,
    GPIO_enERROR_ARG = 3U,
    GPIO_enERROR_UNDEFINED = 0xFFFFUL,
}GPIO_nERROR;

typedef enum
{
    GPIO_enPORT_A = 0UL,
    GPIO_enPORT_B = 1UL,
    GPIO_enPORT_RESERVED = 2UL,
    GPIO_enPORT_AIO = 3UL,
    GPIO_enPORT_MAX = 4UL,
}GPIO_nPORT;

typedef enum
{
    GPIO_enSYNC_SYSCLK = 0UL,
    GPIO_enSYNC_2SAMPLES = 1UL,
    GPIO_enSYNC_5SAMPLES = 2UL,
    GPIO_enSYNC_ASYNC = 3UL,
    GPIO_enSYNC_MAX = 3UL,
}GPIO_nSYNC;

typedef enum
{
    GPIO_enDIR_INPUT = 0UL,
    GPIO_enDIR_OUTPUT = 1UL,
    GPIO_enDIR_MAX = 2UL,
}GPIO_nDIR;

typedef enum
{
    GPIO_enVALUE_LOW = 0UL,
    GPIO_enVALUE_HIGH = 1UL,
    GPIO_enVALUE_MAX = 2UL,
}GPIO_nVALUE;

typedef enum
{
    GPIO_enRESISTOR_PULLUP = 0UL,
    GPIO_enRESISTOR_NONE = 1UL,
    GPIO_enRESISTOR_MAX = 2UL,
}GPIO_nRESISTOR;

typedef enum
{
    GPIO_enFUNCTION_GPIO = 0UL,
    GPIO_enFUNCTION_PERIPHERAL1 = 1UL,
    GPIO_enFUNCTION_PERIPHERAL2 = 2UL,
    GPIO_enFUNCTION_PERIPHERAL3 = 3UL,
    GPIO_enFUNCTION_MAX = 4UL,
}GPIO_nFUNCTION;


typedef enum

{
    GPIO_enPIN_NONE = 0x0UL,
    GPIO_enPIN_0   = 0x00000001UL,
    GPIO_enPIN_1   = 0x00000002UL,
    GPIO_enPIN_2   = 0x00000004UL,
    GPIO_enPIN_3   = 0x00000008UL,
    GPIO_enPIN_4   = 0x00000010UL,
    GPIO_enPIN_5   = 0x00000020UL,
    GPIO_enPIN_6   = 0x00000040UL,
    GPIO_enPIN_7   = 0x00000080UL,
    GPIO_enPIN_8   = 0x00000100UL,
    GPIO_enPIN_9   = 0x00000200UL,
    GPIO_enPIN_10  = 0x00000400UL,
    GPIO_enPIN_11  = 0x00000800UL,
    GPIO_enPIN_12  = 0x00001000UL,
    GPIO_enPIN_13  = 0x00002000UL,
    GPIO_enPIN_14  = 0x00004000UL,
    GPIO_enPIN_15  = 0x00008000UL,
    GPIO_enPIN_16  = 0x00010000UL,
    GPIO_enPIN_17  = 0x00020000UL,
    GPIO_enPIN_18  = 0x00040000UL,
    GPIO_enPIN_19  = 0x00080000UL,
    GPIO_enPIN_20  = 0x00100000UL,
    GPIO_enPIN_21  = 0x00200000UL,
    GPIO_enPIN_22  = 0x00400000UL,
    GPIO_enPIN_23  = 0x00800000UL,
    GPIO_enPIN_24  = 0x01000000UL,
    GPIO_enPIN_25  = 0x02000000UL,
    GPIO_enPIN_26  = 0x04000000UL,
    GPIO_enPIN_27  = 0x08000000UL,
    GPIO_enPIN_28  = 0x10000000UL,
    GPIO_enPIN_29  = 0x20000000UL,
    GPIO_enPIN_30  = 0x40000000UL,
    GPIO_enPIN_31  = 0x80000000UL,
    GPIO_enPIN_ALL = 0xFFFFFFFFUL,
    GPIO_enPIN_UNDEF = 0xFFFFFFFFUL,
} GPIO_nPIN;

typedef enum
{
    GPIO_enPIN_NUMBER_0 = 0U,
    GPIO_enPIN_NUMBER_1 = 1U,
    GPIO_enPIN_NUMBER_2 = 2U,
    GPIO_enPIN_NUMBER_3 = 3U,
    GPIO_enPIN_NUMBER_4 = 4U,
    GPIO_enPIN_NUMBER_5 = 5U,
    GPIO_enPIN_NUMBER_6 = 6U,
    GPIO_enPIN_NUMBER_7 = 7U,
    GPIO_enPIN_NUMBER_8 = 8U,
    GPIO_enPIN_NUMBER_9 = 9U,
    GPIO_enPIN_NUMBER_10 = 10U,
    GPIO_enPIN_NUMBER_11 = 11U,
    GPIO_enPIN_NUMBER_12 = 12U,
    GPIO_enPIN_NUMBER_13 = 13U,
    GPIO_enPIN_NUMBER_14 = 14U,
    GPIO_enPIN_NUMBER_15 = 15U,
    GPIO_enPIN_NUMBER_16 = 16U,
    GPIO_enPIN_NUMBER_17 = 17U,
    GPIO_enPIN_NUMBER_18 = 18U,
    GPIO_enPIN_NUMBER_19 = 19U,
    GPIO_enPIN_NUMBER_20 = 20U,
    GPIO_enPIN_NUMBER_21 = 21U,
    GPIO_enPIN_NUMBER_22 = 22U,
    GPIO_enPIN_NUMBER_23 = 23U,
    GPIO_enPIN_NUMBER_24 = 24U,
    GPIO_enPIN_NUMBER_25 = 25U,
    GPIO_enPIN_NUMBER_26 = 26U,
    GPIO_enPIN_NUMBER_27 = 27U,
    GPIO_enPIN_NUMBER_28 = 28U,
    GPIO_enPIN_NUMBER_29 = 29U,
    GPIO_enPIN_NUMBER_30 = 30U,
    GPIO_enPIN_NUMBER_31 = 31U,
    GPIO_enPIN_NUMBER_MAX = 32U,
}GPIO_nPIN_NUMBER;


/*PORT PIN VALUE*/
typedef enum
{
    /*GPIOA*/
    GPIO_enGPIOA0 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_0 << 8UL) | (0UL)),
    GPIO_enEPWM1_OUTA_PA0 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_0 << 8UL) | (1UL)),

    GPIO_enGPIOA1 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_1 << 8UL) | (0UL)),
    GPIO_enEPWM1_OUTB_PA1 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_1 << 8UL) | (1UL)),
    GPIO_enCOMP1_OUT_PA1 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_1 << 8UL) | (3UL)),

    GPIO_enGPIOA2 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_2 << 8UL) | (0UL)),
    GPIO_enEPWM2_OUTA_PA2 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_2 << 8UL) | (1UL)),

    GPIO_enGPIOA3 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_3 << 8UL) | (0UL)),
    GPIO_enEPWM2_OUTB_PA3 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_3 << 8UL) | (1UL)),
    GPIO_enCOMP2_OUT_PA3 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_3 << 8UL) | (3UL)),

    GPIO_enGPIOA4 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_4 << 8UL) | (0UL)),
    GPIO_enEPWM3_OUTA_PA4 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_4 << 8UL) | (1UL)),

    GPIO_enGPIOA5 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_5 << 8UL) | (0UL)),
    GPIO_enEPWM3_OUTB_PA5 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_5 << 8UL) | (1UL)),
    GPIO_enECAP1_PA5 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_5 << 8UL) | (3UL)),

    GPIO_enGPIOA6 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_6 << 8UL) | (0UL)),
    GPIO_enEPWM4_OUTA_PA6 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_6 << 8UL) | (1UL)),
    GPIO_enEPWM_SYNCIN_PA6 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_6 << 8UL) | (2UL)),
    GPIO_enEPWM_SYNCOUT_PA6 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_6 << 8UL) | (3UL)),

    GPIO_enGPIOA7 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_7 << 8UL) | (0UL)),
    GPIO_enEPWM4_OUTB_PA7 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_7 << 8UL) | (1UL)),
    GPIO_enSCIA_RX_PA7 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_7 << 8UL) | (2UL)),

    GPIO_enGPIOA12 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_12 << 8UL) | (0UL)),
    GPIO_enEPWM1_TZ_PA12 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_12 << 8UL) | (1UL)),
    GPIO_enSCIA_TX_PA12 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_12 << 8UL) | (2UL)),

    GPIO_enGPIOA16 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_16 << 8UL) | (0UL)),
    GPIO_enSPIA_MOSI_PA16 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_16 << 8UL) | (1UL)),
    GPIO_enEPWM2_TZ_PA16 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_16 << 8UL) | (3UL)),

    GPIO_enGPIOA17 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_17 << 8UL) | (0UL)),
    GPIO_enSPIA_MISO_PA17 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_17 << 8UL) | (1UL)),
    GPIO_enEPWM3_TZ_PA17 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_17 << 8UL) | (3UL)),

    GPIO_enGPIOA18 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_18 << 8UL) | (0UL)),
    GPIO_enSPIA_CLK_PA18 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_18 << 8UL) | (1UL)),
    GPIO_enSCIA_TX_PA18 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_18 << 8UL) | (2UL)),
    GPIO_enXCLK_OUT_PA18 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_18 << 8UL) | (3UL)),

    GPIO_enGPIOA19 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_19 << 8UL) | (0UL)),
    GPIO_enSPIA_STE_PA19 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_19 << 8UL) | (1UL)),
    GPIO_enSCIA_RX_PA19 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_19 << 8UL) | (2UL)),
    GPIO_enECAP1_PA19 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_19 << 8UL) | (3UL)),

    GPIO_enGPIOA28 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_28 << 8UL) | (0UL)),
    GPIO_enSCIA_RX_PA28 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_28 << 8UL) | (1UL)),
    GPIO_enI2C1A_SDA_PA28 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_28 << 8UL) | (2UL)),
    GPIO_enEPWM2_TZ_PA28 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_28 << 8UL) | (3UL)),

    GPIO_enGPIOA29 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_29 << 8UL) | (0UL)),
    GPIO_enSCIA_TX_PA29 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_29 << 8UL) | (1UL)),
    GPIO_enI2C1A_SCL_PA29 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_29 << 8UL) | (2UL)),
    GPIO_enEPWM3_TZ_PA29 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_29 << 8UL) | (3UL)),

    /*GPIOB*/
    GPIO_enGPIOB0 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_0 << 8UL) | (0UL)),
    GPIO_enI2C1A_SDA_PB0 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_0 << 8UL) | (1UL)),
    GPIO_enEPWM_SYNCIN_PB0 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_0 << 8UL) | (2UL)),
    GPIO_enADCA_SOC_OUT_PB0 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_0 << 8UL) | (3UL)),

    GPIO_enGPIOB1 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_1 << 8UL) | (0UL)),
    GPIO_enI2C1A_SCL_PB1 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_1 << 8UL) | (1UL)),
    GPIO_enEPWM_SYNCOUT_PB1 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_1 << 8UL) | (2UL)),
    GPIO_enADCB_SOC_OUT_PB1 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_1 << 8UL) | (3UL)),

    GPIO_enGPIOB2 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_2 << 8UL) | (0UL)),
    GPIO_enCOMP2_OUT_PB2 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_2 << 8UL) | (1UL)),

    GPIO_enGPIOB3 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_3 << 8UL) | (0UL)),

    GPIO_enGPIOB4 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_4 << 8UL) | (0UL)),

    GPIO_enGPIOB5 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_5 << 8UL) | (0UL)),

    GPIO_enGPIOB6 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_6 << 8UL) | (0UL)),

    /*AIO*/
    GPIO_enADCA_IN0 = (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_0 << 8UL) | (0UL)),

    GPIO_enADCA_IN1 = (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_1 << 8UL) | (0UL)),

    GPIO_enAIO2 = (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_2 << 8UL) | (0UL)),
    GPIO_enADCA_IN2 = (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_2 << 8UL) | (2UL)),
    GPIO_enCOMP1_A= (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_2 << 8UL) | (3UL)),

    GPIO_enADCA_IN3 = (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_3 << 8UL) | (0UL)),

    GPIO_enAIO4 = (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_4 << 8UL) | (0UL)),
    GPIO_enADCA_IN4 = (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_4 << 8UL) | (2UL)),
    GPIO_enCOMP2_A= (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_4 << 8UL) | (3UL)),

    GPIO_enAIO6 = (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_6 << 8UL) | (0UL)),
    GPIO_enADCA_IN6 = (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_6 << 8UL) | (2UL)),

    GPIO_enADCA_IN7 = (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_7 << 8UL) | (0UL)),

    GPIO_enADCB_IN1 = (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_9 << 8UL) | (0UL)),

    GPIO_enAIO10 = (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_10 << 8UL) | (0UL)),
    GPIO_enADCB_IN2 = (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_10 << 8UL) | (2UL)),
    GPIO_enCOMP1_B= (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_10 << 8UL) | (3UL)),

    GPIO_enADCB_IN3 = (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_11 << 8UL) | (0UL)),

    GPIO_enAIO12 = (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_12 << 8UL) | (0UL)),
    GPIO_enADCB_IN4 = (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_12 << 8UL) | (2UL)),
    GPIO_enCOMP2_B= (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_12 << 8UL) | (3UL)),

    GPIO_enAIO14 = (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_14 << 8UL) | (0UL)),
    GPIO_enADCB_IN6 = (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_14 << 8UL) | (2UL)),

    GPIO_enADCB_IN7 = (uint32_t) (((uint32_t) GPIO_enPORT_AIO << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER_15 << 8UL) | (0UL)),

    GPIO_enGPIO_UNDEF = 0xFFFFFFFFUL,
}GPIO_nDIGITAL_FUNCTION;


typedef enum
{
    GPIO_enCONFIG_INPUT_NOPULL_SYSCLK = ((uint32_t) GPIO_enSYNC_SYSCLK << 16UL)
                            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
                            | ((uint32_t) GPIO_enRESISTOR_NONE << 0UL),
    GPIO_enCONFIG_INPUT_NOPULL_2SAMPLES = ((uint32_t) GPIO_enSYNC_2SAMPLES << 16UL)
                            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
                            | ((uint32_t) GPIO_enRESISTOR_NONE << 0UL),
    GPIO_enCONFIG_INPUT_NOPULL_5SAMPLES = ((uint32_t) GPIO_enSYNC_5SAMPLES << 16UL)
                            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
                            | ((uint32_t) GPIO_enRESISTOR_NONE << 0UL),
    GPIO_enCONFIG_INPUT_NOPULL_ASYNC = ((uint32_t) GPIO_enSYNC_ASYNC << 16UL)
                            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
                            | ((uint32_t) GPIO_enRESISTOR_NONE << 0UL),
    GPIO_enCONFIG_INPUT_PULLUP_SYSCLK = ((uint32_t) GPIO_enSYNC_SYSCLK << 16UL)
                            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
                            | ((uint32_t) GPIO_enRESISTOR_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_PULLUP_2SAMPLES = ((uint32_t) GPIO_enSYNC_2SAMPLES << 16UL)
                            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
                            | ((uint32_t) GPIO_enRESISTOR_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_PULLUP_5SAMPLES  = ((uint32_t) GPIO_enSYNC_5SAMPLES << 16UL)
                            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
                            | ((uint32_t) GPIO_enRESISTOR_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_PULLUP_ASYNC = ((uint32_t) GPIO_enSYNC_ASYNC << 16UL)
                            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
                            | ((uint32_t) GPIO_enRESISTOR_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_NOPULL = ((uint32_t) GPIO_enSYNC_SYSCLK << 16UL)
                            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
                            | ((uint32_t) GPIO_enRESISTOR_NONE << 0UL),
    GPIO_enCONFIG_OUTPUT_PULLUP = ((uint32_t) GPIO_enSYNC_2SAMPLES << 16UL)
                            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
                            | ((uint32_t) GPIO_enRESISTOR_PULLUP << 0UL),

    GPIO_enCONFIG_UNDEF = 0xFFFFFFFFUL,
}GPIO_nCONFIG;


typedef MCU_Register32Bits_t GPIO_Register_t;

#endif /* DRIVERLIB_GPIO_PERIPHERAL_XHEADER_GPIO_ENUM_H_ */
