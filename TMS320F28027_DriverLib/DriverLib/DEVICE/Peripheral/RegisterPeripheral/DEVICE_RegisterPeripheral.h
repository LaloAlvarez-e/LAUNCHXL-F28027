/**
 *
 * @file DEVICE_RegisterPeripheral.h
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

#ifndef DRIVERLIB_DEVICE_PERIPHERAL_REGISTERPERIPHERAL_DEVICE_REGISTERPERIPHERAL_H_
#define DRIVERLIB_DEVICE_PERIPHERAL_REGISTERPERIPHERAL_DEVICE_REGISTERPERIPHERAL_H_

#include "DriverLib/DEVICE/Peripheral/xHeader/DEVICE_RegisterAddress.h"
#include "DriverLib/DEVICE/Peripheral/xHeader/DEVICE_StructPeripheral.h"
#include "DriverLib/MCU/xHeader/MCU_Variables.h"

#define DEVICE ((DEVICE_t*) DEVICE_BASE)

/******************************************************************************************
 ************************************ 1 CNF *********************************************
 ******************************************************************************************/
#define DEVICE_CNF_R   (*(volatile uint32_t*) (DEVICE_BASE + DEVICE_CNF_OFFSET))
#define DEVICE_CNF     ((DEVICE_CNF_t*) (DEVICE_BASE + DEVICE_CNF_OFFSET))

/******************************************************************************************
 ************************************ 2 PART *********************************************
 ******************************************************************************************/
#define DEVICE_PART_R   (*(volatile uint16_t*) (DEVICE_BASE + DEVICE_PART_OFFSET))
#define DEVICE_PART     ((DEVICE_PART_t*) (DEVICE_BASE + DEVICE_PART_OFFSET))

/******************************************************************************************
 ************************************ 3 CLASS *********************************************
 ******************************************************************************************/
#define DEVICE_CLASS_R   (*(volatile uint16_t*) (DEVICE_BASE + DEVICE_CLASS_OFFSET))
#define DEVICE_CLASS     ((DEVICE_CLASS_t*) (DEVICE_BASE + DEVICE_CLASS_OFFSET))

/******************************************************************************************
 ************************************ 4 REV *********************************************
 ******************************************************************************************/
#define DEVICE_REV_R   (*(volatile uint16_t*) (DEVICE_BASE + DEVICE_REV_OFFSET))
#define DEVICE_REV     ((DEVICE_REV_t*) (DEVICE_BASE + DEVICE_REV_OFFSET))

uintptr_t DEVICE__uptrBlockBaseAddress(void);

#endif /* DRIVERLIB_DEVICE_PERIPHERAL_REGISTERPERIPHERAL_DEVICE_REGISTERPERIPHERAL_H_ */
