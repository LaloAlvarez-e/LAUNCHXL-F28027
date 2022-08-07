/**
 *
 * @file FLASH_StructPeripheral.h
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

#ifndef DRIVERLIB_FLASH_PERIPHERAL_XHEADER_FLASH_STRUCTPERIPHERAL_H_
#define DRIVERLIB_FLASH_PERIPHERAL_XHEADER_FLASH_STRUCTPERIPHERAL_H_

#include "DriverLib/FLASH/Peripheral/xHeader/FLASH_StructRegister.h"

typedef volatile struct
{
    union
    {
        volatile unsigned short OPT;
        FLASH_OPT_t OPT_bits;
    };
    const unsigned short reserved1[1U];
    union
    {
        volatile unsigned short PWR;
        FLASH_PWR_t PWR_bits;
    };
    union
    {
        volatile unsigned short STATUS;
        FLASH_STATUS_t STATUS_bits;
    };
    union
    {
        volatile unsigned short STDBYWAIT;
        FLASH_STDBYWAIT_t STDBYWAIT_bits;
    };
    union
    {
        volatile unsigned short ACTIVEWAIT;
        FLASH_ACTIVEWAIT_t ACTIVEWAIT_bits;
    };
    union
    {
        volatile unsigned short BANKWAIT;
        FLASH_BANKWAIT_t BANKWAIT_bits;
    };
    union
    {
        volatile unsigned short OTPWAIT;
        FLASH_OTPWAIT_t OTPWAIT_bits;
    };
}FLASH_t;

#endif /* DRIVERLIB_FLASH_PERIPHERAL_XHEADER_FLASH_STRUCTPERIPHERAL_H_ */
