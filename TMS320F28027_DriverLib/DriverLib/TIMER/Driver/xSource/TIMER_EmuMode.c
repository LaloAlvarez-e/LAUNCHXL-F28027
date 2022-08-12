/**
 *
 * @file TIMER_EmuMode.c
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
 * @verbatim 12 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/TIMER/Driver/xHeader/TIMER_EmuMode.h"
#include "DriverLib/TIMER/Driver/Intrinsics/TIMER_Intrinsics.h"
#include "DriverLib/TIMER/Peripheral/TIMER_Peripheral.h"

void TIMER__vSetEmulationMode(TIMER_nMODULE enModuleArg, TIMER_nEMUMODE enEmulationModeArg)
{
    TIMER_Register16Bits_t stRegister;

    stRegister.u16Shift = TIMER_TCR_R_EMUMODE_BIT;
    stRegister.u16Mask = TIMER_TCR_EMUMODE_MASK;
    stRegister.uptrAddress = TIMER_TCR_OFFSET;
    stRegister.u16Value = (uint16_t) enEmulationModeArg;
    TIMER__vWriteRegister16Bits(enModuleArg, &stRegister);
}

TIMER_nEMUMODE TIMER__enGetEmulationMode(TIMER_nMODULE enModuleArg)
{
    TIMER_Register16Bits_t stRegister;

    stRegister.u16Shift = TIMER_TCR_R_EMUMODE_BIT;
    stRegister.u16Mask = TIMER_TCR_EMUMODE_MASK;
    stRegister.uptrAddress = TIMER_TCR_OFFSET;
    TIMER__u16ReadRegister(enModuleArg, &stRegister);
    return ((TIMER_nEMUMODE) stRegister.u16Value);
}




