#include "DriverLib/DriverLib.h"
/**
 * main.c
 */
void MAIN_vCopyFunctionsFlash2Ram(void);
void MAIN_vStartup(void);
void Timer0_IRQhandler(uintptr_t uptrModule, uint32_t u32IntSource);
void Timer1_IRQhandler(uintptr_t uptrModule, uint32_t u32IntSource);
void Timer2_IRQhandler(uintptr_t uptrModule, uint32_t u32IntSource);

extern void RamfuncsLoadStart;
extern void RamfuncsLoadEnd;
extern void RamfuncsRunStart;

PIE_nVECTOR_IRQ enActiveVector;

MCU__pvfIRQVectorHandler_t pointer;

void Timer0_IRQhandler(uintptr_t uptrModule, uint32_t u32IntSource)
{
    GPIOA->TOGGLE = 0x4U;
    return;
}

void Timer1_IRQhandler(uintptr_t uptrModule, uint32_t u32IntSource)
{
    GPIOA->TOGGLE = 0x2U;
    return;
}

void Timer2_IRQhandler(uintptr_t uptrModule, uint32_t u32IntSource)
{

    GPIOA->TOGGLE = 0x1U;
    return;
}
uint32_t u32SystemClockFrequency;
uint32_t u32Timer0Value;
int main(void)
{
    MCU__pvfIRQVectorHandler_t TimerVector;
    MAIN_vStartup();

    MCU__vEnaWriteProtectedRegisters();
    GPIOA->CTRL_bits.QUALPRD0 = 0U;
    GPIO->A.QSEL_LOW = 0U;
    GPIO_ARRAY->CONTROL[0U].MUX_LOW = 0U;
    GPIOA->DIR_bits.PIN0 = 1U;
    GPIOA->DIR_bits.PIN1 = 1U;
    GPIOA->DIR_bits.PIN2 = 1U;
    GPIOA->DIR_bits.PIN3 = 1U;

    GPIOA->PUD_bits.PIN0 = 1U;
    GPIOA->PUD_bits.PIN1 = 1U;
    GPIOA->PUD_bits.PIN2 = 1U;
    GPIOA->PUD_bits.PIN3 = 1U;

    GPIOA->SET = 0xFU;

    MCU__vDisWriteProtectedRegisters();


    TimerVector = TIMER__pvfGetIRQVectorHandler(TIMER_enMODULE_0);
    TIMER__enRegisterIRQVectorHandler(TimerVector, TIMER_enMODULE_0);
    TimerVector = TIMER__pvfGetIRQVectorHandler(TIMER_enMODULE_1);
    TIMER__enRegisterIRQVectorHandler(TimerVector, TIMER_enMODULE_1);
    TimerVector = TIMER__pvfGetIRQVectorHandler(TIMER_enMODULE_2);
    TIMER__enRegisterIRQVectorHandler(TimerVector, TIMER_enMODULE_2);
    TIMER__enRegisterIRQSourceHandler(&Timer0_IRQhandler, TIMER_enMODULE_0);
    TIMER__enRegisterIRQSourceHandler(&Timer1_IRQhandler, TIMER_enMODULE_1);
    TIMER__enRegisterIRQSourceHandler(&Timer2_IRQhandler, TIMER_enMODULE_2);

    TIMER__vSetState(TIMER_enMODULE_0, TIMER_enSTATE_STOP);
    TIMER__vSetState(TIMER_enMODULE_1, TIMER_enSTATE_STOP);
    TIMER__vSetState(TIMER_enMODULE_2, TIMER_enSTATE_STOP);

    TIMER__vSetEmulationMode(TIMER_enMODULE_0, TIMER_enEMUMODE_HARDSTOP);
    TIMER__u64SetPeriodUs(TIMER_enMODULE_0, 2000000UL);
    TIMER__vEnableInterruptSource(TIMER_enMODULE_0);
    TIMER__vEnableInterruptVector(TIMER_enMODULE_0);
    TIMER__vReload(TIMER_enMODULE_0);

    TIMER__vSetEmulationMode(TIMER_enMODULE_1, TIMER_enEMUMODE_HARDSTOP);
    TIMER__u64SetPeriodUs(TIMER_enMODULE_1, 1000000UL);
    TIMER__vEnableInterruptSource(TIMER_enMODULE_1);
    TIMER__vEnableInterruptVector(TIMER_enMODULE_1);
    TIMER__vReload(TIMER_enMODULE_1);

    TIMER__vSetEmulationMode(TIMER_enMODULE_2, TIMER_enEMUMODE_HARDSTOP);
    TIMER__u64SetPeriodUs(TIMER_enMODULE_2, 500000UL);
    TIMER__vEnableInterruptSource(TIMER_enMODULE_2);
    TIMER__vEnableInterruptVector(TIMER_enMODULE_2);
    TIMER__vReload(TIMER_enMODULE_2);


    TIMER__vSetState(TIMER_enMODULE_0, TIMER_enSTATE_START);
    TIMER__vSetState(TIMER_enMODULE_1, TIMER_enSTATE_START);
    TIMER__vSetState(TIMER_enMODULE_2, TIMER_enSTATE_START);

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
