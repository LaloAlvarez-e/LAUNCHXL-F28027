/**
 *
 * @file BOR_Enum.h
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
 * @verbatim 29 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_BOR_PERIPHERAL_XHEADER_BOR_ENUM_H_
#define DRIVERLIB_BOR_PERIPHERAL_XHEADER_BOR_ENUM_H_

#include "DriverLib/MCU/xHeader/MCU_Enum.h"

typedef enum
{
    BOR_enENABLE_DIS = 0U,
    BOR_enENABLE_ENA = 1U,
}BOR_nENABLE;

typedef MCU_Register16Bits_t BOR_Register_t;

#endif /* DRIVERLIB_BOR_PERIPHERAL_XHEADER_BOR_ENUM_H_ */
