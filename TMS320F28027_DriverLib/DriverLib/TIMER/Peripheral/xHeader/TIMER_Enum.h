/**
 *
 * @file TIMER_Enum.h
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

#ifndef DRIVERLIB_TIMER_PERIPHERAL_XHEADER_TIMER_ENUM_H_
#define DRIVERLIB_TIMER_PERIPHERAL_XHEADER_TIMER_ENUM_H_

#include "DriverLib/MCU/xHeader/MCU_Enum.h"

typedef enum
{
    TIMER_enERROR_OK = 0UL,
    TIMER_enERROR_POINTER= 1UL,
    TIMER_enERROR_UNDEFINED= 0xFFFFUL,
}TIMER_nERROR;

typedef enum
{
    TIMER_enMODULE_0 = 0UL,
    TIMER_enMODULE_1 = 1UL,
    TIMER_enMODULE_2 = 2UL,
    TIMER_enMODULE_MAX = 3UL,
}TIMER_nMODULE;

typedef enum
{
    TIMER_enINT_STATUS_NOOCCUR = 0U,
    TIMER_enINT_STATUS_OCCUR = 0U,
}TIMER_nINT_STATUS;

typedef enum
{
    TIMER_enSTATE_START = 0U,
    TIMER_enSTATE_STOP = 1U,
}TIMER_nSTATE;

typedef enum
{
    TIMER_enSTATUS_RUN = 0U,
    TIMER_enSTATUS_STOP = 1U,
}TIMER_nSTATUS;


typedef enum
{
    TIMER_enEMUMODE_HARDSTOP = 0U,
    TIMER_enEMUMODE_SOFTSTOP = 1U,
    TIMER_enEMUMODE_FREERUN = 2U,
}TIMER_nEMUMODE;


typedef MCU_Register16Bits_t TIMER_Register16Bits_t;
typedef MCU_Register32Bits_t TIMER_Register32Bits_t;

#endif /* DRIVERLIB_TIMER_PERIPHERAL_XHEADER_TIMER_ENUM_H_ */
