/**
 *
 * @file DEVICE_StructRegister.h
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
 * @verbatim 26 jun. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 jun. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_DEVICE_PERIPHERAL_XHEADER_DEVICE_STRUCTREGISTER_H_
#define DRIVERLIB_DEVICE_PERIPHERAL_XHEADER_DEVICE_STRUCTREGISTER_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

typedef volatile struct
{
    const unsigned long reserved1: 3;
    volatile const unsigned long VMAPS: 1;
    const unsigned long reserved2: 1;
    volatile const unsigned long XRS: 1;
    const unsigned long reserved3: 13;
    volatile unsigned long ENPROT: 1;
    const unsigned long reserved4: 7;
    volatile const unsigned long TRST: 1;
    const unsigned long reserved5: 4;
}DEVICE_CNF_t;

typedef volatile struct
{
    volatile const unsigned short NO: 8;
    volatile const unsigned short TYPE: 8;
}DEVICE_PART_t;

typedef volatile struct
{
    volatile const unsigned short ID: 16;
}DEVICE_CLASS_t;

typedef volatile struct
{
    volatile const unsigned short ID: 16;
}DEVICE_REV_t;

#endif /* DRIVERLIB_DEVICE_PERIPHERAL_XHEADER_DEVICE_STRUCTREGISTER_H_ */
