/**
 *
 * @file XINT_StructRegister.h
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

#ifndef DRIVERLIB_XINT_PERIPHERAL_XHEADER_XINT_STRUCTREGISTER_H_
#define DRIVERLIB_XINT_PERIPHERAL_XHEADER_XINT_STRUCTREGISTER_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

typedef volatile struct
{
    volatile unsigned short SEL: 5;
    const unsigned short reserved1: 11;
}XINT_SEL_t;

typedef volatile struct
{
    volatile unsigned short ENABLE: 1;
    const unsigned short reserved1: 1;
    volatile unsigned short POLARITY: 2;
    const unsigned short reserved2: 12;
}XINT_CR_t;

typedef volatile struct
{
    volatile unsigned short CTR: 16;
}XINT_CTR_t;

#endif /* DRIVERLIB_XINT_PERIPHERAL_XHEADER_XINT_STRUCTREGISTER_H_ */
