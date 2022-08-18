/**
 *
 * @file SYSCTL_SystemClock.c
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
 * @verbatim 4 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/SYSCTL/Driver/xHeader/SYSCTL_SystemClock.h"

#include "DriverLib/SYSCTL/Driver/Oscillator/SYSCTL_Oscillator.h"
#include "DriverLib/SYSCTL/Driver/Clock/SYSCTL_Clock.h"
#include "DriverLib/SYSCTL/Driver/ClockSignal/SYSCTL_ClockSignal.h"
#include "DriverLib/SYSCTL/Driver/PLL/SYSCTL_PLL.h"

#define SYSCTL_MAX_FREQ (60000000U)

uint32_t SYSCTL__u32InitSystemClock(uint32_t u32FrequencyArg)
{
    /*Multiplier, Divisor, valid*/
    const uint16_t u16PLLParam[24U][3U] =
    {
     {0U, 1U, 0U}, /*1/4*/
     {0U, 2U, 0U}, /*2/4 1/2*/
     {3U, 1U, 0U}, /*3/4*/
     {0U, 3U, 0U}, /*4/4 2/2, 1/1*/
     {5U, 1U, 0U}, /*5/4*/
     {3U, 2U, 0U}, /*6/4, 3/2*/
     {7U, 1U, 0U}, /*7/4*/
     {2U, 3U, 0U}, /*8/4, 4/2, 2/1*/
     {9U, 1U, 0U}, /*9/4*/
     {5U, 2U, 0U},/*10/4, 5/2*/
     {11U,1U, 0U}, /*11/4*/
     {3U, 3U, 0U},/*12/4, 6/2, 3/1*/
     {7U, 2U, 1U}, /*13/4*/
     {7U, 2U, 0U}, /*14/4, 7/2*/
     {4U, 3U, 1U},/*15/4*/
     {4U, 3U, 0U},/*16/4, 8/2, 4/1*/
     {9U, 2U, 1U}, /*17/4*/
     {9U, 2U, 0U}, /*18/4, 9/2*/
     {5U, 3U, 1U},/*19/4*/
     {5U, 3U, 0U},/*20/4, 10/2, 5/1*/
     {11U, 2U, 1U}, /*21/4*/
     {11U, 2U, 0U}, /*22/4, 11/2*/
     {6U, 3U, 1U},/*23/4*/
     {6U, 3U, 0U},/*24/4, 12/2, 6/1*/
    };

    uint32_t u32OscSourceReg;
    uint32_t u32ActualFreqReg;
    uint32_t u32TempFreqReg;
    uint16_t u32Multiplier;
    uint16_t u32ValidReg;
    SYSCTL_nSTATUS enErrorStatusReg;
    SYSCTL_nLOCK enLockStatusReg;
    SYSCTL_nPLL_DIV enPLLDivisorReg;
    SYSCTL_nPLL_MULTIPLIER enPLLMultiplierReg;
    SYSCTL_nSTATE enPLLState;
    boolean_t boFound;

    SYSCTL__vSetExternalClockSource(SYSCTL_enEXTCLK_SRC_NONE);

    SYSCTL__vSetOsc1ClockSource(SYSCTL_enOSC1CLK_SRC_INTOSC1);
    SYSCTL__vSetOsc2ClockSource(SYSCTL_enOSC2CLK_SRC_INTOSC2);

    SYSCTL__vSetCPUWatchdogClockSource(SYSCTL_enWDTCLK_SRC_OSC2CLK);
    SYSCTL__vSetOscClockSource(SYSCTL_enOSCCLK_SRC_OSC2CLK);
    SYSCTL__vSetCPUTimer2ClockSource(SYSCTL_enTIMER2CLK_SRC_SYSCLK);

    u32OscSourceReg = SYSCTL__u32GetOscClockFrequency();
    if(10000000UL >= u32OscSourceReg)
    {
        SYSCTL__vSetPLLLockPeriod(15000UL);
    }

    if(0UL == u32FrequencyArg)
    {
        u32FrequencyArg = SYSCTL_MAX_FREQ;
    }

    boFound = FALSE;
    enPLLState = SYSCTL_enSTATE_ON;
    u32Multiplier = 1U;
    while((FALSE == boFound) && (24U >= u32Multiplier))
    {
        u32TempFreqReg = u32OscSourceReg;
        u32TempFreqReg *= u32Multiplier;
        u32TempFreqReg /= 4U;
        if((u32FrequencyArg <= u32TempFreqReg) || (24U == u32Multiplier))
        {
            boFound = TRUE;
            u32ValidReg = u16PLLParam[u32Multiplier - 1U][2U];
            enPLLMultiplierReg = (SYSCTL_nPLL_MULTIPLIER) u16PLLParam[u32Multiplier - 1U][0U];
            enPLLDivisorReg = (SYSCTL_nPLL_DIV) u16PLLParam[u32Multiplier - 1U][1U];
            if(0U != u32ValidReg)
            {
                u32Multiplier++;
                u32TempFreqReg = u32OscSourceReg;
                u32TempFreqReg *= u32Multiplier;
                u32TempFreqReg /= 4U;
            }

            if(SYSCTL_enPLL_MULTIPLIER_BYPASS == enPLLMultiplierReg)
            {
                enPLLState = SYSCTL_enSTATE_OFF;
            }
            u32ActualFreqReg = u32TempFreqReg;
            break;
        }
        u32Multiplier++;
    }

    SYSCTL__vSetPLLPowerState(SYSCTL_enSTATE_ON);
    enErrorStatusReg = SYSCTL__enGetOscClockErrorDetectionStatus();
    if(SYSCTL_enSTATUS_ERROR == enErrorStatusReg)
    {
        SYSCTL__vClearOscClockErrorDetectionStatus();
    }
    SYSCTL__vSetPLLDivisor(SYSCTL_enPLL_DIV_DIV4_OPT);
    SYSCTL__vSetOscClockErrorDetectionState(SYSCTL_enSTATE_OFF);
    SYSCTL__vSetPLLMultiplier(enPLLMultiplierReg);
    do
    {
        enLockStatusReg = SYSCTL__enGetPLLLockState();
    }while(SYSCTL_enLOCK_UNLOCK == enLockStatusReg);
    SYSCTL__vSetOscClockErrorDetectionState(SYSCTL_enSTATE_ON);
    SYSCTL__vSetPLLDivisor(enPLLDivisorReg);
    SYSCTL__vSetPLLPowerState(enPLLState);

    return (u32ActualFreqReg);
}


uint32_t SYSCTL__u32GetSystemClockFrequency(void)
{
    uint32_t u32OscClkFrequency;
    uint16_t u16PLLDivisorReg;
    uint16_t u16PLLMultiplierReg;

    u16PLLDivisorReg = SYSCTL__u16GetPLLDivisor();
    u16PLLMultiplierReg = SYSCTL__u16GetPLLMultiplier();
    u32OscClkFrequency = SYSCTL__u32GetOscClockFrequency();

    u32OscClkFrequency *= u16PLLMultiplierReg;
    u32OscClkFrequency /= u16PLLDivisorReg;

    return (u32OscClkFrequency);
}
