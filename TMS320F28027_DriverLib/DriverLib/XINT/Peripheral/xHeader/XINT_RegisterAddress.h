/**
 *
 * @file XINT_RegisterAddress.h
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

#ifndef DRIVERLIB_XINT_PERIPHERAL_XHEADER_XINT_REGISTERADDRESS_H_
#define DRIVERLIB_XINT_PERIPHERAL_XHEADER_XINT_REGISTERADDRESS_H_

#define XINT_BASE (0x6FE0U)

#define XINT1_BASE (0x6FE0U)
#define XINT2_BASE (0x6FE1U)
#define XINT3_BASE (0x6FE2U)

#define XINT_SEL_OFFSET (0x0000U)
#define XINT_CR_OFFSET (0x0090U)
#define XINT_CTR_OFFSET (0x0098U)

#endif /* DRIVERLIB_XINT_PERIPHERAL_XHEADER_XINT_REGISTERADDRESS_H_ */
