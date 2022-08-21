/**
 *
 * @file XINT_RegisterPeripheral_XINT2.h
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

#ifndef DRIVERLIB_XINT_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_XINT_REGISTERPERIPHERAL_XINT2_H_
#define DRIVERLIB_XINT_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_XINT_REGISTERPERIPHERAL_XINT2_H_

#include "DriverLib/XINT/Peripheral/xHeader/XINT_RegisterAddress.h"
#include "DriverLib/XINT/Peripheral/xHeader/XINT_StructPeripheral.h"
#include "DriverLib/MCU/xHeader/MCU_Variables.h"

#define XINT2 ((XINT2_t*) XINT2_BASE)


/******************************************************************************************
 ************************************ 1 SEL *********************************************
 ******************************************************************************************/
#define XINT2_SEL_R   (*(volatile uint16_t*) (XINT2_BASE + XINT_SEL_OFFSET))
#define XINT2_SEL     ((XINT_SEL_t*) (XINT2_BASE + XINT_SEL_OFFSET))

/******************************************************************************************
 ************************************ 2 CR *********************************************
 ******************************************************************************************/
#define XINT2_CR_R   (*(volatile uint16_t*) (XINT2_BASE + XINT_CR_OFFSET))
#define XINT2_CR     ((XINT_CR_t*) (XINT2_BASE + XINT_CR_OFFSET))

/******************************************************************************************
 ************************************ 3 CTR *********************************************
 ******************************************************************************************/
#define XINT2_CTR_R   (*(volatile uint16_t*) (XINT2_BASE + XINT_CTR_OFFSET))
#define XINT2_CTR     ((XINT_CTR_t*) (XINT2_BASE + XINT_CTR_OFFSET))





#endif /* DRIVERLIB_XINT_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_XINT_REGISTERPERIPHERAL_XINT2_H_ */
