/**
 *
 * @file FLASH_ActiveWait.c
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
#include "DriverLib/FLASH/Driver/xHeader/FLASH_ActiveWait.h"

#include "DriverLib/FLASH/Driver/Intrinsics/FLASH_Intrinsics.h"
#include "DriverLib/FLASH/Peripheral/FLASH_Peripheral.h"

void FLASH__vSetActiveWait(uint16_t u16WaitCyclesArg)
{
    FLASH_Register_t stRegister;

    stRegister.u16Shift = FLASH_ACTIVEWAIT_R_ACTIVEWAIT_BIT;
    stRegister.u16Mask = FLASH_ACTIVEWAIT_ACTIVEWAIT_MASK;
    stRegister.uptrAddress = FLASH_ACTIVEWAIT_OFFSET;
    stRegister.u16Value = u16WaitCyclesArg;
    FLASH__vWriteRegister(&stRegister);
}

uint16_t FLASH__u16GetActiveWait(void)
{
    FLASH_Register_t stRegister;

    stRegister.u16Shift = FLASH_ACTIVEWAIT_R_ACTIVEWAIT_BIT;
    stRegister.u16Mask = FLASH_ACTIVEWAIT_ACTIVEWAIT_MASK;
    stRegister.uptrAddress = FLASH_ACTIVEWAIT_OFFSET;
    FLASH__u16ReadRegister(&stRegister);
    return (stRegister.u16Value);
}

FLASH_nSTATUS FLASH__enGetActiveWaitSatus(void)
{
    FLASH_Register_t stRegister;

    stRegister.u16Shift = FLASH_STATUS_R_ACTIVEWAITS_BIT;
    stRegister.u16Mask = FLASH_STATUS_ACTIVEWAITS_MASK;
    stRegister.uptrAddress = FLASH_STATUS_OFFSET;
    FLASH__u16ReadRegister(&stRegister);
    return ((FLASH_nSTATUS) stRegister.u16Value);
}

