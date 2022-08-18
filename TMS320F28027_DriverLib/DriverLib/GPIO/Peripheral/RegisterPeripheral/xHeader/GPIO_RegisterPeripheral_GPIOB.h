/**
 *
 * @file GPIO_RegisterPeripheral_GPIOB.h
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
 * @verbatim 17 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_GPIO_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_GPIOB_H_
#define DRIVERLIB_GPIO_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_GPIOB_H_

#include "DriverLib/GPIO/Peripheral/xHeader/GPIO_RegisterAddress.h"
#include "DriverLib/GPIO/Peripheral/xHeader/GPIO_StructPeripheral.h"
#include "DriverLib/MCU/xHeader/MCU_Variables.h"

#define GPIOB ((GPIOB_t*) GPIOB_BASE)

/******************************************************************************************
 ************************************ 1 CTRL *********************************************
 ******************************************************************************************/
#define GPIOB_CONTROL_CTRL_R   (*(volatile uint32_t*) (GPIOB_CONTROL_BASE + GPIO_CONTROL_CTRL_OFFSET))
#define GPIOB_CONTROL_CTRL     ((GPIO_CTRL_t*) (GPIOB_CONTROL_BASE + GPIO_CONTROL_CTRL_OFFSET))

#define GPIOB_CTRL_R   (*(volatile uint32_t*) (GPIOB_CONTROL_BASE + GPIO_CONTROL_CTRL_OFFSET))
#define GPIOB_CTRL     ((GPIO_CTRL_t*) (GPIOB_CONTROL_BASE + GPIO_CONTROL_CTRL_OFFSET))

/******************************************************************************************
 ************************************ 2 QSEL_LOW *********************************************
 ******************************************************************************************/
#define GPIOB_CONTROL_QSEL_LOW_R   (*(volatile uint32_t*) (GPIOB_CONTROL_BASE + GPIO_CONTROL_QSEL_LOW_OFFSET))
#define GPIOB_CONTROL_QSEL_LOW     ((GPIO_PIN_LOW_t*) (GPIOB_CONTROL_BASE + GPIO_CONTROL_QSEL_LOW_OFFSET))

#define GPIOB_QSEL_LOW_R   (*(volatile uint32_t*) (GPIOB_CONTROL_BASE + GPIO_CONTROL_QSEL_LOW_OFFSET))
#define GPIOB_QSEL_LOW     ((GPIO_PIN_LOW_t*) (GPIOB_CONTROL_BASE + GPIO_CONTROL_QSEL_LOW_OFFSET))

/******************************************************************************************
 ************************************ 4 MUX_LOW *********************************************
 ******************************************************************************************/
#define GPIOB_CONTROL_MUX_LOW_R   (*(volatile uint32_t*) (GPIOB_CONTROL_BASE + GPIO_CONTROL_MUX_LOW_OFFSET))
#define GPIOB_CONTROL_MUX_LOW     ((GPIO_PIN_LOW_t*) (GPIOB_CONTROL_BASE + GPIO_CONTROL_MUX_LOW_OFFSET))

#define GPIOB_MUX_LOW_R   (*(volatile uint32_t*) (GPIOB_CONTROL_BASE + GPIO_CONTROL_MUX_LOW_OFFSET))
#define GPIOB_MUX_LOW     ((GPIO_PIN_LOW_t*) (GPIOB_CONTROL_BASE + GPIO_CONTROL_MUX_LOW_OFFSET))

/******************************************************************************************
 ************************************ 6 DIR *********************************************
 ******************************************************************************************/
#define GPIOB_CONTROL_DIR_R   (*(volatile uint32_t*) (GPIOB_CONTROL_BASE + GPIO_CONTROL_DIR_OFFSET))
#define GPIOB_CONTROL_DIR     ((GPIO_PIN_t*) (GPIOB_CONTROL_BASE + GPIO_CONTROL_DIR_OFFSET))

#define GPIOB_DIR_R   (*(volatile uint32_t*) (GPIOB_CONTROL_BASE + GPIO_CONTROL_DIR_OFFSET))
#define GPIOB_DIR     ((GPIO_PIN_t*) (GPIOB_CONTROL_BASE + GPIO_CONTROL_DIR_OFFSET))

