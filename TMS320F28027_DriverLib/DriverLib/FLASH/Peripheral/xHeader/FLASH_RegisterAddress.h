/**
 *
 * @file FLASH_RegisterAddress.h
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

#ifndef DRIVERLIB_FLASH_PERIPHERAL_XHEADER_FLASH_REGISTERADDRESS_H_
#define DRIVERLIB_FLASH_PERIPHERAL_XHEADER_FLASH_REGISTERADDRESS_H_

#define FLASH_BASE (0x0A80U)

#define FLASH_OPT_OFFSET (0x0000U)
#define FLASH_PWR_OFFSET (0x0002U)
#define FLASH_STATUS_OFFSET (0x0003U)
#define FLASH_STDBYWAIT_OFFSET (0x0004U)
#define FLASH_ACTIVEWAIT_OFFSET (0x0005U)
#define FLASH_BANKWAIT_OFFSET (0x0006U)
#define FLASH_OTPWAIT_OFFSET (0x0007U)

#endif /* DRIVERLIB_FLASH_PERIPHERAL_XHEADER_FLASH_REGISTERADDRESS_H_ */
