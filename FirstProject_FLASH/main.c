#include "DriverLib/DriverLib.h"
/**
 * main.c
 */
void MAIN_vCopyFunctionsFlash2Ram(void);
void MAIN_vStartup(void);
void IRQ32(uintptr_t uptrModule, uint32_t u32IntSource);

extern void RamfuncsLoadStart;
extern void RamfuncsLoadEnd;
extern void RamfuncsRunStart;

PIE_nVECTOR_IRQ enActiveVector;

MCU__pvfIRQVectorHandler_t pointer;

void IRQ32(uintptr_t uptrModule, uint32_t u32IntSource)
{
    enActiveVector = PIE__enGetActiveIRQVector();
    return;
}

uint32_t u32SystemClockFrequency;
uint32_t u32Timer0Value;
int main(void)
{
    MCU__pvfIRQVectorHandler_t Timer0Vector;
    MAIN_vStartup();
    PIE__vEnable();
    MCU__vEnaGlobalInterrupt_Debug();
    PIE__vClearAllAcknowledgeIRQVector();

    TIMER0->TCR_bits.TSS = 1U;
    TIMER0->PRD = 0x2FAU;
    TIMER0->TPR_bits.TDDR = 0x7FU;
    TIMER0->TPRH_bits.TDDRH = 0xF0U;
    TIMER0->TCR_bits.TRB = 1U;

    Timer0Vector = TIMER__pvfGetIRQVectorHandler(TIMER_enMODULE_0);
    TIMER__vRegisterIRQVectorHandler(Timer0Vector, TIMER_enMODULE_0);
    TIMER__vRegisterIRQSourceHandler(&IRQ32, TIMER_enMODULE_0);

    TIMER__vEnableInterruptSource(TIMER_enMODULE_0);
    TIMER__vEnableInterruptVector(TIMER_enMODULE_0);

    TIMER0->TCR_bits.TSS = 0U;
	while(1U)
	{
	    u32Timer0Value = TIMER->MODULE[0U].TIM;
	}
}


void MAIN_vStartup(void)
{
    MCU__vSetC28xMode();
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
