/**
 *
 * @file FLASH_StructRegister.h
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

#ifndef DRIVERLIB_FLASH_PERIPHERAL_XHEADER_FLASH_STRUCTREGISTER_H_
#define DRIVERLIB_FLASH_PERIPHERAL_XHEADER_FLASH_STRUCTREGISTER_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

typedef volatile struct
{
    volatile unsigned short ENPIPE: 1;
    const unsigned short reserved1: 15;
}FLASH_OPT_t;

typedef volatile struct
{
    volatile unsigned short PWR: 2;
    const unsigned short reserved1: 14;
}FLASH_PWR_t;

typedef volatile struct
{
    volatile const unsigned short PWRS: 2;
    volatile const unsigned short STDBYWAITS: 1;
    volatile const unsigned short ACTIVEWAITS: 1;
    const unsigned short reserved1: 4;
    volatile unsigned short STAT3V: 1;
    const unsigned short reserved2: 7;
}FLASH_STATUS_t;

typedef volatile struct
{
    volatile unsigned short STDBYWAIT: 9;
    const unsigned short reserved1: 7;
}FLASH_STDBYWAIT_t;

typedef volatile struct
{
    volatile unsigned short ACTIVEWAIT: 9;
    const unsigned short reserved1: 7;
}FLASH_ACTIVEWAIT_t;

typedef volatile struct
{
    volatile unsigned short RANDWAIT: 4;
    const unsigned short reserved1: 4;
    volatile unsigned short PAGEWAIT: 4;
    const unsigned short reserved2: 4;
}FLASH_BANKWAIT_t;

typedef volatile struct
{
    volatile unsigned short OTPWAIT: 5;
    const unsigned short reserved1: 11;
}FLASH_OTPWAIT_t;

#endif /* DRIVERLIB_FLASH_PERIPHERAL_XHEADER_FLASH_STRUCTREGISTER_H_ */
