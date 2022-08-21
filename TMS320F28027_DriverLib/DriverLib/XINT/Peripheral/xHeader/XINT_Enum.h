/**
 *
 * @file XINT_Enum.h
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

#ifndef DRIVERLIB_XINT_PERIPHERAL_XHEADER_XINT_ENUM_H_
#define DRIVERLIB_XINT_PERIPHERAL_XHEADER_XINT_ENUM_H_

#include "DriverLib/MCU/xHeader/MCU_Enum.h"

typedef enum
{
    XINT_enERROR_OK = 0UL,
    XINT_enERROR_POINTER = 1U,
    XINT_enERROR_VALUE = 2U,
    XINT_enERROR_UNDEFINED = 0xFFFFUL,
}XINT_nERROR;

typedef enum
{
    XINT_enMODULE_1 = 0UL,
    XINT_enMODULE_2 = 1UL,
    XINT_enMODULE_3 = 2UL,
    XINT_enMODULE_MAX = 3UL,
}XINT_nMODULE;

typedef enum
{
    XINT_enSTATE_DISABLE = 0UL,
    XINT_enSTATE_ENABLE = 1UL,
}XINT_nSTATE;

typedef enum
{
    XINT_enEDGE_FALLING = 0UL,
    XINT_enEDGE_RISING = 1UL,
    XINT_enEDGE_BOTH = 3UL,
}XINT_nEDGE;

typedef enum
{
    XINT_enPIN_GPIOA0 = 0U,
    XINT_enPIN_GPIOA1 = 1U,
    XINT_enPIN_GPIOA2 = 2U,
    XINT_enPIN_GPIOA3 = 3U,
    XINT_enPIN_GPIOA4 = 4U,
    XINT_enPIN_GPIOA5 = 5U,
    XINT_enPIN_GPIOA6 = 6U,
    XINT_enPIN_GPIOA7 = 7U,
    XINT_enPIN_GPIOA8 = 8U,
    XINT_enPIN_GPIOA9 = 9U,
    XINT_enPIN_GPIOA10 = 10U,
    XINT_enPIN_GPIOA11 = 11U,
    XINT_enPIN_GPIOA12 = 12U,
    XINT_enPIN_GPIOA13 = 13U,
    XINT_enPIN_GPIOA14 = 14U,
    XINT_enPIN_GPIOA15 = 15U,
    XINT_enPIN_GPIOA16 = 16U,
    XINT_enPIN_GPIOA17 = 17U,
    XINT_enPIN_GPIOA18 = 18U,
    XINT_enPIN_GPIOA19 = 19U,
    XINT_enPIN_GPIOA20 = 20U,
    XINT_enPIN_GPIOA21 = 21U,
    XINT_enPIN_GPIOA22 = 22U,
    XINT_enPIN_GPIOA23 = 23U,
    XINT_enPIN_GPIOA24 = 24U,
    XINT_enPIN_GPIOA25 = 25U,
    XINT_enPIN_GPIOA26 = 26U,
    XINT_enPIN_GPIOA27 = 27U,
    XINT_enPIN_GPIOA28 = 28U,
    XINT_enPIN_GPIOA29 = 29U,
    XINT_enPIN_GPIOA30 = 30U,
    XINT_enPIN_GPIOA31 = 31U,
    XINT_enPIN_MAX = 32U,
}XINT_nPIN;

typedef MCU_Register16Bits_t XINT_Register_t;

typedef struct
{
    XINT_nPIN enPin;
    XINT_nEDGE enEdge;
}XINT_Config_t;

typedef struct
{
    XINT_nPIN enPin;
    XINT_nEDGE enEdge;
    XINT_nSTATE enInterruptState;
}XINT_ConfigExt_t;

#endif /* DRIVERLIB_XINT_PERIPHERAL_XHEADER_XINT_ENUM_H_ */
