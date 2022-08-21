/**
 *
 * @file XINT_Init.c
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
#include "DriverLib/XINT/Driver/xHeader/XINT_Init.h"

#include "DriverLib/XINT/Driver/Intrinsics/XINT_Intrinsics.h"


void XINT__vInit(void)
{
    MCU__pvfIRQVectorHandler_t pfvVector;

    pfvVector = XINT__pvfGetIRQVectorHandler(XINT_enMODULE_1);
    XINT__enRegisterIRQVectorHandler(pfvVector, XINT_enMODULE_1);
    pfvVector = XINT__pvfGetIRQVectorHandler(XINT_enMODULE_2);
    XINT__enRegisterIRQVectorHandler(pfvVector, XINT_enMODULE_2);
    pfvVector = XINT__pvfGetIRQVectorHandler(XINT_enMODULE_3);
    XINT__enRegisterIRQVectorHandler(pfvVector, XINT_enMODULE_3);
}




