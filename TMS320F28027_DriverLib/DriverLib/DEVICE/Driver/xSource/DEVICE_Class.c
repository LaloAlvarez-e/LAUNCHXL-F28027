/**
 *
 * @file DEVICE_Class.c
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
#include "DriverLib/DEVICE/Driver/xHeader/DEVICE_Class.h"
#include "DriverLib/DEVICE/Driver/Intrinsics/DEVICE_Intrinsics.h"
#include "DriverLib/DEVICE/Peripheral/DEVICE_Peripheral.h"

DEVICE_nCLASS DEVICE__enGetClass(void)
{
    DEVICE_Register16Bits_t stRegister;

    stRegister.u16Shift = DEVICE_CLASS_R_ID_BIT;
    stRegister.u16Mask = DEVICE_CLASS_ID_MASK;
    stRegister.uptrAddress = DEVICE_CLASS_OFFSET;
    stRegister.u16Value = (uint16_t) DEVICE_enCLASS_F28020;
    DEVICE__u16ReadRegister(&stRegister);
    return ((DEVICE_nCLASS) stRegister.u16Value);
}



