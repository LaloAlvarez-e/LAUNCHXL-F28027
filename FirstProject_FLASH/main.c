#include "DriverLib/DriverLib.h"
/**
 * main.c
 */
void MAIN_vCopyFlash2Ram(void);
void MAIN_vStartup(void);
interrupt void IRQ32 (void);

extern void RamfuncsLoadStart;
extern void RamfuncsLoadEnd;
extern void RamfuncsRunStart;

PIE_nVECTOR_IRQ enActiveVector;

MCU__pvfIRQVectorHandler_t pointer;

interrupt void IRQ32 (void)
{
    enActiveVector = PIE__enGetActiveIRQVector();
    return;
}

uint32_t u32SystemClockFrequency;

int main(void)
{
    MAIN_vStartup();
    PIE__vEnable();
    MCU__vEnaGlobalInterrupt_Debug();
    PIE__vClearAllAcknowledgeIRQVector();
    PIE__vEnableIRQVector(PIE_enVECTOR_IRQ_ADC1_PRI);
    PIE__vEnableIRQVector(PIE_enVECTOR_IRQ_EPWM1_TZ);
    PIE__vEnableIRQVector(PIE_enVECTOR_IRQ_ADC9);
    PIE__vEnableIRQVector(PIE_enVECTOR_IRQ_EPWM4_TZ);
    PIE__vEnableIRQVector(PIE_enVECTOR_IRQ_SW3);
    PIE__vRegisterIRQVectorHandler(&IRQ32, 0, PIE_enVECTOR_IRQ_ADC1_PRI);
    pointer = PIE__pfvGetIRQVectorHandler(PIE_enVECTOR_IRQ_ADC1_PRI);
    PIE__vRegisterIRQVectorHandler(pointer, 0, PIE_enVECTOR_IRQ_EPWM1_TZ);

    PIE__vClearStatusIRQVector(PIE_enVECTOR_IRQ_ADC1_PRI);
    PIE__vDisableIRQVector(PIE_enVECTOR_IRQ_EPWM4_TZ);
    PIE__vDisableIRQVector(PIE_enVECTOR_IRQ_EPWM1_TZ);
	while(1U)
	{

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
    MAIN_vCopyFlash2Ram();
    FLASH__vInit();


}


void MAIN_vCopyFlash2Ram(void)
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
