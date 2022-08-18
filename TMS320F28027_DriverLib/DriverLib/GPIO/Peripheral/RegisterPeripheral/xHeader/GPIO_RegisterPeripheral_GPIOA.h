/**
 *
 * @file GPIO_RegisterPeripheral_GPIOA.h
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

#ifndef DRIVERLIB_GPIO_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_GPIOA_H_
#define DRIVERLIB_GPIO_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_GPIOA_H_

#include "DriverLib/GPIO/Peripheral/xHeader/GPIO_RegisterAddress.h"
#include "DriverLib/GPIO/Peripheral/xHeader/GPIO_StructPeripheral.h"
#include "DriverLib/MCU/xHeader/MCU_Variables.h"

#define GPIOA ((GPIOA_t*) GPIOA_BASE)

/******************************************************************************************
 ************************************ 1 CTRL *********************************************
 ******************************************************************************************/
#define GPIOA_CONTROL_CTRL_R   (*(volatile uint32_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_CTRL_OFFSET))
#define GPIOA_CONTROL_CTRL     ((GPIO_CTRL_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_CTRL_OFFSET))

#define GPIOA_CTRL_R   (*(volatile uint32_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_CTRL_OFFSET))
#define GPIOA_CTRL     ((GPIO_CTRL_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_CTRL_OFFSET))

/******************************************************************************************
 ************************************ 2 QSEL_LOW *********************************************
 ******************************************************************************************/
#define GPIOA_CONTROL_QSEL_LOW_R   (*(volatile uint32_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_QSEL_LOW_OFFSET))
#define GPIOA_CONTROL_QSEL_LOW     ((GPIO_PIN_LOW_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_QSEL_LOW_OFFSET))

#define GPIOA_QSEL_LOW_R   (*(volatile uint32_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_QSEL_LOW_OFFSET))
#define GPIOA_QSEL_LOW     ((GPIO_PIN_LOW_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_QSEL_LOW_OFFSET))

/******************************************************************************************
 ************************************ 3 QSEL_HIGH *********************************************
 ******************************************************************************************/
#define GPIOA_CONTROL_QSEL_HIGH_R   (*(volatile uint32_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_QSEL_HIGH_OFFSET))
#define GPIOA_CONTROL_QSEL_HIGH     ((GPIO_PIN_HIGH_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_QSEL_HIGH_OFFSET))

#define GPIOA_QSEL_HIGH_R   (*(volatile uint32_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_QSEL_HIGH_OFFSET))
#define GPIOA_QSEL_HIGH     ((GPIO_PIN_HIGH_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_QSEL_HIGH_OFFSET))

/******************************************************************************************
 ************************************ 4 MUX_LOW *********************************************
 ******************************************************************************************/
#define GPIOA_CONTROL_MUX_LOW_R   (*(volatile uint32_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_MUX_LOW_OFFSET))
#define GPIOA_CONTROL_MUX_LOW     ((GPIO_PIN_LOW_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_MUX_LOW_OFFSET))

#define GPIOA_MUX_LOW_R   (*(volatile uint32_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_MUX_LOW_OFFSET))
#define GPIOA_MUX_LOW     ((GPIO_PIN_LOW_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_MUX_LOW_OFFSET))

/******************************************************************************************
 ************************************ 5 MUX_HIGH *********************************************
 ******************************************************************************************/
#define GPIOA_CONTROL_MUX_HIGH_R   (*(volatile uint32_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_MUX_HIGH_OFFSET))
#define GPIOA_CONTROL_MUX_HIGH     ((GPIO_PIN_HIGH_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_MUX_HIGH_OFFSET))

#define GPIOA_MUX_HIGH_R   (*(volatile uint32_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_MUX_HIGH_OFFSET))
#define GPIOA_MUX_HIGH     ((GPIO_PIN_HIGH_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_MUX_HIGH_OFFSET))

/******************************************************************************************
 ************************************ 6 DIR *********************************************
 ******************************************************************************************/
#define GPIOA_CONTROL_DIR_R   (*(volatile uint32_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_DIR_OFFSET))
#define GPIOA_CONTROL_DIR     ((GPIO_PIN_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_DIR_OFFSET))

#define GPIOA_DIR_R   (*(volatile uint32_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_DIR_OFFSET))
#define GPIOA_DIR     ((GPIO_PIN_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_DIR_OFFSET))

/******************************************************************************************
 ************************************ 7 PUD *********************************************
 ******************************************************************************************/
#define GPIOA_CONTROL_PUD_R   (*(volatile uint32_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_PUD_OFFSET))
#define GPIOA_CONTROL_PUD     ((GPIO_PIN_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_PUD_OFFSET))

