/**
 *
 * @file SYSCTL_Peripheral.c
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
 * @verbatim 4 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/SYSCTL/Driver/xHeader/SYSCTL_Peripheral.h"
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

void SYSCTL__vSetEnablePeripheral(SYSCTL_nPERIPHERAL enPeripheralArg, SYSCTL_nENABLE enEnableArg)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16PeripheralBit;
    uint16_t u16PeripheralRegister;

    u16PeripheralBit = (uint16_t) enPeripheralArg;
    u16PeripheralBit &= 0xFU;

    u16PeripheralRegister = (uint16_t) enPeripheralArg;
    u16PeripheralRegister >>= 8U;
    u16PeripheralRegister &= 0xFU;
    u16PeripheralRegister += SYSCTL_PCLKCR0_OFFSET;

    stRegister.u16Shift = u16PeripheralBit;
    stRegister.u16Mask = SYSCTL_PCLKCR0_HRPWMENCLK_MASK;
    stRegister.uptrAddress = u16PeripheralRegister;
    stRegister.u16Value = (uint16_t) enEnableArg;
    SYSCTL__vWriteRegister(&stRegister);
}

void SYSCTL__vEnablePeripheral(SYSCTL_nPERIPHERAL enPeripheralArg)
{
    SYSCTL__vSetEnablePeripheral(enPeripheralArg, SYSCTL_enENABLE_ENA);
}

void SYSCTL__vDisablePeripheral(SYSCTL_nPERIPHERAL enPeripheralArg)
{
    SYSCTL__vSetEnablePeripheral(enPeripheralArg, SYSCTL_enENABLE_DIS);
}

SYSCTL_nENABLE SYSCTL__enGetEnablePeripheral(SYSCTL_nPERIPHERAL enPeripheralArg)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16PeripheralBit;
    uint16_t u16PeripheralRegister;

    u16PeripheralBit = (uint16_t) enPeripheralArg;
    u16PeripheralBit &= 0xFU;

    u16PeripheralRegister = (uint16_t) enPeripheralArg;
    u16PeripheralRegister >>= 8U;
    u16PeripheralRegister &= 0xFU;
    u16PeripheralRegister += SYSCTL_PCLKCR0_OFFSET;

    stRegister.u16Shift = u16PeripheralBit;
    stRegister.u16Mask = SYSCTL_PCLKCR0_HRPWMENCLK_MASK;
    stRegister.uptrAddress = u16PeripheralRegister;
    stRegister.u16Value = (uint16_t) SYSCTL_enENABLE_DIS;
    SYSCTL__u16ReadRegister(&stRegister);
    return ((SYSCTL_nENABLE) stRegister.u16Value);
}



