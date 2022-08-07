/**
 *
 * @file FLASH_Init.c
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
#include "DriverLib/FLASH/App/xHeader/FLASH_Init.h"

#include "DriverLib/FLASH/Driver/FLASH_Driver.h"
#include "DriverLib/SYSCTL/SYSCTL.h"

void FLASH__vInit(void)
{
    uint32_t u32SystemClockFreq;
    FLASH__vEnablePipeline();

    u32SystemClockFreq = SYSCTL__u32GetSystemClockFrequency();
    /*Page Wait State*/
    /*Random Wait State*/
    if(25000000UL >= u32SystemClockFreq)
    {
        FLASH__vSetRandomWait(1U);
        FLASH__vSetPageWait(0U);
    }
    else if (50000000UL >= u32SystemClockFreq)
    {
        FLASH__vSetRandomWait(1U);
        FLASH__vSetPageWait(1U);
    }
    else
    {
        FLASH__vSetRandomWait(2U);
        FLASH__vSetPageWait(2U);
    }

    /*OTP Wait State*/
    if(25000000UL > u32SystemClockFreq)
    {
        FLASH__vSetOtpWait(0U);
    }
    else if (30000000UL >= u32SystemClockFreq)
    {
        FLASH__vSetOtpWait(1U);
    }
    else if (50000000UL >= u32SystemClockFreq)
    {
        FLASH__vSetOtpWait(2U);
    }
    else
    {
        FLASH__vSetOtpWait(3U);
    }
}



