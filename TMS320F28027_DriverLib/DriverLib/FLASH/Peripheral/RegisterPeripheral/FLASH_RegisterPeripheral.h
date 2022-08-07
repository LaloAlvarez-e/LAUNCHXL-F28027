/**
 *
 * @file FLASH_RegisterPeripheral.h
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

#ifndef DRIVERLIB_FLASH_PERIPHERAL_REGISTERPERIPHERAL_FLASH_REGISTERPERIPHERAL_H_
#define DRIVERLIB_FLASH_PERIPHERAL_REGISTERPERIPHERAL_FLASH_REGISTERPERIPHERAL_H_

#include "DriverLib/FLASH/Peripheral/xHeader/FLASH_RegisterAddress.h"
#include "DriverLib/FLASH/Peripheral/xHeader/FLASH_StructPeripheral.h"
#include "DriverLib/MCU/xHeader/MCU_Variables.h"

#define FLASH ((FLASH_t*) FLASH_BASE)

/******************************************************************************************
 ************************************ 1 OPT *********************************************
 ******************************************************************************************/
#define FLASH_OPT_R   (*(volatile uint16_t*) (FLASH_BASE + FLASH_OPT_OFFSET))
#define FLASH_OPT     ((FLASH_OPT_t*) (FLASH_BASE + FLASH_OPT_OFFSET))

/******************************************************************************************
 ************************************ 2 PWR *********************************************
 ******************************************************************************************/
#define FLASH_PWR_R   (*(volatile uint16_t*) (FLASH_BASE + FLASH_PWR_OFFSET))
#define FLASH_PWR     ((FLASH_PWR_t*) (FLASH_BASE + FLASH_PWR_OFFSET))

/******************************************************************************************
 ************************************ 3 STATUS *********************************************
 ******************************************************************************************/
#define FLASH_STATUS_R   (*(volatile uint16_t*) (FLASH_BASE + FLASH_STATUS_OFFSET))
#define FLASH_STATUS     ((FLASH_STATUS_t*) (FLASH_BASE + FLASH_STATUS_OFFSET))

/******************************************************************************************
 ************************************ 4 STDBYWAIT *********************************************
 ******************************************************************************************/
#define FLASH_STDBYWAIT_R   (*(volatile uint16_t*) (FLASH_BASE + FLASH_STDBYWAIT_OFFSET))
#define FLASH_STDBYWAIT     ((FLASH_STDBYWAIT_t*) (FLASH_BASE + FLASH_STDBYWAIT_OFFSET))

/******************************************************************************************
 ************************************ 5 ACTIVEWAIT *********************************************
 ******************************************************************************************/
#define FLASH_ACTIVEWAIT_R   (*(volatile uint16_t*) (FLASH_BASE + FLASH_ACTIVEWAIT_OFFSET))
#define FLASH_ACTIVEWAIT     ((FLASH_ACTIVEWAIT_t*) (FLASH_BASE + FLASH_ACTIVEWAIT_OFFSET))

/******************************************************************************************
 ************************************ 6 BANKWAIT *********************************************
 ******************************************************************************************/
#define FLASH_BANKWAIT_R   (*(volatile uint16_t*) (FLASH_BASE + FLASH_BANKWAIT_OFFSET))
#define FLASH_BANKWAIT     ((FLASH_BANKWAIT_t*) (FLASH_BASE + FLASH_BANKWAIT_OFFSET))

/******************************************************************************************
 ************************************ 7 OTPWAIT *********************************************
 ******************************************************************************************/
#define FLASH_OTPWAIT_R   (*(volatile uint16_t*) (FLASH_BASE + FLASH_OTPWAIT_OFFSET))
#define FLASH_OTPWAIT     ((FLASH_OTPWAIT_t*) (FLASH_BASE + FLASH_OTPWAIT_OFFSET))

#pragma  CODE_SECTION(FLASH__uptrBlockBaseAddress, ".TI.ramfunc")
uintptr_t FLASH__uptrBlockBaseAddress(void);

#endif /* DRIVERLIB_FLASH_PERIPHERAL_REGISTERPERIPHERAL_FLASH_REGISTERPERIPHERAL_H_ */