#define GPIOA_PUD_R   (*(volatile uint32_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_PUD_OFFSET))
#define GPIOA_PUD     ((GPIO_PIN_t*) (GPIOA_CONTROL_BASE + GPIO_CONTROL_PUD_OFFSET))




/******************************************************************************************
 ************************************ 1 DAT *********************************************
 ******************************************************************************************/
#define GPIOA_DATA_DAT_R   (*(volatile uint32_t*) (GPIOA_DATA_BASE + GPIO_DATA_DAT_OFFSET))
#define GPIOA_DATA_DAT     ((GPIO_PIN_t*) (GPIOA_DATA_BASE + GPIO_DATA_DAT_OFFSET))

#define GPIOA_DAT_R   (*(volatile uint32_t*) (GPIOA_DATA_BASE + GPIO_DATA_DAT_OFFSET))
#define GPIOA_DAT     ((GPIO_PIN_t*) (GPIOA_DATA_BASE + GPIO_DATA_DAT_OFFSET))

/******************************************************************************************
 ************************************ 2 SET *********************************************
 ******************************************************************************************/
#define GPIOA_DATA_SET_R   (*(volatile uint32_t*) (GPIOA_DATA_BASE + GPIO_DATA_SET_OFFSET))
#define GPIOA_DATA_SET     ((GPIO_PIN_t*) (GPIOA_DATA_BASE + GPIO_DATA_SET_OFFSET))

#define GPIOA_SET_R   (*(volatile uint32_t*) (GPIOA_DATA_BASE + GPIO_DATA_SET_OFFSET))
#define GPIOA_SET     ((GPIO_PIN_t*) (GPIOA_DATA_BASE + GPIO_DATA_SET_OFFSET))

/******************************************************************************************
 ************************************ 3 CLEAR *********************************************
 ******************************************************************************************/
#define GPIOA_DATA_CLEAR_R   (*(volatile uint32_t*) (GPIOA_DATA_BASE + GPIO_DATA_CLEAR_OFFSET))
#define GPIOA_DATA_CLEAR     ((GPIO_PIN_t*) (GPIOA_DATA_BASE + GPIO_DATA_CLEAR_OFFSET))

#define GPIOA_CLEAR_R   (*(volatile uint32_t*) (GPIOA_DATA_BASE + GPIO_DATA_CLEAR_OFFSET))
#define GPIOA_CLEAR     ((GPIO_PIN_t*) (GPIOA_DATA_BASE + GPIO_DATA_CLEAR_OFFSET))

/******************************************************************************************
 ************************************ 4 TOGGLE *********************************************
 ******************************************************************************************/
#define GPIOA_DATA_TOGGLE_R   (*(volatile uint32_t*) (GPIOA_DATA_BASE + GPIO_DATA_TOGGLE_OFFSET))
#define GPIOA_DATA_TOGGLE     ((GPIO_PIN_t*) (GPIOA_DATA_BASE + GPIO_DATA_TOGGLE_OFFSET))

#define GPIOA_TOGGLE_R   (*(volatile uint32_t*) (GPIOA_DATA_BASE + GPIO_DATA_TOGGLE_OFFSET))
#define GPIOA_TOGGLE     ((GPIO_PIN_t*) (GPIOA_DATA_BASE + GPIO_DATA_TOGGLE_OFFSET))





/******************************************************************************************
 ************************************ 1 XINT1SEL *********************************************
 ******************************************************************************************/
#define GPIOA_INTERRUPT_XINT1SEL_R   (*(volatile uint16_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT1SEL_OFFSET))
#define GPIOA_INTERRUPT_XINT1SEL     ((GPIO_XINTnSEL_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT1SEL_OFFSET))

#define GPIOA_XINT1SEL_R   (*(volatile uint16_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT1SEL_OFFSET))
#define GPIOA_XINT1SEL     ((GPIO_XINTnSEL_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT1SEL_OFFSET))

/******************************************************************************************
 ************************************ 2 XINT2SEL *********************************************
 ******************************************************************************************/
#define GPIOA_INTERRUPT_XINT2SEL_R   (*(volatile uint16_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT2SEL_OFFSET))
#define GPIOA_INTERRUPT_XINT2SEL     ((GPIO_XINTnSEL_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT2SEL_OFFSET))

#define GPIOA_XINT2SEL_R   (*(volatile uint16_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT2SEL_OFFSET))
#define GPIOA_XINT2SEL     ((GPIO_XINTnSEL_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT2SEL_OFFSET))

/******************************************************************************************
 ************************************ 3 XINT3SEL *********************************************
 ******************************************************************************************/
