/**
 *
 * @file PIE_RegisterPeripheral.h
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
 * @verbatim 27 jun. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 jun. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_PIE_PERIPHERAL_XHEADER_PIE_REGISTERPERIPHERAL_H_
#define DRIVERLIB_PIE_PERIPHERAL_XHEADER_PIE_REGISTERPERIPHERAL_H_

#include "DriverLib/PIE/Peripheral/xHeader/PIE_RegisterAddress.h"
#include "DriverLib/PIE/Peripheral/xHeader/PIE_StructPeripheral.h"
#include "DriverLib/MCU/xHeader/MCU_Variables.h"

#define PIE ((PIE_t*) PIE_BASE)
#define PIE_VECTOR ((PIE_VECTOR_t*) PIE_VECTOR_BASE)

/******************************************************************************************
 ************************************ 1 CTRL *********************************************
 ******************************************************************************************/
#define PIE_CTRL_R   (*(volatile uint16_t*) (PIE_BASE + PIE_CTRL_OFFSET))
#define PIE_CTRL     ((PIE_CTRL_t*) (PIE_BASE + PIE_CTRL_OFFSET))

/******************************************************************************************
 ************************************ 2 ACK *********************************************
 ******************************************************************************************/
#define PIE_ACK_R   (*(volatile uint16_t*) (PIE_BASE + PIE_ACK_OFFSET))
#define PIE_ACK     ((PIE_ACK_t*) (PIE_BASE + PIE_ACK_OFFSET))



#endif /* DRIVERLIB_PIE_PERIPHERAL_XHEADER_PIE_REGISTERPERIPHERAL_H_ */
