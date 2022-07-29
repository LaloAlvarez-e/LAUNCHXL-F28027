/**
 *
 * @file BOR_StructPeripheral.h
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

#ifndef DRIVERLIB_BOR_PERIPHERAL_XHEADER_BOR_STRUCTPERIPHERAL_H_
#define DRIVERLIB_BOR_PERIPHERAL_XHEADER_BOR_STRUCTPERIPHERAL_H_

#include "DriverLib/BOR/Peripheral/xHeader/BOR_StructRegister.h"

typedef volatile struct
{
    union
    {
        volatile unsigned short CFG;
        BOR_CFG_t CFG_bits;
    };
}BOR_t;

#endif /* DRIVERLIB_BOR_PERIPHERAL_XHEADER_BOR_STRUCTPERIPHERAL_H_ */