#define GPIOA_INTERRUPT_XINT3SEL_R   (*(volatile uint16_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT3SEL_OFFSET))
#define GPIOA_INTERRUPT_XINT3SEL     ((GPIO_XINTnSEL_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT3SEL_OFFSET))

#define GPIOA_XINT3SEL_R   (*(volatile uint16_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT3SEL_OFFSET))
#define GPIOA_XINT3SEL     ((GPIO_XINTnSEL_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT3SEL_OFFSET))

/******************************************************************************************
 ************************************ 3 LPMSEL *********************************************
 ******************************************************************************************/
#define GPIOA_INTERRUPT_LPMSEL_R   (*(volatile uint32_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_LPMSEL_OFFSET))
#define GPIOA_INTERRUPT_LPMSEL     ((GPIO_PIN_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_LPMSEL_OFFSET))

#define GPIOA_LPMSEL_R   (*(volatile uint32_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_LPMSEL_OFFSET))
#define GPIOA_LPMSEL     ((GPIO_PIN_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_LPMSEL_OFFSET))


/******************************************************************************************
 ************************************ 4 XINT1CR *********************************************
 ******************************************************************************************/
#define GPIOA_INTERRUPT_XINT1CR_R   (*(volatile uint16_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT1CR_OFFSET))
#define GPIOA_INTERRUPT_XINT1CR     ((GPIO_XINTnCR_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT1CR_OFFSET))

#define GPIOA_XINT1CR_R   (*(volatile uint16_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT1CR_OFFSET))
#define GPIOA_XINT1CR     ((GPIO_XINTnCR_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT1CR_OFFSET))

/******************************************************************************************
 ************************************ 5 XINT2CR *********************************************
 ******************************************************************************************/
#define GPIOA_INTERRUPT_XINT2CR_R   (*(volatile uint16_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT2CR_OFFSET))
#define GPIOA_INTERRUPT_XINT2CR     ((GPIO_XINTnCR_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT2CR_OFFSET))

#define GPIOA_XINT2CR_R   (*(volatile uint16_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT2CR_OFFSET))
#define GPIOA_XINT2CR     ((GPIO_XINTnCR_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT2CR_OFFSET))

/******************************************************************************************
 ************************************ 6 XINT3CR *********************************************
 ******************************************************************************************/
#define GPIOA_INTERRUPT_XINT3CR_R   (*(volatile uint16_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT3CR_OFFSET))
#define GPIOA_INTERRUPT_XINT3CR     ((GPIO_XINTnCR_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT3CR_OFFSET))

#define GPIOA_XINT3CR_R   (*(volatile uint16_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT3CR_OFFSET))
#define GPIOA_XINT3CR     ((GPIO_XINTnCR_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT3CR_OFFSET))

/******************************************************************************************
 ************************************ 7 XINT1CTR *********************************************
 ******************************************************************************************/
#define GPIOA_INTERRUPT_XINT1CTR_R   (*(volatile uint16_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT1CTR_OFFSET))
#define GPIOA_INTERRUPT_XINT1CTR     ((GPIO_XINTnCTR_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT1CTR_OFFSET))

#define GPIOA_XINT1CTR_R   (*(volatile uint16_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT1CTR_OFFSET))
#define GPIOA_XINT1CTR     ((GPIO_XINTnCTR_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT1CTR_OFFSET))

/******************************************************************************************
 ************************************ 8 XINT2CTR *********************************************
 ******************************************************************************************/
#define GPIOA_INTERRUPT_XINT2CTR_R   (*(volatile uint16_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT2CTR_OFFSET))
#define GPIOA_INTERRUPT_XINT2CTR     ((GPIO_XINTnCTR_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT2CTR_OFFSET))

#define GPIOA_XINT2CTR_R   (*(volatile uint16_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT2CTR_OFFSET))
#define GPIOA_XINT2CTR     ((GPIO_XINTnCTR_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT2CTR_OFFSET))

/******************************************************************************************
 ************************************ 9 XINT3CTR *********************************************
 ******************************************************************************************/
#define GPIOA_INTERRUPT_XINT3CTR_R   (*(volatile uint16_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT3CTR_OFFSET))
#define GPIOA_INTERRUPT_XINT3CTR     ((GPIO_XINTnCTR_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT3CTR_OFFSET))

#define GPIOA_XINT3CTR_R   (*(volatile uint16_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT3CTR_OFFSET))
#define GPIOA_XINT3CTR     ((GPIO_XINTnCTR_t*) (GPIOA_INTERRUPT_BASE + GPIO_INTERRUPT_XINT3CTR_OFFSET))


#endif /* DRIVERLIB_GPIO_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_GPIOA_H_ */
