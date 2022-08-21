/**
 *
 * @file TIMER_Init.c
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
 * @verbatim 21 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/TIMER/Driver/xHeader/TIMER_Init.h"

#include "DriverLib/TIMER/Driver/Intrinsics/TIMER_Intrinsics.h"


void TIMER__vInit(void)
{
    MCU__pvfIRQVectorHandler_t pfvVector;

    pfvVector = TIMER__pvfGetIRQVectorHandler(TIMER_enMODULE_0);
    TIMER__enRegisterIRQVectorHandler(pfvVector, TIMER_enMODULE_0);
    pfvVector = TIMER__pvfGetIRQVectorHandler(TIMER_enMODULE_1);
    TIMER__enRegisterIRQVectorHandler(pfvVector, TIMER_enMODULE_1);
    pfvVector = TIMER__pvfGetIRQVectorHandler(TIMER_enMODULE_2);
    TIMER__enRegisterIRQVectorHandler(pfvVector, TIMER_enMODULE_2);
}

