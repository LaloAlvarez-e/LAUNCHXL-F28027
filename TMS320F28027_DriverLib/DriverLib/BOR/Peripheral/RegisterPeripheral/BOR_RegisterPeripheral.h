/**
 *
 * @file BOR_RegisterPeripheral.h
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
 * @verbatim 29 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_BOR_PERIPHERAL_REGISTERPERIPHERAL_BOR_REGISTERPERIPHERAL_H_
#define DRIVERLIB_BOR_PERIPHERAL_REGISTERPERIPHERAL_BOR_REGISTERPERIPHERAL_H_

#include "DriverLib/BOR/Peripheral/xHeader/BOR_RegisterAddress.h"
#include "DriverLib/BOR/Peripheral/xHeader/BOR_StructPeripheral.h"
#include "DriverLib/MCU/xHeader/MCU_Variables.h"

#define BOR ((BOR_t*) BOR_BASE)

/******************************************************************************************
 ************************************ 1 CFG *********************************************
 ******************************************************************************************/
#define BOR_CFG_R   (*(volatile uint16_t*) (BOR_BASE + BOR_CFG_OFFSET))
#define BOR_CFG     ((BOR_CFG_t*) (BOR_BASE + BOR_CFG_OFFSET))

uintptr_t BOR__uptrBlockBaseAddress(void);



#endif /* DRIVERLIB_BOR_PERIPHERAL_REGISTERPERIPHERAL_BOR_REGISTERPERIPHERAL_H_ */
