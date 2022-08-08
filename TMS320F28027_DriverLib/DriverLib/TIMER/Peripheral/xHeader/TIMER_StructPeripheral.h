/**
 *
 * @file TIMER_StructPeripheral.h
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

#ifndef DRIVERLIB_TIMER_PERIPHERAL_XHEADER_TIMER_STRUCTPERIPHERAL_H_
#define DRIVERLIB_TIMER_PERIPHERAL_XHEADER_TIMER_STRUCTPERIPHERAL_H_

#include "DriverLib/TIMER/Peripheral/xHeader/TIMER_StructRegister.h"
#include <DriverLib/TIMER/Peripheral/xHeader/TIMER_Enum.h>


typedef volatile struct
{
    union
    {
        volatile unsigned long TIM;
        TIMER_TIM_t TIM_bits;
    };
    union
    {
        volatile unsigned long PRD;
        TIMER_PRD_t PRD_bits;
    };
    union
    {
        volatile unsigned short TCR;
        TIMER_TCR_t TCR_bits;
    };
    const unsigned short reserved1[1U];
    union
    {
        volatile unsigned short TPR;
        TIMER_TPR_t TPR_bits;
    };
    union
    {
        volatile unsigned short TPRH;
        TIMER_TPRH_t TPRH_bits;
    };
}TIMER_t;

typedef volatile struct
{
    TIMER_t MODULE [(uint16_t) TIMER_enMODULE_MAX];
}TIMERS_t;

#endif /* DRIVERLIB_TIMER_PERIPHERAL_XHEADER_TIMER_STRUCTPERIPHERAL_H_ */
