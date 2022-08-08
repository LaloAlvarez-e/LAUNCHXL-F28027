/**
 *
 * @file TIMER_StructRegister.h
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

#ifndef DRIVERLIB_TIMER_PERIPHERAL_XHEADER_TIMER_STRUCTREGISTER_H_
#define DRIVERLIB_TIMER_PERIPHERAL_XHEADER_TIMER_STRUCTREGISTER_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

typedef volatile struct
{
    volatile unsigned long TIM: 32;
}TIMER_TIM_t;

typedef volatile struct
{
    volatile unsigned long PRD: 32;
}TIMER_PRD_t;

typedef volatile struct
{
    const unsigned short reserved1: 4;
    volatile unsigned short TSS: 1;
    volatile unsigned short TRB: 1;
    const unsigned short reserved2: 4;
    volatile unsigned short SOFT: 1;
    volatile unsigned short FREE: 1;
    const unsigned short reserved3: 2;
    volatile unsigned short TIE: 1;
    volatile unsigned short TIF: 1;
}TIMER_TCR_t;

typedef volatile struct
{
    volatile unsigned short TDDR: 8;
    volatile unsigned short PSC: 8;
}TIMER_TPR_t;

typedef volatile struct
{
    volatile unsigned short TDDRH: 8;
    volatile unsigned short PSCH: 8;
}TIMER_TPRH_t;

#endif /* DRIVERLIB_TIMER_PERIPHERAL_XHEADER_TIMER_STRUCTREGISTER_H_ */
