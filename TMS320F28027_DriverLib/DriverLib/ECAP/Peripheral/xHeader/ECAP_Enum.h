/**
 *
 * @file ECAP_Enum.h
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

#ifndef DRIVERLIB_ECAP_PERIPHERAL_XHEADER_ECAP_ENUM_H_
#define DRIVERLIB_ECAP_PERIPHERAL_XHEADER_ECAP_ENUM_H_

#include "DriverLib/MCU/xHeader/MCU_Enum.h"

typedef enum
{
    ECAP_enERROR_OK = 0UL,
    ECAP_enERROR_POINTER = 1U,
    ECAP_enERROR_VALUE = 2U,
    ECAP_enERROR_UNDEFINED = 0xFFFFUL,
}ECAP_nERROR;

typedef enum
{
    ECAP_enMODULE_1 = 0UL,
    ECAP_enMODULE_MAX = 1UL,
}ECAP_nMODULE;


typedef enum
{
    ECAP_enINTERRUPT_SW = 0UL,
    ECAP_enINTERRUPT_CAP_EVENT1 = 1UL,
    ECAP_enINTERRUPT_CAP_EVENT2 = 2UL,
    ECAP_enINTERRUPT_CAP_EVENT3 = 3UL,
    ECAP_enINTERRUPT_CAP_EVENT4 = 4UL,
    ECAP_enINTERRUPT_COUNTER_OVF = 5UL,
    ECAP_enINTERRUPT_COUNTER_PERIOD = 6UL,
    ECAP_enINTERRUPT_COUNTER_COMPARE = 7UL,
    ECAP_enINTERRUPT_MAX = 8UL,
}ECAP_nINTERRUPT;

typedef enum
{
    ECAP_enINT_SOURCE_NONE = 0x0UL,
    ECAP_enINT_SOURCE_CAP_EVENT1 = 0x2UL,
    ECAP_enINT_SOURCE_CAP_EVENT2 = 0x4UL,
    ECAP_enINT_SOURCE_CAP_EVENT3 = 0x8UL,
    ECAP_enINT_SOURCE_CAP_EVENT4 = 0x10UL,
    ECAP_enINT_SOURCE_COUNTER_OVF = 0x20UL,
    ECAP_enINT_SOURCE_COUNTER_PERIOD = 0x40UL,
    ECAP_enINT_SOURCE_COUNTER_COMPARE = 0x80UL,
    ECAP_enINT_SOURCE_ALL = 0xFEUL,
}ECAP_nINT_SOURCE;

typedef enum
{
    ECAP_enINT_STATUS_NOOCCUR = 0UL,
    ECAP_enINT_STATUS_OCCUR = 1UL,
    ECAP_enINT_STATUS_UNDEF = 0xFFFFFFFFUL,
} ECAP_nINT_STATUS;

typedef enum
{
    ECAP_enSTATE_DISABLE = 0UL,
    ECAP_enSTATE_ENABLE = 1UL,
}ECAP_nSTATE;

typedef enum
{
    ECAP_enEDGE_FALLING = 0UL,
    ECAP_enEDGE_RISING = 1UL,
    ECAP_enEDGE_BOTH = 3UL,
}ECAP_nEDGE;

typedef MCU_Register16Bits_t ECAP_Register16Bits_t;
typedef MCU_Register32Bits_t ECAP_Register32Bits_t;

typedef struct
{
    ECAP_nEDGE enEdge;
}ECAP_Config_t;

typedef struct
{
    ECAP_nEDGE enEdge;
    ECAP_nSTATE enInterruptState;
}ECAP_ConfigExt_t;

#endif /* DRIVERLIB_ECAP_PERIPHERAL_XHEADER_ECAP_ENUM_H_ */
