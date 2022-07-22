#include "DriverLib/DriverLib.h"
/**
 * main.c
 */
void MAIN_vStartup(void);
interrupt void IRQ32 (void);

extern void RamfuncsLoadStart;
extern void RamfuncsLoadEnd;
extern void RamfuncsRunStart;


interrupt void IRQ32 (void)
{
    return;
}

int main(void)
{
    MAIN_vStartup();
    MCU__vEnaGlobalInterrupt_Debug();
    MCU__vEnaWriteProtectedRegisters();
    PIE->CTRL |= 1U;
    PIE->ACK = 0xFFFFU;
    PIE->GROUP[0U].IER= 1U;
    PIE_VECTOR->IRQ.GROUP1_IRQ[0U] = &IRQ32;
    PIE_vRegisterIRQVectorHandler(&IRQ32, 0, PIE_enVECTOR_IRQ_ADC2_PRI);
    MCU__vDisWriteProtectedRegisters();

    MCU__vForceInterrupt(MCU_enINT_VECTOR_GROUP1);
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

