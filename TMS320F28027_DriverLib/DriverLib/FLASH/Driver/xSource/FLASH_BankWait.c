/**
 *
 * @file FLASH_BankWait.c
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
 * @verbatim 7 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/FLASH/Driver/xHeader/FLASH_BankWait.h"

#include "DriverLib/FLASH/Driver/Intrinsics/FLASH_Intrinsics.h"
#include "DriverLib/FLASH/Peripheral/FLASH_Peripheral.h"

void FLASH__vSetRandomWait(uint16_t u16WaitCyclesArg)
{
    FLASH_Register_t stRegister;

    stRegister.u16Shift = FLASH_BANKWAIT_R_RANDWAIT_BIT;
    stRegister.u16Mask = FLASH_BANKWAIT_RANDWAIT_MASK;
    stRegister.uptrAddress = FLASH_BANKWAIT_OFFSET;
    stRegister.u16Value = u16WaitCyclesArg;
    FLASH__vWriteRegister(&stRegister);
}

uint16_t FLASH__u16GetRandomWait(void)
{
    FLASH_Register_t stRegister;

    stRegister.u16Shift = FLASH_BANKWAIT_R_RANDWAIT_BIT;
    stRegister.u16Mask = FLASH_BANKWAIT_RANDWAIT_MASK;
    stRegister.uptrAddress = FLASH_BANKWAIT_OFFSET;
    FLASH__u16ReadRegister(&stRegister);
    return (stRegister.u16Value);
}


void FLASH__vSetPageWait(uint16_t u16WaitCyclesArg)
{
    FLASH_Register_t stRegister;

    stRegister.u16Shift = FLASH_BANKWAIT_R_PAGEWAIT_BIT;
    stRegister.u16Mask = FLASH_BANKWAIT_PAGEWAIT_MASK;
    stRegister.uptrAddress = FLASH_BANKWAIT_OFFSET;
    stRegister.u16Value = u16WaitCyclesArg;
    FLASH__vWriteRegister(&stRegister);
}

uint16_t FLASH__u16GetPageWait(void)
{
    FLASH_Register_t stRegister;

    stRegister.u16Shift = FLASH_BANKWAIT_R_PAGEWAIT_BIT;
    stRegister.u16Mask = FLASH_BANKWAIT_PAGEWAIT_MASK;
    stRegister.uptrAddress = FLASH_BANKWAIT_OFFSET;
    FLASH__u16ReadRegister(&stRegister);
    return (stRegister.u16Value);
}



