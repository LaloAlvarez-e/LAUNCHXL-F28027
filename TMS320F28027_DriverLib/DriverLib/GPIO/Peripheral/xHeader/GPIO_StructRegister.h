/**
 *
 * @file GPIO_StructRegister.h
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

#ifndef DRIVERLIB_GPIO_PERIPHERAL_XHEADER_GPIO_STRUCTREGISTER_H_
#define DRIVERLIB_GPIO_PERIPHERAL_XHEADER_GPIO_STRUCTREGISTER_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

typedef volatile struct
{
    volatile unsigned long QUALPRD0: 8;
    volatile unsigned long QUALPRD1: 8;
    volatile unsigned long QUALPRD2: 8;
    volatile unsigned long QUALPRD3: 8;
}GPIO_CTRL_t;

typedef volatile struct
{
    volatile unsigned short SEL: 5;
    const unsigned short reserved1: 11;
}GPIO_XINTnSEL_t;

typedef volatile struct
{
    volatile unsigned short ENABLE: 1;
    const unsigned short reserved1: 1;
    volatile unsigned short POLARITY: 2;
    const unsigned short reserved2: 12;
}GPIO_XINTnCR_t;

typedef volatile struct
{
    volatile unsigned short INTCTR: 16;
}GPIO_XINTnCTR_t;

typedef volatile struct
{
    volatile unsigned long PIN0: 1;
    volatile unsigned long PIN1: 1;
    volatile unsigned long PIN2: 1;
    volatile unsigned long PIN3: 1;
    volatile unsigned long PIN4: 1;
    volatile unsigned long PIN5: 1;
    volatile unsigned long PIN6: 1;
    volatile unsigned long PIN7: 1;
    volatile unsigned long PIN8: 1;
    volatile unsigned long PIN9: 1;
    volatile unsigned long PIN10: 1;
    volatile unsigned long PIN11: 1;
    volatile unsigned long PIN12: 1;
    volatile unsigned long PIN13: 1;
    volatile unsigned long PIN14: 1;
    volatile unsigned long PIN15: 1;
    volatile unsigned long PIN16: 1;
    volatile unsigned long PIN17: 1;
    volatile unsigned long PIN18: 1;
    volatile unsigned long PIN19: 1;
    volatile unsigned long PIN20: 1;
    volatile unsigned long PIN21: 1;
    volatile unsigned long PIN22: 1;
    volatile unsigned long PIN23: 1;
    volatile unsigned long PIN24: 1;
    volatile unsigned long PIN25: 1;
    volatile unsigned long PIN26: 1;
    volatile unsigned long PIN27: 1;
    volatile unsigned long PIN28: 1;
    volatile unsigned long PIN29: 1;
    volatile unsigned long PIN30: 1;
    volatile unsigned long PIN31: 1;
}GPIO_PIN_t;


typedef volatile struct
{
    volatile unsigned long PIN0: 2;
    volatile unsigned long PIN1: 2;
    volatile unsigned long PIN2: 2;
    volatile unsigned long PIN3: 2;
    volatile unsigned long PIN4: 2;
    volatile unsigned long PIN5: 2;
    volatile unsigned long PIN6: 2;
    volatile unsigned long PIN7: 2;
    volatile unsigned long PIN8: 2;
    volatile unsigned long PIN9: 2;
    volatile unsigned long PIN10: 2;
    volatile unsigned long PIN11: 2;
    volatile unsigned long PIN12: 2;
    volatile unsigned long PIN13: 2;
    volatile unsigned long PIN14: 2;
    volatile unsigned long PIN15: 2;
}GPIO_PIN_LOW_t;

typedef volatile struct
{
    volatile unsigned long PIN16: 2;
    volatile unsigned long PIN17: 2;
    volatile unsigned long PIN18: 2;
    volatile unsigned long PIN19: 2;
    volatile unsigned long PIN20: 2;
    volatile unsigned long PIN21: 2;
    volatile unsigned long PIN22: 2;
    volatile unsigned long PIN23: 2;
    volatile unsigned long PIN24: 2;
    volatile unsigned long PIN25: 2;
    volatile unsigned long PIN26: 2;
    volatile unsigned long PIN27: 2;
    volatile unsigned long PIN28: 2;
    volatile unsigned long PIN29: 2;
    volatile unsigned long PIN30: 2;
    volatile unsigned long PIN31: 2;
}GPIO_PIN_HIGH_t;

#endif /* DRIVERLIB_GPIO_PERIPHERAL_XHEADER_GPIO_STRUCTREGISTER_H_ */
