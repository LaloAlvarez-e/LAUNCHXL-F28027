/**
 *
 * @file GPIO_RegisterAddress.h
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

#ifndef DRIVERLIB_GPIO_PERIPHERAL_XHEADER_GPIO_REGISTERADDRESS_H_
#define DRIVERLIB_GPIO_PERIPHERAL_XHEADER_GPIO_REGISTERADDRESS_H_

#define GPIO_BASE (0x6F80U)

#define GPIOA_BASE (0x6F80U)
#define GPIOB_BASE (0x6F80U)
#define AIO_BASE (0x6F80U)

#define GPIOA_CONTROL_BASE (0x6F80U)
#define GPIOB_CONTROL_BASE (0x6F90U)
#define AIO_CONTROL_BASE (0x6FB0U)

#define GPIOA_DATA_BASE (0x6FC0U)
#define GPIOB_DATA_BASE (0x6FC8U)
#define AIO_DATA_BASE (0x6FD8U)

#define GPIO_CONTROL_CTRL_OFFSET (0x0000U)
#define GPIO_CONTROL_QSEL_LOW_OFFSET (0x0002U)
#define GPIO_CONTROL_QSEL_HIGH_OFFSET (0x0004U)
#define GPIO_CONTROL_MUX_LOW_OFFSET (0x0006U)
#define GPIO_CONTROL_MUX_HIGH_OFFSET (0x0008U)
#define GPIO_CONTROL_DIR_OFFSET (0x000AU)
#define GPIO_CONTROL_PUD_OFFSET (0x000CU)

#define GPIO_DATA_DAT_OFFSET (0x0000U)
#define GPIO_DATA_SET_OFFSET (0x0002U)
#define GPIO_DATA_CLEAR_OFFSET (0x0004U)
#define GPIO_DATA_TOGGLE_OFFSET (0x0006U)

#endif /* DRIVERLIB_GPIO_PERIPHERAL_XHEADER_GPIO_REGISTERADDRESS_H_ */
