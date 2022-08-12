/**
 *
 * @file TIMER_Prescaler.c
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
#include "DriverLib/TIMER/Driver/xHeader/TIMER_Prescaler.h"

#include "DriverLib/TIMER/Driver/Intrinsics/TIMER_Intrinsics.h"
#include "DriverLib/TIMER/Peripheral/TIMER_Peripheral.h"

void TIMER__vSetPrescalerValue(TIMER_nMODULE enModuleArg, uint16_t u16PrescalerValueArg)
{
    TIMER_Register16Bits_t stRegister;
    uint16_t u16PrescalerLowReg;
    uint16_t u16PrescalerHighReg;

    u16PrescalerLowReg = u16PrescalerValueArg & TIMER_TPR_TDDR_MASK;
    u16PrescalerHighReg = u16PrescalerValueArg >> 8U;
    u16PrescalerHighReg &= TIMER_TPRH_TDDRH_MASK;

    stRegister.u16Shift = TIMER_TPRH_R_TDDRH_BIT;
    stRegister.u16Mask = TIMER_TPRH_TDDRH_MASK;
    stRegister.uptrAddress = TIMER_TPRH_OFFSET;
    stRegister.u16Value = u16PrescalerHighReg;
    TIMER__vWriteRegister16Bits(enModuleArg, &stRegister);

    stRegister.u16Shift = TIMER_TPR_R_TDDR_BIT;
    stRegister.u16Mask = TIMER_TPR_TDDR_MASK;
    stRegister.uptrAddress = TIMER_TPR_OFFSET;
    stRegister.u16Value = u16PrescalerLowReg;
    TIMER__vWriteRegister16Bits(enModuleArg, &stRegister);
}

uint16_t TIMER__u16GetPrescalerValue(TIMER_nMODULE enModuleArg)
{
    TIMER_Register16Bits_t stRegister;
    uint16_t u16PrescalerReg;

    stRegister.u16Shift = TIMER_TPRH_R_TDDRH_BIT;
    stRegister.u16Mask = TIMER_TPRH_TDDRH_MASK;
    stRegister.uptrAddress = TIMER_TPRH_OFFSET;
    TIMER__u16ReadRegister(enModuleArg, &stRegister);
    u16PrescalerReg = stRegister.u16Value;
    u16PrescalerReg <<= 8U;

    stRegister.u16Shift = TIMER_TPR_R_TDDR_BIT;
    stRegister.u16Mask = TIMER_TPR_TDDR_MASK;
    stRegister.uptrAddress = TIMER_TPR_OFFSET;
    TIMER__u16ReadRegister(enModuleArg, &stRegister);
    u16PrescalerReg |= stRegister.u16Value;

    return (u16PrescalerReg);
}

uint16_t TIMER__u16GetPrescalerCounter(TIMER_nMODULE enModuleArg)
{
    TIMER_Register16Bits_t stRegister;
    uint16_t u16PrescalerReg;

    stRegister.u16Shift = TIMER_TPRH_R_PSCH_BIT;
    stRegister.u16Mask = TIMER_TPRH_PSCH_MASK;
    stRegister.uptrAddress = TIMER_TPRH_OFFSET;
    TIMER__u16ReadRegister(enModuleArg, &stRegister);
    u16PrescalerReg = stRegister.u16Value;
    u16PrescalerReg <<= 8U;

    stRegister.u16Shift = TIMER_TPR_R_PSC_BIT;
    stRegister.u16Mask = TIMER_TPR_PSC_MASK;
    stRegister.uptrAddress = TIMER_TPR_OFFSET;
    TIMER__u16ReadRegister(enModuleArg, &stRegister);
    u16PrescalerReg |= stRegister.u16Value;

    return (u16PrescalerReg);
}


