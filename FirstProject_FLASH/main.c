#include "DriverLib/DriverLib.h"
/**
 * main.c
 */
void MAIN_vCopyFunctionsFlash2Ram(void);
void MAIN_vStartup(void);
void MAIN_vTimerInit(void);
void MAIN_vExternalInterruptInit(void);
void Timer0_IRQhandler(uintptr_t uptrModule, uint32_t u32IntSource);
void Timer1_IRQhandler(uintptr_t uptrModule, uint32_t u32IntSource);
void Timer2_IRQhandler(uintptr_t uptrModule, uint32_t u32IntSource);
void Xint1_IRQhandler(uintptr_t uptrModule, uint32_t u32IntSource);

extern void RamfuncsLoadStart;
extern void RamfuncsLoadEnd;
extern void RamfuncsRunStart;

PIE_nVECTOR_IRQ enActiveVector;

MCU__pvfIRQVectorHandler_t pointer;

void Timer0_IRQhandler(uintptr_t uptrModule, uint32_t u32IntSource)
{
    GPIOA_DATA_TOGGLE_R = 0x4U;
    return;
}

void Timer1_IRQhandler(uintptr_t uptrModule, uint32_t u32IntSource)
{
    GPIOA_DATA_TOGGLE_R = 0x2U;
    return;
}

void Timer2_IRQhandler(uintptr_t uptrModule, uint32_t u32IntSource)
{

    GPIOA_DATA_TOGGLE_R = 0x1U;
    return;
}

void Xint1_IRQhandler(uintptr_t uptrModule, uint32_t u32IntSource)
{
    if(0U == u32IntSource)
    {
        GPIOA_DATA_SET_R = 0x8U;
    }
    else
    {
        GPIOA_DATA_CLEAR_R = 0x8U;
    }
    return;
}



uint32_t u32SystemClockFrequency;
uint32_t u32Timer0Value;
int main(void)
{
    MAIN_vStartup();
    SYSCTL__vSetOutputClockConfig(SYSCTL_enOUTCLK_SRC_SYSCLK, SYSCTL_enOUTCLK_DIV_DIV4);
    MAIN_vTimerInit();
    MAIN_vExternalInterruptInit();

    MCU__vEnaWriteProtectedRegisters();

    GPIOA_CONTROL->CTRL_bits.QUALPRD0 = 0U;
    GPIOA_CONTROL_QSEL_LOW_R = 0U;
    GPIOA_CONTROL_MUX_LOW_R = 0U;
    GPIOA_CONTROL_MUX_HIGH->PIN18 = GPIOA_CONTROL_MUX_HIGH_PIN18_XCLKOUT;

    GPIOA_CONTROL_PUD->PIN0 = GPIO_CONTROL_PUD_PIN0_NONE;
    GPIOA_CONTROL_PUD->PIN1 = GPIO_CONTROL_PUD_PIN1_NONE;
    GPIOA_CONTROL_PUD->PIN2 = GPIO_CONTROL_PUD_PIN2_NONE;
    GPIOA_CONTROL_PUD->PIN3 = GPIO_CONTROL_PUD_PIN3_NONE;
    GPIOA_CONTROL_PUD->PIN18 = GPIO_CONTROL_PUD_PIN18_NONE;

    GPIOA_DATA_SET_R = 0xFU;

    GPIOA_CONTROL_CTRL->QUALPRD1 = 0xFFU;
    GPIOA_CONTROL_QSEL_LOW->PIN12 = GPIO_CONTROL_QSEL_LOW_PIN12_5SAMPLES;
    GPIOA_CONTROL_MUX_LOW->PIN12 = GPIO_CONTROL_MUX_LOW_PIN12_GPIO;
    GPIOA_CONTROL_PUD->PIN12 = GPIO_CONTROL_PUD_PIN12_NONE;

    MCU__vDisWriteProtectedRegisters();

    GPIO__vSetDirection(GPIO_enPORT_A,
                        (uint32_t)(GPIO_enPIN_0 | GPIO_enPIN_1 | GPIO_enPIN_2 | GPIO_enPIN_3 | GPIO_enPIN_18),
                        GPIO_enDIR_OUTPUT);


    GPIO__vSetDirection(GPIO_enPORT_A,
                        (uint32_t)(GPIO_enPIN_12),
                        GPIO_enDIR_INPUT);



    MCU__vEnaGlobalInterrupt_Debug();
	while(1U)
	{
	    u32Timer0Value = TIMER__u32GetCounter(TIMER_enMODULE_0);
	}
}


