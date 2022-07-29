/**
 *
 * @file BOR_StructRegister.h
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

#ifndef DRIVERLIB_BOR_PERIPHERAL_XHEADER_BOR_STRUCTREGISTER_H_
#define DRIVERLIB_BOR_PERIPHERAL_XHEADER_BOR_STRUCTREGISTER_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

typedef volatile struct
{
    volatile unsigned short BORENZ: 1;
    const unsigned short reserved1: 15;
}BOR_CFG_t;

#endif /* DRIVERLIB_BOR_PERIPHERAL_XHEADER_BOR_STRUCTREGISTER_H_ */
