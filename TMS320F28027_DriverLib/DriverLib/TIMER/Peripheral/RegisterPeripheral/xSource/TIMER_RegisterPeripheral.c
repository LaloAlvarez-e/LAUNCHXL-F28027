/**
 *
 * @file TIMER_RegisterPeripheral.c
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
 * @verbatim 22 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/TIMER/Peripheral/RegisterPeripheral/TIMER_RegisterPeripheral.h"

uintptr_t TIMER__uptrBlockBaseAddress(TIMER_nMODULE enModuleArg)
{
    uintptr_t TIMER_BLOCK_BASE[(uint16_t) TIMER_enMODULE_MAX] =
    {
     TIMER0_BASE, TIMER1_BASE, TIMER2_BASE
    };
    return (TIMER_BLOCK_BASE[(uint16_t) enModuleArg]);
}