void MAIN_vStartup(void)
{
    MCU__vSetC28xMode();
    MCU__vDisGlobalInterrupt_Debug();
    PIE__vInit();
    SYSCTL__vEnablePeripheral(SYSCTL_enADC);
    MCU__vEnaWriteProtectedRegisters();
    MCU__vDeviceCalibration();
    MCU__vDisWriteProtectedRegisters();
    SYSCTL__vDisablePeripheral(SYSCTL_enADC);
    SYSCTL__u32InitSystemClock(50000000UL);
    MAIN_vCopyFunctionsFlash2Ram();
    FLASH__vInit();
}

void MAIN_vExternalInterruptInit(void)
{
    XINT_ConfigExt_t stExternalInterruptConfig;
    XINT__vInit();

    XINT__enRegisterIRQSourceHandler(&Xint1_IRQhandler, XINT_enMODULE_1);

    stExternalInterruptConfig.enEdge = XINT_enEDGE_BOTH;
    stExternalInterruptConfig.enPin = XINT_enPIN_GPIOA12;
    stExternalInterruptConfig.enInterruptState = XINT_enSTATE_ENABLE;
    XINT__enConfigExt(XINT_enMODULE_1, &stExternalInterruptConfig);
}

void MAIN_vTimerInit(void)
{
    TIMER_ConfigExt_t stTimerConfig;
    TIMER__vInit();

    TIMER__enRegisterIRQSourceHandler(&Timer0_IRQhandler, TIMER_enMODULE_0);
    TIMER__enRegisterIRQSourceHandler(&Timer1_IRQhandler, TIMER_enMODULE_1);
    TIMER__enRegisterIRQSourceHandler(&Timer2_IRQhandler, TIMER_enMODULE_2);

    stTimerConfig.enEmulationMode = TIMER_enEMUMODE_HARDSTOP;
    stTimerConfig.u16PeriodUs = 4000000UL;
    stTimerConfig.enInterruptState = TIMER_enINT_STATE_ENABLE;
    TIMER__enConfigExt(TIMER_enMODULE_0, &stTimerConfig);

    stTimerConfig.u16PeriodUs = 2000000UL;
    TIMER__enConfigExt(TIMER_enMODULE_1, &stTimerConfig);

    stTimerConfig.u16PeriodUs = 1000000UL;
    TIMER__enConfigExt(TIMER_enMODULE_2, &stTimerConfig);

    TIMER__vSetState(TIMER_enMODULE_0, TIMER_enSTATE_START);
    TIMER__vSetState(TIMER_enMODULE_1, TIMER_enSTATE_START);
    TIMER__vSetState(TIMER_enMODULE_2, TIMER_enSTATE_START);
}

void MAIN_vCopyFunctionsFlash2Ram(void)
{
    uint16_t *pui16SrcRamCode;
    uint16_t *pui16DestRamCode;
    /**
     ** Copy the ramcode segment initializers from flash to SRAM.
     **/
    pui16SrcRamCode = (uint16_t*) &RamfuncsLoadStart;
    pui16DestRamCode = (uint16_t*) &RamfuncsRunStart;
    while(pui16SrcRamCode < (uint16_t*) &RamfuncsLoadEnd)
    {
        *pui16DestRamCode = *pui16SrcRamCode;
        pui16SrcRamCode += 1UL;
        pui16DestRamCode += 1UL;
    }
}
