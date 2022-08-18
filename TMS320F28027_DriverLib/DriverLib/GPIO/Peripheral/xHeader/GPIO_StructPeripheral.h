/**
 *
 * @file GPIO_StructPeripheral.h
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

#ifndef DRIVERLIB_GPIO_PERIPHERAL_XHEADER_GPIO_STRUCTPERIPHERAL_H_
#define DRIVERLIB_GPIO_PERIPHERAL_XHEADER_GPIO_STRUCTPERIPHERAL_H_

#include "DriverLib/GPIO/Peripheral/xHeader/GPIO_StructRegister.h"
#include <DriverLib/GPIO/Peripheral/xHeader/GPIO_Enum.h>


typedef volatile struct
{
    union
    {
        volatile unsigned long CTRL;
        GPIO_CTRL_t CTRL_bits;
    };
    union
    {
        volatile unsigned long QSEL_LOW;
        GPIO_PIN_LOW_t QSEL_LOW_bits;
    };
    union
    {
        volatile unsigned long QSEL_HIGH;
        GPIO_PIN_HIGH_t QSEL_HIGH_bits;
    };
    union
    {
        volatile unsigned long MUX_LOW;
        GPIO_PIN_LOW_t MUX_LOW_bits;
    };
    union
    {
        volatile unsigned long MUX_HIGH;
        GPIO_PIN_HIGH_t MUX_HIGH_bits;
    };
    union
    {
        volatile unsigned long DIR;
        GPIO_PIN_t DIR_bits;
    };
    union
    {
        volatile unsigned long PUD;
        GPIO_PIN_t PUD_bits;
    };
    const unsigned long reserved1;
}GPIO_CONTROL_t;


typedef volatile struct
{
    union
    {
        volatile unsigned long DAT;
        GPIO_PIN_t DATA_bits;
    };
    union
    {
        volatile unsigned long SET;
        GPIO_PIN_t SET_bits;
    };
    union
    {
        volatile unsigned long CLEAR;
        GPIO_PIN_t CLEAR_bits;
    };
    union
    {
        volatile unsigned long TOGGLE;
        GPIO_PIN_t TOGGLE_bits;
    };
}GPIO_DATA_t;



typedef volatile struct
{
    union
    {
        volatile unsigned short XINTSEL[3U];
        GPIO_XINTnSEL_t XINTSEL_bits[3U];
    };
    const unsigned short reserved1[5U];
    union
    {
        volatile unsigned long LPMSEL;
        GPIO_PIN_t LPMSEL_bits;
    };
    const unsigned short reserved2[134U];
    union
    {
        volatile unsigned short XINTCR[3U];
        GPIO_XINTnCR_t XINTCR_bits[3U];
    };
    const unsigned short reserved3[5U];
    union
    {
        volatile unsigned short XINTCTR[3U];
        GPIO_XINTnCTR_t XINTCTR_bits[3U];
    };
    const unsigned short reserved4[5U];
}GPIO_INTERRUPT_t;



typedef volatile struct
{
    union
    {
        volatile unsigned long CTRL;
        GPIO_CTRL_t CTRL_bits;
    };
    union
    {
        volatile unsigned long QSEL_LOW;
        GPIO_PIN_LOW_t QSEL_LOW_bits;
    };
    union
    {
        volatile unsigned long QSEL_HIGH;
        GPIO_PIN_HIGH_t QSEL_HIGH_bits;
    };
    union
    {
        volatile unsigned long MUX_LOW;
        GPIO_PIN_LOW_t MUX_LOW_bits;
    };
    union
    {
        volatile unsigned long MUX_HIGH;
        GPIO_PIN_HIGH_t MUX_HIGH_bits;
    };
    union
    {
        volatile unsigned long DIR;
        GPIO_PIN_t DIR_bits;
    };
    union
    {
        volatile unsigned long PUD;
        GPIO_PIN_t PUD_bits;
    };
    const unsigned long reserved0[1U];
    const unsigned long reserved1[24U];
    union
    {
        volatile unsigned long DAT;
        GPIO_PIN_t DATA_bits;
    };
    union
    {
        volatile unsigned long SET;
        GPIO_PIN_t SET_bits;
    };
    union
    {
        volatile unsigned long CLEAR;
        GPIO_PIN_t CLEAR_bits;
    };
    union
    {
        volatile unsigned long TOGGLE;
        GPIO_PIN_t TOGGLE_bits;
    };
    const unsigned long reserved2[12U];
    union
    {
        volatile unsigned short XINTSEL[3U];
        GPIO_XINTnSEL_t XINTSEL_bits[3U];
    };
    const unsigned short reserved3[5U];
    union
    {
        volatile unsigned long LPMSEL;
        GPIO_PIN_t LPMSEL_bits;
    };
    const unsigned short reserved4[134U];
    union
    {
        volatile unsigned short XINTCR[3U];
        GPIO_XINTnCR_t XINTCR_bits[3U];
    };
    const unsigned short reserved5[5U];
    union
    {
        volatile unsigned short XINTCTR[3U];
        GPIO_XINTnCTR_t XINTCTR_bits[3U];
    };
    const unsigned short reserved6[5U];
}GPIOA_t;


typedef volatile struct
{
    const unsigned long reserved0[8U];
    union
    {
        volatile unsigned long CTRL;
        GPIO_CTRL_t CTRL_bits;
    };
    union
    {
        volatile unsigned long QSEL_LOW;
        GPIO_PIN_LOW_t QSEL_LOW_bits;
    };
    const unsigned long reserved1[1U];
    union
    {
        volatile unsigned long MUX_LOW;
        GPIO_PIN_LOW_t MUX_LOW_bits;
    };
    const unsigned long reserved2[1U];
    union
    {
        volatile unsigned long DIR;
        GPIO_PIN_t DIR_bits;
    };
    union
    {
        volatile unsigned long PUD;
        GPIO_PIN_t PUD_bits;
    };
    const unsigned long reserved3[1U];
    const unsigned long reserved4[16U];
    const unsigned long reserved5[4U];
    union
    {
        volatile unsigned long DAT;
        GPIO_PIN_t DATA_bits;
    };
    union
    {
        volatile unsigned long SET;
        GPIO_PIN_t SET_bits;
    };
    union
    {
        volatile unsigned long CLEAR;
        GPIO_PIN_t CLEAR_bits;
    };
    union
    {
        volatile unsigned long TOGGLE;
        GPIO_PIN_t TOGGLE_bits;
    };
    const unsigned long reserved6[8U];
    const unsigned short reserved7[160U];
}GPIOB_t;


typedef volatile struct
{
    const unsigned long reserved0[24U];
    const unsigned long reserved1[3U];
    union
    {
        volatile unsigned long MUX_LOW;
        GPIO_PIN_LOW_t MUX_LOW_bits;
    };
    const unsigned long reserved2[1U];
    union
    {
        volatile unsigned long DIR;
        GPIO_PIN_t DIR_bits;
    };
    const unsigned long reserved3[2U];
    const unsigned long reserved4[12U];
    union
    {
        volatile unsigned long DAT;
        GPIO_PIN_t DATA_bits;
    };
    union
    {
        volatile unsigned long SET;
        GPIO_PIN_t SET_bits;
    };
    union
    {
        volatile unsigned long CLEAR;
        GPIO_PIN_t CLEAR_bits;
    };
    union
    {
        volatile unsigned long TOGGLE;
        GPIO_PIN_t TOGGLE_bits;
    };
    const unsigned short reserved5[160U];
}AIO_t;


typedef volatile struct
{
    GPIO_CONTROL_t CONTROL[(uint16_t) GPIO_enPORT_MAX];
    GPIO_DATA_t DATA[(uint16_t) GPIO_enPORT_MAX];
    GPIO_INTERRUPT_t INTERRUPT;
}GPIOS_t;

typedef volatile struct
{
    union
    {
        GPIOA_t A;
        GPIOB_t B;
        AIO_t AIO;
    };
}GPIO_t;

#endif /* DRIVERLIB_GPIO_PERIPHERAL_XHEADER_GPIO_STRUCTPERIPHERAL_H_ */
