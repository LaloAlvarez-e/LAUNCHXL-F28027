/**
 *
 * @file DEVICE_StructPeripheral.h
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
 * @verbatim 27 jun. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 jun. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_DEVICE_PERIPHERAL_XHEADER_DEVICE_STRUCTPERIPHERAL_H_
#define DRIVERLIB_DEVICE_PERIPHERAL_XHEADER_DEVICE_STRUCTPERIPHERAL_H_

#include "DriverLib/DEVICE/Peripheral/xHeader/DEVICE_StructRegister.h"

typedef volatile struct
{
    union
    {
        volatile unsigned long CNF;
        DEVICE_CNF_t CNF_bits;
    };
    union
    {
        volatile unsigned short CLASS;
        DEVICE_CLASS_t CLASS_bits;
    };
    union
    {
        volatile unsigned short REV;
        DEVICE_REV_t REV_bits;
    };
}DEVICE_t;

#endif /* DRIVERLIB_DEVICE_PERIPHERAL_XHEADER_DEVICE_STRUCTPERIPHERAL_H_ */
