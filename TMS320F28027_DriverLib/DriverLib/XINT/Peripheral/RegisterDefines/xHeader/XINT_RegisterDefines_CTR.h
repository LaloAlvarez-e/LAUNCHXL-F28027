/**
 *
 * @file XINT_RegisterDefines_CTR.h
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

#ifndef DRIVERLIB_XINT_PERIPHERAL_REGISTERDEFINES_XHEADER_XINT_REGISTERDEFINES_CTR_H_
#define DRIVERLIB_XINT_PERIPHERAL_REGISTERDEFINES_XHEADER_XINT_REGISTERDEFINES_CTR_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 1 CTR *********************************************
 ******************************************************************************************/
/*----------*/
#define XINT_CTR_R_CTR_BIT    (0UL)

#define XINT_CTR_CTR_MASK    ((uint16_t) 0xFFFFUL)

#define XINT_CTR_R_CTR_MASK    (XINT_CTR_INTCTR_MASK << XINT_CTR_R_INTCTR_BIT)
/*----------*/

#endif /* DRIVERLIB_XINT_PERIPHERAL_REGISTERDEFINES_XHEADER_XINT_REGISTERDEFINES_CTR_H_ */
