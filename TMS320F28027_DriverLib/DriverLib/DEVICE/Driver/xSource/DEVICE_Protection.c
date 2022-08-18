/**
 *
 * @file DEVICE_Protection.c
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
 * @verbatim 3 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/DEVICE/Driver/xHeader/DEVICE_Protection.h"
#include "DriverLib/DEVICE/Driver/Intrinsics/DEVICE_Intrinsics.h"
#include "DriverLib/DEVICE/Peripheral/DEVICE_Peripheral.h"

void DEVICE__vSetWriteReadProtection(DEVICE_nSTATE enEnableArg)
{
    DEVICE_Register32Bits_t stRegister;

    stRegister.u16Shift = DEVICE_CNF_R_ENPROT_BIT;
    stRegister.u32Mask = DEVICE_CNF_ENPROT_MASK;
    stRegister.uptrAddress = DEVICE_CNF_OFFSET;
    stRegister.u32Value = (uint32_t) enEnableArg;
    DEVICE__vWriteRegister_32Bits(&stRegister);
}

void DEVICE__vEnableWriteReadProtection(void)
{
    DEVICE__vSetWriteReadProtection(DEVICE_enSTATE_ENA);
}

void DEVICE__vDisableWriteReadProtection(void)
{
    DEVICE__vSetWriteReadProtection(DEVICE_enSTATE_DIS);
}

DEVICE_nSTATE DEVICE__enGetWriteReadProtection(void)
{
    DEVICE_Register32Bits_t stRegister;

    stRegister.u16Shift = DEVICE_CNF_R_ENPROT_BIT;
    stRegister.u32Mask = DEVICE_CNF_ENPROT_MASK;
    stRegister.uptrAddress = DEVICE_CNF_OFFSET;
    stRegister.u32Value = (uint32_t) DEVICE_enSTATE_DIS;
    DEVICE__u32ReadRegister(&stRegister);
    return ((DEVICE_nSTATE) stRegister.u32Value);
}





