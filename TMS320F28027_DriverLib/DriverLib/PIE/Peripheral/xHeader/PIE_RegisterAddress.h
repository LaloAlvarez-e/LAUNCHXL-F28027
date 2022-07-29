/**
 *
 * @file PIE_RegisterAddress.h
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

#ifndef DRIVERLIB_PIE_PERIPHERAL_XHEADER_PIE_REGISTERADDRESS_H_
#define DRIVERLIB_PIE_PERIPHERAL_XHEADER_PIE_REGISTERADDRESS_H_

#define PIE_BASE (0x0CE0U)
#define PIE_VECTOR_BASE (0x0D00U)

#define PIE_GROUP1_BASE (PIE_BASE + 0x0002U)
#define PIE_GROUP2_BASE (PIE_BASE + 0x0004U)
#define PIE_GROUP3_BASE (PIE_BASE + 0x0006U)
#define PIE_GROUP4_BASE (PIE_BASE + 0x0008U)
#define PIE_GROUP5_BASE (PIE_BASE + 0x000AU)
#define PIE_GROUP6_BASE (PIE_BASE + 0x000CU)
#define PIE_GROUP7_BASE (PIE_BASE + 0x000EU)
#define PIE_GROUP8_BASE (PIE_BASE + 0x0010U)
#define PIE_GROUP9_BASE (PIE_BASE + 0x0012U)
#define PIE_GROUP10_BASE (PIE_BASE + 0x0014U)
#define PIE_GROUP11_BASE (PIE_BASE + 0x0016U)
#define PIE_GROUP12_BASE (PIE_BASE + 0x0018U)


#define PIE_GROUP1_OFFSET (0x0002U)
#define PIE_GROUP2_OFFSET (0x0004U)
#define PIE_GROUP3_OFFSET (0x0006U)
#define PIE_GROUP4_OFFSET (0x0008U)
#define PIE_GROUP5_OFFSET (0x000AU)
#define PIE_GROUP6_OFFSET (0x000CU)
#define PIE_GROUP7_OFFSET (0x000EU)
#define PIE_GROUP8_OFFSET (0x0010U)
#define PIE_GROUP9_OFFSET (0x0012U)
#define PIE_GROUP10_OFFSET (0x0014U)
#define PIE_GROUP11_OFFSET (0x0016U)
#define PIE_GROUP12_OFFSET (0x0018U)

#define PIE_CTRL_OFFSET (0x0000U)
#define PIE_ACK_OFFSET (0x0001U)

#define PIE_IER_OFFSET (0x0000U)
#define PIE_IFR_OFFSET (0x0001U)

#endif /* DRIVERLIB_PIE_PERIPHERAL_XHEADER_PIE_REGISTERADDRESS_H_ */
