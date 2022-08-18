/**
 *
 * @file GPIO_RegisterPeripheral_AIO.h
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

#ifndef DRIVERLIB_GPIO_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_AIO_H_
#define DRIVERLIB_GPIO_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_AIO_H_

#include "DriverLib/GPIO/Peripheral/xHeader/GPIO_RegisterAddress.h"
#include "DriverLib/GPIO/Peripheral/xHeader/GPIO_StructPeripheral.h"
#include "DriverLib/MCU/xHeader/MCU_Variables.h"

#define AIO ((AIO_t*) AIO_BASE)

/******************************************************************************************
 ************************************ 4 MUX_LOW *********************************************
 ******************************************************************************************/
#define AIO_CONTROL_MUX_LOW_R   (*(volatile uint32_t*) (AIO_CONTROL_BASE + GPIO_CONTROL_MUX_LOW_OFFSET))
#define AIO_CONTROL_MUX_LOW     ((GPIO_PIN_LOW_t*) (AIO_CONTROL_BASE + GPIO_CONTROL_MUX_LOW_OFFSET))

#define AIO_MUX_LOW_R   (*(volatile uint32_t*) (AIO_CONTROL_BASE + GPIO_CONTROL_MUX_LOW_OFFSET))
#define AIO_MUX_LOW     ((GPIO_PIN_LOW_t*) (AIO_CONTROL_BASE + GPIO_CONTROL_MUX_LOW_OFFSET))

/******************************************************************************************
 ************************************ 6 DIR *********************************************
 ******************************************************************************************/
#define AIO_CONTROL_DIR_R   (*(volatile uint32_t*) (AIO_CONTROL_BASE + GPIO_CONTROL_DIR_OFFSET))
#define AIO_CONTROL_DIR     ((GPIO_PIN_t*) (AIO_CONTROL_BASE + GPIO_CONTROL_DIR_OFFSET))

#define AIO_DIR_R   (*(volatile uint32_t*) (AIO_CONTROL_BASE + GPIO_CONTROL_DIR_OFFSET))
#define AIO_DIR     ((GPIO_PIN_t*) (AIO_CONTROL_BASE + GPIO_CONTROL_DIR_OFFSET))



/******************************************************************************************
 ************************************ 1 DAT *********************************************
 ******************************************************************************************/
#define AIO_DATA_DAT_R   (*(volatile uint32_t*) (AIO_DATA_BASE + GPIO_DATA_DAT_OFFSET))
#define AIO_DATA_DAT     ((GPIO_PIN_t*) (AIO_DATA_BASE + GPIO_DATA_DAT_OFFSET))

#define AIO_DAT_R   (*(volatile uint32_t*) (AIO_DATA_BASE + GPIO_DATA_DAT_OFFSET))
#define AIO_DAT     ((GPIO_PIN_t*) (AIO_DATA_BASE + GPIO_DATA_DAT_OFFSET))

/******************************************************************************************
 ************************************ 2 SET *********************************************
 ******************************************************************************************/
#define AIO_DATA_SET_R   (*(volatile uint32_t*) (AIO_DATA_BASE + GPIO_DATA_SET_OFFSET))
#define AIO_DATA_SET     ((GPIO_PIN_t*) (AIO_DATA_BASE + GPIO_DATA_SET_OFFSET))

#define AIO_SET_R   (*(volatile uint32_t*) (AIO_DATA_BASE + GPIO_DATA_SET_OFFSET))
#define AIO_SET     ((GPIO_PIN_t*) (AIO_DATA_BASE + GPIO_DATA_SET_OFFSET))

/******************************************************************************************
 ************************************ 3 CLEAR *********************************************
 ******************************************************************************************/
#define AIO_DATA_CLEAR_R   (*(volatile uint32_t*) (AIO_DATA_BASE + GPIO_DATA_CLEAR_OFFSET))
#define AIO_DATA_CLEAR     ((GPIO_PIN_t*) (AIO_DATA_BASE + GPIO_DATA_CLEAR_OFFSET))

#define AIO_CLEAR_R   (*(volatile uint32_t*) (AIO_DATA_BASE + GPIO_DATA_CLEAR_OFFSET))
#define AIO_CLEAR     ((GPIO_PIN_t*) (AIO_DATA_BASE + GPIO_DATA_CLEAR_OFFSET))

/******************************************************************************************
 ************************************ 4 TOGGLE *********************************************
 ******************************************************************************************/
#define AIO_DATA_TOGGLE_R   (*(volatile uint32_t*) (AIO_DATA_BASE + GPIO_DATA_TOGGLE_OFFSET))
#define AIO_DATA_TOGGLE     ((GPIO_PIN_t*) (AIO_DATA_BASE + GPIO_DATA_TOGGLE_OFFSET))

#define AIO_TOGGLE_R   (*(volatile uint32_t*) (AIO_DATA_BASE + GPIO_DATA_TOGGLE_OFFSET))
#define AIO_TOGGLE     ((GPIO_PIN_t*) (AIO_DATA_BASE + GPIO_DATA_TOGGLE_OFFSET))


#endif /* DRIVERLIB_GPIO_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_AIO_H_ */
