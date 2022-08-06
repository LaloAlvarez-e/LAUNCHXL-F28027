/**
 *
 * @file SYSCTL_Enum.h
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

#ifndef DRIVERLIB_SYSCTL_PERIPHERAL_XHEADER_SYSCTL_ENUM_H_
#define DRIVERLIB_SYSCTL_PERIPHERAL_XHEADER_SYSCTL_ENUM_H_

#include "DriverLib/MCU/xHeader/MCU_Enum.h"

typedef enum
{
    SYSCTL_enENABLE_DIS = 0U,
    SYSCTL_enENABLE_ENA = 1U,
}SYSCTL_nENABLE;

typedef enum
{
    SYSCTL_enSTATE_OFF = 0U,
    SYSCTL_enSTATE_ON = 1U,
}SYSCTL_nSTATE;

typedef enum
{
    SYSCTL_enLOCK_UNLOCK = 0U,
    SYSCTL_enLOCK_LOCK = 1U,
}SYSCTL_nLOCK;

typedef enum
{
    SYSCTL_enONHALT_OFF = 0U,
    SYSCTL_enONHALT_CONTINUE = 1U,
}SYSCTL_nONHALT;

typedef enum
{
    SYSCTL_enSTATUS_OK = 0U,
    SYSCTL_enSTATUS_ERROR = 1U,
}SYSCTL_nSTATUS;

typedef enum
{
    SYSCTL_enHRPWM = (uint32_t) (((uint32_t) 0UL << 8UL) | (0UL)),
    SYSCTL_enADC   = (uint32_t) (((uint32_t) 0UL << 8UL) | (3UL)),
    SYSCTL_enI2CA  = (uint32_t) (((uint32_t) 0UL << 8UL) | (4UL)),
    SYSCTL_enSPIA  = (uint32_t) (((uint32_t) 0UL << 8UL) | (8UL)),
    SYSCTL_enSCIA  = (uint32_t) (((uint32_t) 0UL << 8UL) | (10UL)),

    SYSCTL_enEPWM1 = (uint32_t) (((uint32_t) 1UL << 8UL) | (0UL)),
    SYSCTL_enEPWM2 = (uint32_t) (((uint32_t) 1UL << 8UL) | (1UL)),
    SYSCTL_enEPWM3 = (uint32_t) (((uint32_t) 1UL << 8UL) | (2UL)),
    SYSCTL_enEPWM4 = (uint32_t) (((uint32_t) 1UL << 8UL) | (3UL)),
    SYSCTL_enECAP1 = (uint32_t) (((uint32_t) 1UL << 8UL) | (8UL)),

    SYSCTL_enCOMP1 = (uint32_t) (((uint32_t) 4UL << 8UL) | (0UL)),
    SYSCTL_enCOMP2 = (uint32_t) (((uint32_t) 4UL << 8UL) | (1UL)),
    SYSCTL_enCPUTIMER0 = (uint32_t) (((uint32_t) 4UL << 8UL) | (8UL)),
    SYSCTL_enCPUTIMER1 = (uint32_t) (((uint32_t) 4UL << 8UL) | (9UL)),
    SYSCTL_enCPUTIMER2 = (uint32_t) (((uint32_t) 4UL << 8UL) | (10UL)),
    SYSCTL_enGPIO = (uint32_t) (((uint32_t) 4UL << 8UL) | (13UL)),

}SYSCTL_nPERIPHERAL;

typedef enum
{
    SYSCTL_enOUTCLK_SRC_SYSCLK = 0U,
}SYSCTL_nOUTCLK_SRC;

typedef enum
{
    SYSCTL_enOUTCLK_DIV_DIV4 = 0U,
    SYSCTL_enOUTCLK_DIV_DIV2 = 1U,
    SYSCTL_enOUTCLK_DIV_DIV1 = 2U,
    SYSCTL_enOUTCLK_DIV_OFF = 3U,
}SYSCTL_nOUTCLK_DIV;

typedef enum
{
    SYSCTL_enLPCLK_SRC_SYSCLK = 0U,
}SYSCTL_nLPCLK_SRC;

typedef enum
{
    SYSCTL_enLPCLK_DIV_DIV1 = 0U,
    SYSCTL_enLPCLK_DIV_DIV2 = 1U,
    SYSCTL_enLPCLK_DIV_DIV4 = 2U,
    SYSCTL_enLPCLK_DIV_DIV6 = 3U,
    SYSCTL_enLPCLK_DIV_DIV8 = 4U,
    SYSCTL_enLPCLK_DIV_DIV10 = 5U,
    SYSCTL_enLPCLK_DIV_DIV12 = 6U,
    SYSCTL_enLPCLK_DIV_DIV14 = 7U,
}SYSCTL_nLPCLK_DIV;


typedef enum
{
    SYSCTL_enINOSC_SRC_GPIO38 = 0U,
    SYSCTL_enINOSC_SRC_GPIO19 = 1U,
}SYSCTL_nINOSC_SRC;

typedef enum
{
    SYSCTL_enOSC_NONE = 0U,
    SYSCTL_enOSC_INOSC = 1U,
    SYSCTL_enOSC_EXTOSC = 2U,
    SYSCTL_enOSC_EXTCLK = 3U,
    SYSCTL_enOSC_INTOSC1 = 4U,
    SYSCTL_enOSC_INTOSC2 = 5U,
}SYSCTL_nOSC;

typedef enum
{
    SYSCTL_enEXTCLK_SRC_NONE = (uint16_t) SYSCTL_enOSC_NONE,
    SYSCTL_enEXTCLK_SRC_INOSC = (uint16_t) SYSCTL_enOSC_INOSC,
    SYSCTL_enEXTCLK_SRC_EXTOSC = (uint16_t) SYSCTL_enOSC_EXTOSC,
}SYSCTL_nEXTCLK_SRC;

typedef enum
{
    SYSCTL_enOSC1CLK_SRC_NONE = (uint16_t) SYSCTL_enOSC_NONE,
    SYSCTL_enOSC1CLK_SRC_INTOSC1 = (uint16_t) SYSCTL_enOSC_INTOSC1,
}SYSCTL_nOSC1CLK_SRC;

typedef enum
{
    SYSCTL_enOSC2CLK_SRC_NONE = (uint16_t) SYSCTL_enOSC_NONE,
    SYSCTL_enOSC2CLK_SRC_EXTCLK = (uint16_t) SYSCTL_enOSC_EXTCLK,
    SYSCTL_enOSC2CLK_SRC_INTOSC2 = (uint16_t) SYSCTL_enOSC_INTOSC2,
}SYSCTL_nOSC2CLK_SRC;

typedef enum
{
    SYSCTL_enWDTCLK_SRC_OSC1CLK = 0U,
    SYSCTL_enWDTCLK_SRC_OSC2CLK = 1U,
}SYSCTL_nWDTCLK_SRC;

typedef enum
{
    SYSCTL_enOSCCLK_SRC_OSC1CLK = 0U,
    SYSCTL_enOSCCLK_SRC_OSC2CLK = 1U,
}SYSCTL_nOSCCLK_SRC;

typedef enum
{
    SYSCTL_enTIMER2CLK_SRC_SYSCLK = 0U,
    SYSCTL_enTIMER2CLK_SRC_EXTCLK = 1U,
    SYSCTL_enTIMER2CLK_SRC_OSC1CLK = 2U,
    SYSCTL_enTIMER2CLK_SRC_INTOSC2 = 3U,
}SYSCTL_nTIMER2CLK_SRC;

typedef enum
{
    SYSCTL_enTIMER2CLK_DIV_DIV1 = 0U,
    SYSCTL_enTIMER2CLK_DIV_DIV2 = 1U,
    SYSCTL_enTIMER2CLK_DIV_DIV4 = 2U,
    SYSCTL_enTIMER2CLK_DIV_DIV8 = 3U,
    SYSCTL_enTIMER2CLK_DIV_DIV16 = 4U,
}SYSCTL_nTIMER2CLK_DIV;

typedef enum
{
    SYSCTL_enPLL_DIV_DIV4_OPT = 0U,
    SYSCTL_enPLL_DIV_DIV4 = 1U,
    SYSCTL_enPLL_DIV_DIV2 = 2U,
    SYSCTL_enPLL_DIV_DIV1 = 3U,
}SYSCTL_nPLL_DIV;

typedef MCU_Register16Bits_t SYSCTL_Register_t;

#endif /* DRIVERLIB_SYSCTL_PERIPHERAL_XHEADER_SYSCTL_ENUM_H_ */
