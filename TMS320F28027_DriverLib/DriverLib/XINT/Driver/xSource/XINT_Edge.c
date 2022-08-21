/**
 *
 * @file XINT_Edge.c
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
#include "DriverLib/XINT/Driver/xHeader/XINT_Edge.h"

#include "DriverLib/XINT/Driver/Intrinsics/XINT_Intrinsics.h"
#include "DriverLib/XINT/Peripheral/XINT_Peripheral.h"

void XINT__vSetEdge(XINT_nMODULE enModuleArg, XINT_nEDGE enEdgeArg)
{
    XINT_Register_t stRegister;

    stRegister.u16Shift = XINT_CR_R_POLARITY_BIT;
    stRegister.u16Mask = XINT_CR_POLARITY_MASK;
    stRegister.uptrAddress = XINT_CR_OFFSET;
    stRegister.u16Value = (uint16_t) enEdgeArg;
    XINT__vWriteRegister(enModuleArg, &stRegister);
}

XINT_nEDGE XINT__enGetEdge(XINT_nMODULE enModuleArg)
{
    XINT_Register_t stRegister;


    stRegister.u16Shift = XINT_CR_R_POLARITY_BIT;
    stRegister.u16Mask = XINT_CR_POLARITY_MASK;
    stRegister.uptrAddress = XINT_CR_OFFSET;
    XINT__u16ReadRegister(enModuleArg, &stRegister);
    return ((XINT_nEDGE) stRegister.u16Value);
}






