/**
 *
 * @file SYSCTL_RegisterPeripheral.c
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
#include "DriverLib/SYSCTL/Peripheral/RegisterPeripheral/SYSCTL_RegisterPeripheral.h"

uintptr_t SYSCTL__uptrBlockBaseAddress(void)
{
    return (SYSCTL_BASE);
}

uintptr_t SYSCTL_VECTOR__uptrBlockBaseAddress(void)
{
    return (SYSCTL_VECTOR_BASE);
}


