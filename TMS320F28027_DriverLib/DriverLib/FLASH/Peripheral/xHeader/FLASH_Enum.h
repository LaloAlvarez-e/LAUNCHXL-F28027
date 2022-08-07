/**
 *
 * @file FLASH_Enum.h
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

#ifndef DRIVERLIB_FLASH_PERIPHERAL_XHEADER_FLASH_ENUM_H_
#define DRIVERLIB_FLASH_PERIPHERAL_XHEADER_FLASH_ENUM_H_

#include "DriverLib/MCU/xHeader/MCU_Enum.h"

typedef enum
{
    FLASH_enENABLE_DIS = 0U,
    FLASH_enENABLE_ENA = 1U,
}FLASH_nENABLE;

typedef enum
{
    FLASH_enSTATE_SLEEP = 0U,
    FLASH_enSTATE_STANDBY = 1U,
    FLASH_enSTATE_ACTIVE = 3U,
}FLASH_nSTATE;


typedef enum
{
    FLASH_enSTATUS_READY = 0U,
    FLASH_enSTATUS_BUSY = 1U,
}FLASH_nSTATUS;

typedef MCU_Register16Bits_t FLASH_Register_t;

#endif /* DRIVERLIB_FLASH_PERIPHERAL_XHEADER_FLASH_ENUM_H_ */
