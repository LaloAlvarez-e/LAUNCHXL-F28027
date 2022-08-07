/**
 *
 * @file FLASH_OtpWait.h
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
 * @verbatim 7 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_FLASH_DRIVER_XHEADER_FLASH_OTPWAIT_H_
#define DRIVERLIB_FLASH_DRIVER_XHEADER_FLASH_OTPWAIT_H_

#include "DriverLib/FLASH/Peripheral/xHeader/FLASH_Enum.h"

#pragma  CODE_SECTION(FLASH__vSetOtpWait, ".TI.ramfunc")
#pragma  CODE_SECTION(FLASH__u16GetOtpWait, ".TI.ramfunc")

void FLASH__vSetOtpWait(uint16_t u16WaitCyclesArg);
uint16_t FLASH__u16GetOtpWait(void);

#endif /* DRIVERLIB_FLASH_DRIVER_XHEADER_FLASH_OTPWAIT_H_ */
