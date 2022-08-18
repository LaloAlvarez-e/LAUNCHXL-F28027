/**
 *
 * @file PIE_Enum.h
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

#ifndef DRIVERLIB_PIE_PERIPHERAL_XHEADER_PIE_ENUM_H_
#define DRIVERLIB_PIE_PERIPHERAL_XHEADER_PIE_ENUM_H_

#include "DriverLib/MCU/xHeader/MCU_Enum.h"

typedef enum
{
    PIE_enERROR_OK = 0U,
    PIE_enERROR_POINTER = 1U,
}PIE_nERROR;

typedef enum
{
    PIE_enSTATE_DIS = 0U,
    PIE_enSTATE_ENA = 1U,
}PIE_nSTATE;

typedef enum
{
    PIE_enINT_STATUS_NOOCCUR = 0U,
    PIE_enINT_STATUS_OCCUR = 1U,
}PIE_nINT_STATUS;

typedef enum
{
    PIE_enACK_UNBLOCKED = 0U,
    PIE_enACK_BLOCKED = 1U,
}PIE_nACK;

typedef enum
{
    PIE_enVECTOR_IRQ_RESET      = MCU_enINT_VECTOR_RESET,
    PIE_enVECTOR_IRQ_GROUP1     = MCU_enINT_VECTOR_GROUP1,
    PIE_enVECTOR_IRQ_GROUP2     = MCU_enINT_VECTOR_GROUP2,
    PIE_enVECTOR_IRQ_GROUP3     = MCU_enINT_VECTOR_GROUP3,
    PIE_enVECTOR_IRQ_GROUP4     = MCU_enINT_VECTOR_GROUP4,
    PIE_enVECTOR_IRQ_GROUP5     = MCU_enINT_VECTOR_GROUP5,
    PIE_enVECTOR_IRQ_GROUP6     = MCU_enINT_VECTOR_GROUP6,
    PIE_enVECTOR_IRQ_GROUP7     = MCU_enINT_VECTOR_GROUP7,
    PIE_enVECTOR_IRQ_GROUP8     = MCU_enINT_VECTOR_GROUP8,
    PIE_enVECTOR_IRQ_GROUP9     = MCU_enINT_VECTOR_GROUP9,
    PIE_enVECTOR_IRQ_GROUP10    = MCU_enINT_VECTOR_GROUP10,
    PIE_enVECTOR_IRQ_GROUP11    = MCU_enINT_VECTOR_GROUP11,
    PIE_enVECTOR_IRQ_GROUP12    = MCU_enINT_VECTOR_GROUP12,
    PIE_enVECTOR_IRQ_T1         = MCU_enINT_VECTOR_GROUP13,
    PIE_enVECTOR_IRQ_T2         = MCU_enINT_VECTOR_GROUP14,
    PIE_enVECTOR_IRQ_DLOG       = MCU_enINT_VECTOR_DLOG,
    PIE_enVECTOR_IRQ_RTOS       = MCU_enINT_VECTOR_RTOS,
    PIE_enVECTOR_IRQ_EMU        = MCU_enINT_VECTOR_EMU,
    PIE_enVECTOR_IRQ_NMI        = MCU_enINT_VECTOR_NMI,
    PIE_enVECTOR_IRQ_ILLEGAL    = MCU_enINT_VECTOR_ILLEGAL,
    PIE_enVECTOR_IRQ_USER1      = MCU_enINT_VECTOR_USER1,
    PIE_enVECTOR_IRQ_USER2      = MCU_enINT_VECTOR_USER2,
    PIE_enVECTOR_IRQ_USER3      = MCU_enINT_VECTOR_USER3,
    PIE_enVECTOR_IRQ_USER4      = MCU_enINT_VECTOR_USER4,
    PIE_enVECTOR_IRQ_USER5      = MCU_enINT_VECTOR_USER5,
    PIE_enVECTOR_IRQ_USER6      = MCU_enINT_VECTOR_USER6,
    PIE_enVECTOR_IRQ_USER7      = MCU_enINT_VECTOR_USER7,
    PIE_enVECTOR_IRQ_USER8      = MCU_enINT_VECTOR_USER8,
    PIE_enVECTOR_IRQ_USER9      = MCU_enINT_VECTOR_USER9,
    PIE_enVECTOR_IRQ_USER10     = MCU_enINT_VECTOR_USER10,
    PIE_enVECTOR_IRQ_USER11     = MCU_enINT_VECTOR_USER11,
    PIE_enVECTOR_IRQ_USER12     = MCU_enINT_VECTOR_USER12,

    PIE_enVECTOR_IRQ_ADC1_PRI   = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP1 - 1U) << 3U) | 0U),
    PIE_enVECTOR_IRQ_ADC2_PRI   = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP1 - 1U) << 3U) | 1U),
    PIE_enVECTOR_IRQ_RESERVED1  = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP1 - 1U) << 3U) | 2U),
    PIE_enVECTOR_IRQ_X1         = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP1 - 1U) << 3U) | 3U),
    PIE_enVECTOR_IRQ_X2         = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP1 - 1U) << 3U) | 4U),
    PIE_enVECTOR_IRQ_ADC9       = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP1 - 1U) << 3U) | 5U),
    PIE_enVECTOR_IRQ_T0         = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP1 - 1U) << 3U) | 6U),
    PIE_enVECTOR_IRQ_WAKE       = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP1 - 1U) << 3U) | 7U),

    PIE_enVECTOR_IRQ_EPWM1_TZ   = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP2 - 1U) << 3U) | 0U),
    PIE_enVECTOR_IRQ_EPWM2_TZ   = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP2 - 1U) << 3U) | 1U),
    PIE_enVECTOR_IRQ_EPWM3_TZ   = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP2 - 1U) << 3U) | 2U),
    PIE_enVECTOR_IRQ_EPWM4_TZ   = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP2 - 1U) << 3U) | 3U),
    PIE_enVECTOR_IRQ_RESERVED2  = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP2 - 1U) << 3U) | 4U),
    PIE_enVECTOR_IRQ_RESERVED3  = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP2 - 1U) << 3U) | 5U),
    PIE_enVECTOR_IRQ_RESERVED4  = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP2 - 1U) << 3U) | 6U),
    PIE_enVECTOR_IRQ_RESERVED5  = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP2 - 1U) << 3U) | 7U),
    PIE_enVECTOR_IRQ_EPWM1      = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP3 - 1U) << 3U) | 0U),

    PIE_enVECTOR_IRQ_EPWM2      = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP3 - 1U) << 3U) | 1U),
    PIE_enVECTOR_IRQ_EPWM3      = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP3 - 1U) << 3U) | 2U),
    PIE_enVECTOR_IRQ_EPWM4      = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP3 - 1U) << 3U) | 3U),
    PIE_enVECTOR_IRQ_RESERVED6  = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP3 - 1U) << 3U) | 4U),
    PIE_enVECTOR_IRQ_RESERVED7  = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP3 - 1U) << 3U) | 5U),
    PIE_enVECTOR_IRQ_RESERVED8  = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP3 - 1U) << 3U) | 6U),
    PIE_enVECTOR_IRQ_RESERVED9  = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP3 - 1U) << 3U) | 7U),

    PIE_enVECTOR_IRQ_ECAP1      = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP4 - 1U) << 3U) | 0U),
    PIE_enVECTOR_IRQ_RESERVED10 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP4 - 1U) << 3U) | 1U),
    PIE_enVECTOR_IRQ_RESERVED11 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP4 - 1U) << 3U) | 2U),
    PIE_enVECTOR_IRQ_RESERVED12 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP4 - 1U) << 3U) | 3U),
    PIE_enVECTOR_IRQ_RESERVED13 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP4 - 1U) << 3U) | 4U),
    PIE_enVECTOR_IRQ_RESERVED14 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP4 - 1U) << 3U) | 5U),
    PIE_enVECTOR_IRQ_RESERVED15 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP4 - 1U) << 3U) | 6U),
    PIE_enVECTOR_IRQ_RESERVED16 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP4 - 1U) << 3U) | 7U),

    PIE_enVECTOR_IRQ_SW1        = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP5 - 1U) << 3U) | 0U),
    PIE_enVECTOR_IRQ_RESERVED17 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP5 - 1U) << 3U) | 1U),
    PIE_enVECTOR_IRQ_RESERVED18 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP5 - 1U) << 3U) | 2U),
    PIE_enVECTOR_IRQ_RESERVED19 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP5 - 1U) << 3U) | 3U),
    PIE_enVECTOR_IRQ_RESERVED20 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP5 - 1U) << 3U) | 4U),
    PIE_enVECTOR_IRQ_RESERVED21 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP5 - 1U) << 3U) | 5U),
    PIE_enVECTOR_IRQ_RESERVED22 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP5 - 1U) << 3U) | 6U),
    PIE_enVECTOR_IRQ_RESERVED23 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP5 - 1U) << 3U) | 7U),

    PIE_enVECTOR_IRQ_SPIA_RX    = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP6 - 1U) << 3U) | 0U),
    PIE_enVECTOR_IRQ_SPIA_TX    = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP6 - 1U) << 3U) | 1U),
    PIE_enVECTOR_IRQ_RESERVED24 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP6 - 1U) << 3U) | 2U),
    PIE_enVECTOR_IRQ_RESERVED25 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP6 - 1U) << 3U) | 3U),
    PIE_enVECTOR_IRQ_RESERVED26 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP6 - 1U) << 3U) | 4U),
    PIE_enVECTOR_IRQ_RESERVED27 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP6 - 1U) << 3U) | 5U),
    PIE_enVECTOR_IRQ_RESERVED28 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP6 - 1U) << 3U) | 6U),
    PIE_enVECTOR_IRQ_RESERVED29 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP6 - 1U) << 3U) | 7U),

    PIE_enVECTOR_IRQ_SW2        = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP7 - 1U) << 3U) | 0U),
    PIE_enVECTOR_IRQ_RESERVED30 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP7 - 1U) << 3U) | 1U),
    PIE_enVECTOR_IRQ_RESERVED31 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP7 - 1U) << 3U) | 2U),
    PIE_enVECTOR_IRQ_RESERVED32 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP7 - 1U) << 3U) | 3U),
    PIE_enVECTOR_IRQ_RESERVED33 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP7 - 1U) << 3U) | 4U),
    PIE_enVECTOR_IRQ_RESERVED34 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP7 - 1U) << 3U) | 5U),
    PIE_enVECTOR_IRQ_RESERVED35 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP7 - 1U) << 3U) | 6U),
    PIE_enVECTOR_IRQ_RESERVED36 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP7 - 1U) << 3U) | 7U),

    PIE_enVECTOR_IRQ_I2C1A      = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP8 - 1U) << 3U) | 0U),
    PIE_enVECTOR_IRQ_I2C1B      = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP8 - 1U) << 3U) | 1U),
    PIE_enVECTOR_IRQ_RESERVED37 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP8 - 1U) << 3U) | 2U),
    PIE_enVECTOR_IRQ_RESERVED38 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP8 - 1U) << 3U) | 3U),
    PIE_enVECTOR_IRQ_RESERVED39 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP8 - 1U) << 3U) | 4U),
    PIE_enVECTOR_IRQ_RESERVED40 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP8 - 1U) << 3U) | 5U),
    PIE_enVECTOR_IRQ_RESERVED41 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP8 - 1U) << 3U) | 6U),
    PIE_enVECTOR_IRQ_RESERVED42 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP8 - 1U) << 3U) | 7U),

    PIE_enVECTOR_IRQ_SCIA_RX    = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP9 - 1U) << 3U) | 0U),
    PIE_enVECTOR_IRQ_SCIA_TX    = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP9 - 1U) << 3U) | 1U),
    PIE_enVECTOR_IRQ_RESERVED43 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP9 - 1U) << 3U) | 2U),
    PIE_enVECTOR_IRQ_RESERVED44 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP9 - 1U) << 3U) | 3U),
    PIE_enVECTOR_IRQ_RESERVED45 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP9 - 1U) << 3U) | 4U),
    PIE_enVECTOR_IRQ_RESERVED46 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP9 - 1U) << 3U) | 5U),
    PIE_enVECTOR_IRQ_RESERVED47 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP9 - 1U) << 3U) | 6U),
    PIE_enVECTOR_IRQ_RESERVED48 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP9 - 1U) << 3U) | 7U),

    PIE_enVECTOR_IRQ_ADC1       = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP10 - 1U) << 3U) | 0U),
    PIE_enVECTOR_IRQ_ADC2       = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP10 - 1U) << 3U) | 1U),
    PIE_enVECTOR_IRQ_ADC3       = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP10 - 1U) << 3U) | 2U),
    PIE_enVECTOR_IRQ_ADC4       = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP10 - 1U) << 3U) | 3U),
    PIE_enVECTOR_IRQ_ADC5       = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP10 - 1U) << 3U) | 4U),
    PIE_enVECTOR_IRQ_ADC6       = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP10 - 1U) << 3U) | 5U),
    PIE_enVECTOR_IRQ_ADC7       = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP10 - 1U) << 3U) | 6U),
    PIE_enVECTOR_IRQ_ADC8       = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP10 - 1U) << 3U) | 7U),

    PIE_enVECTOR_IRQ_SW3        = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP11 - 1U) << 3U) | 0U),
    PIE_enVECTOR_IRQ_RESERVED49 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP11 - 1U) << 3U) | 1U),
    PIE_enVECTOR_IRQ_RESERVED50 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP11 - 1U) << 3U) | 2U),
    PIE_enVECTOR_IRQ_RESERVED51 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP11 - 1U) << 3U) | 3U),
    PIE_enVECTOR_IRQ_RESERVED52 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP11 - 1U) << 3U) | 4U),
    PIE_enVECTOR_IRQ_RESERVED53 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP11 - 1U) << 3U) | 5U),
    PIE_enVECTOR_IRQ_RESERVED54 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP11 - 1U) << 3U) | 6U),
    PIE_enVECTOR_IRQ_RESERVED55 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP11 - 1U) << 3U) | 7U),

    PIE_enVECTOR_IRQ_X3         = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP12 - 1U) << 3U) | 0U),
    PIE_enVECTOR_IRQ_RESERVED56 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP12 - 1U) << 3U) | 1U),
    PIE_enVECTOR_IRQ_RESERVED57 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP12 - 1U) << 3U) | 2U),
    PIE_enVECTOR_IRQ_RESERVED58 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP12 - 1U) << 3U) | 3U),
    PIE_enVECTOR_IRQ_RESERVED59 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP12 - 1U) << 3U) | 4U),
    PIE_enVECTOR_IRQ_RESERVED60 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP12 - 1U) << 3U) | 5U),
    PIE_enVECTOR_IRQ_RESERVED61 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP12 - 1U) << 3U) | 6U),
    PIE_enVECTOR_IRQ_RESERVED62 = (MCU_enINT_VECTOR_USER12 + 1U) + (((MCU_enINT_VECTOR_GROUP12 - 1U) << 3U) | 7U),

    PIE_enVECTOR_IRQ_INACTIVE = 0xFFFFU,
}PIE_nVECTOR_IRQ;


typedef MCU_Register16Bits_t PIE_Register_t;
typedef MCU_Register32Bits_t PIE_VECTOR_Register_t;

#endif /* DRIVERLIB_PIE_PERIPHERAL_XHEADER_PIE_ENUM_H_ */