/******************************************************************************************
 ************************************ 7 PUD *********************************************
 ******************************************************************************************/
#define GPIOB_CONTROL_PUD_R   (*(volatile uint32_t*) (GPIOB_CONTROL_BASE + GPIO_CONTROL_PUD_OFFSET))
#define GPIOB_CONTROL_PUD     ((GPIO_PIN_t*) (GPIOB_CONTROL_BASE + GPIO_CONTROL_PUD_OFFSET))

#define GPIOB_PUD_R   (*(volatile uint32_t*) (GPIOB_CONTROL_BASE + GPIO_CONTROL_PUD_OFFSET))
#define GPIOB_PUD     ((GPIO_PIN_t*) (GPIOB_CONTROL_BASE + GPIO_CONTROL_PUD_OFFSET))




/******************************************************************************************
 ************************************ 1 DAT *********************************************
 ******************************************************************************************/
#define GPIOB_DATA_DAT_R   (*(volatile uint32_t*) (GPIOB_DATA_BASE + GPIO_DATA_DAT_OFFSET))
#define GPIOB_DATA_DAT     ((GPIO_PIN_t*) (GPIOB_DATA_BASE + GPIO_DATA_DAT_OFFSET))

#define GPIOB_DAT_R   (*(volatile uint32_t*) (GPIOB_DATA_BASE + GPIO_DATA_DAT_OFFSET))
#define GPIOB_DAT     ((GPIO_PIN_t*) (GPIOB_DATA_BASE + GPIO_DATA_DAT_OFFSET))

/******************************************************************************************
 ************************************ 2 SET *********************************************
 ******************************************************************************************/
#define GPIOB_DATA_SET_R   (*(volatile uint32_t*) (GPIOB_DATA_BASE + GPIO_DATA_SET_OFFSET))
#define GPIOB_DATA_SET     ((GPIO_PIN_t*) (GPIOB_DATA_BASE + GPIO_DATA_SET_OFFSET))

#define GPIOB_SET_R   (*(volatile uint32_t*) (GPIOB_DATA_BASE + GPIO_DATA_SET_OFFSET))
#define GPIOB_SET     ((GPIO_PIN_t*) (GPIOB_DATA_BASE + GPIO_DATA_SET_OFFSET))

/******************************************************************************************
 ************************************ 3 CLEAR *********************************************
 ******************************************************************************************/
#define GPIOB_DATA_CLEAR_R   (*(volatile uint32_t*) (GPIOB_DATA_BASE + GPIO_DATA_CLEAR_OFFSET))
#define GPIOB_DATA_CLEAR     ((GPIO_PIN_t*) (GPIOB_DATA_BASE + GPIO_DATA_CLEAR_OFFSET))

#define GPIOB_CLEAR_R   (*(volatile uint32_t*) (GPIOB_DATA_BASE + GPIO_DATA_CLEAR_OFFSET))
#define GPIOB_CLEAR     ((GPIO_PIN_t*) (GPIOB_DATA_BASE + GPIO_DATA_CLEAR_OFFSET))

/******************************************************************************************
 ************************************ 4 TOGGLE *********************************************
 ******************************************************************************************/
#define GPIOB_DATA_TOGGLE_R   (*(volatile uint32_t*) (GPIOB_DATA_BASE + GPIO_DATA_TOGGLE_OFFSET))
#define GPIOB_DATA_TOGGLE     ((GPIO_PIN_t*) (GPIOB_DATA_BASE + GPIO_DATA_TOGGLE_OFFSET))

#define GPIOB_TOGGLE_R   (*(volatile uint32_t*) (GPIOB_DATA_BASE + GPIO_DATA_TOGGLE_OFFSET))
#define GPIOB_TOGGLE     ((GPIO_PIN_t*) (GPIOB_DATA_BASE + GPIO_DATA_TOGGLE_OFFSET))


#endif /* DRIVERLIB_GPIO_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_GPIOB_H_ */
