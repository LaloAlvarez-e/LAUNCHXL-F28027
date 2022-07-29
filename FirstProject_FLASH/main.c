#include "DriverLib/DriverLib.h"
/**
 * main.c
 */
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

    MCU__vForceInterrupt(MCU_enINT_VECTOR_GROUP1);
    MCU__vForceInterrupt(MCU_enINT_VECTOR_GROUP2);
    PIE__vDisableIRQVector(PIE_enVECTOR_IRQ_EPWM4_TZ);
    PIE__vDisableIRQVector(PIE_enVECTOR_IRQ_EPWM1_TZ);
	while(1U)
	{

	}
}


void MAIN_vStartup(void)
{
    uint16_t *pui16SrcRamCode = (uint16_t*) 0UL;
    uint16_t *pui16DestRamCode = (uint16_t*) 0UL;
    MCU__vSetC28xMode();
    MCU__vEnaWriteProtectedRegisters();
    /*Enable ADC clock*/
    MCU__vDeviceCalibration();
    /*Disable ADC clock*/
    MCU__vDisWriteProtectedRegisters();
    /**/
    /* Copy the ramcode segment initializers from flash to SRAM.*/
    /**/
    pui16SrcRamCode = (uint16_t*) &RamfuncsLoadStart;
    pui16DestRamCode = (uint16_t*) &RamfuncsRunStart;
    while(pui16SrcRamCode < (uint16_t*) &RamfuncsLoadEnd)
    {
        *pui16DestRamCode = *pui16SrcRamCode;
        pui16SrcRamCode += 1UL;
        pui16DestRamCode += 1UL;
    }
}

