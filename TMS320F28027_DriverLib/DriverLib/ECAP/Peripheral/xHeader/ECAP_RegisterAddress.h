/**
 *
 * @file ECAP_RegisterAddress.h
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

#ifndef DRIVERLIB_ECAP_PERIPHERAL_XHEADER_ECAP_REGISTERADDRESS_H_
#define DRIVERLIB_ECAP_PERIPHERAL_XHEADER_ECAP_REGISTERADDRESS_H_

#define ECAP_BASE (0x6A00U)

#define ECAP1_OFFSET (0x0000U)

#define ECAP1_BASE (ECAP_BASE + ECAP1_OFFSET)

#define ECAP_TSCTR_OFFSET (0x0000U)
#define ECAP_CTRPHS_OFFSET (0x0002U)
#define ECAP_EVENTn_OFFSET (0x0004U)
#define ECAP_EVENT1_OFFSET (0x0004U)
#define ECAP_PERIOD_OFFSET (0x0004U)
#define ECAP_EVENT2_OFFSET (0x0006U)
#define ECAP_COMPARE_OFFSET (0x0006U)
#define ECAP_EVENT3_OFFSET (0x0008U)
#define ECAP_PERIOD_SHADOW_OFFSET (0x0008U)
#define ECAP_EVENT4_OFFSET (0x000AU)
#define ECAP_COMPARE_SHADOW_OFFSET (0x000AU)
#define ECAP_CTL1_OFFSET (0x0014U)
#define ECAP_CTL2_OFFSET (0x0015U)
#define ECAP_EINT_OFFSET (0x0016U)
#define ECAP_FLG_OFFSET (0x0017U)
#define ECAP_CLR_OFFSET (0x0018U)
#define ECAP_FRC_OFFSET (0x0019U)

#endif /* DRIVERLIB_ECAP_PERIPHERAL_XHEADER_ECAP_REGISTERADDRESS_H_ */
