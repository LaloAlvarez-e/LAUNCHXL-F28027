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

#define FLASH_BASE (0x0CE0U)
#define FLASH_VECTOR_BASE (0x0D00U)

#define FLASH_GROUP1_BASE (FLASH_BASE + 0x0002U)
#define FLASH_GROUP2_BASE (FLASH_BASE + 0x0004U)
#define FLASH_GROUP3_BASE (FLASH_BASE + 0x0006U)
#define FLASH_GROUP4_BASE (FLASH_BASE + 0x0008U)
#define FLASH_GROUP5_BASE (FLASH_BASE + 0x000AU)
#define FLASH_GROUP6_BASE (FLASH_BASE + 0x000CU)
#define FLASH_GROUP7_BASE (FLASH_BASE + 0x000EU)
#define FLASH_GROUP8_BASE (FLASH_BASE + 0x0010U)
#define FLASH_GROUP9_BASE (FLASH_BASE + 0x0012U)
#define FLASH_GROUP10_BASE (FLASH_BASE + 0x0014U)
#define FLASH_GROUP11_BASE (FLASH_BASE + 0x0016U)
#define FLASH_GROUP12_BASE (FLASH_BASE + 0x0018U)


#define FLASH_GROUP1_OFFSET (0x0002U)
#define FLASH_GROUP2_OFFSET (0x0004U)
#define FLASH_GROUP3_OFFSET (0x0006U)
#define FLASH_GROUP4_OFFSET (0x0008U)
#define FLASH_GROUP5_OFFSET (0x000AU)
#define FLASH_GROUP6_OFFSET (0x000CU)
#define FLASH_GROUP7_OFFSET (0x000EU)
#define FLASH_GROUP8_OFFSET (0x0010U)
#define FLASH_GROUP9_OFFSET (0x0012U)
#define FLASH_GROUP10_OFFSET (0x0014U)
#define FLASH_GROUP11_OFFSET (0x0016U)
#define FLASH_GROUP12_OFFSET (0x0018U)

#define FLASH_CTRL_OFFSET (0x0000U)
#define FLASH_ACK_OFFSET (0x0001U)

#define FLASH_IER_OFFSET (0x0000U)
#define FLASH_IFR_OFFSET (0x0001U)

#endif /* DRIVERLIB_FLASH_PERIPHERAL_XHEADER_FLASH_REGISTERADDRESS_H_ */
