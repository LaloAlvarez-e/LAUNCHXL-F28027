/**
 *
 * @file TIMER_RegisterAddress.h
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

#ifndef DRIVERLIB_TIMER_PERIPHERAL_XHEADER_TIMER_REGISTERADDRESS_H_
#define DRIVERLIB_TIMER_PERIPHERAL_XHEADER_TIMER_REGISTERADDRESS_H_

#define TIMER_BASE (0x0C00U)

#define TIMER0_OFFSET (0x0000U)
#define TIMER1_OFFSET (0x0008U)
#define TIMER2_OFFSET (0x0010U)

#define TIMER0_BASE (TIMER_BASE + TIMER0_OFFSET)
#define TIMER1_BASE (TIMER_BASE + TIMER1_OFFSET)
#define TIMER2_BASE (TIMER_BASE + TIMER2_OFFSET)

#define TIMER_TIM_OFFSET (0x0000U)
#define TIMER_PRD_OFFSET (0x0002U)
#define TIMER_TCR_OFFSET (0x0004U)
#define TIMER_TPR_OFFSET (0x0006U)
#define TIMER_TPRH_OFFSET (0x0007U)

#endif /* DRIVERLIB_TIMER_PERIPHERAL_XHEADER_TIMER_REGISTERADDRESS_H_ */
