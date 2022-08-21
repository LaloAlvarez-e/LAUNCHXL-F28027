/**
 *
 * @file XINT_Counter.c
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
#include "DriverLib/XINT/Driver/xHeader/XINT_Counter.h"

#include "DriverLib/XINT/Driver/Intrinsics/XINT_Intrinsics.h"
#include "DriverLib/XINT/Peripheral/XINT_Peripheral.h"

uint16_t XINT__u16GetEdge(XINT_nMODULE enModuleArg)
{
    XINT_Register_t stRegister;

    stRegister.u16Shift = XINT_CTR_R_CTR_BIT;
    stRegister.u16Mask = XINT_CTR_CTR_MASK;
    stRegister.uptrAddress = XINT_CTR_OFFSET;
    XINT__u16ReadRegister(enModuleArg, &stRegister);
    return (stRegister.u16Value);
}





