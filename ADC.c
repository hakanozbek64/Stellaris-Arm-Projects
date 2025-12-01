#include "lm3s811.h"
#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/sysctl.h"
#include  "driverlib/gpio.h"
#include "driverlib/adc.h"
#include "drivers/display96x16x1.h"
#include <stdio.h>


int main(void)
{
    unsigned long ADC_Degeri=0;
    char ADC_Goster[16];

    SysCtlClockSet(SYSCTL_SYSDIV_4 | SYSCTL_USE_PLL | SYSCTL_OSC_MAIN | SYSCTL_XTAL_8MHZ);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_ADC0);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C0);
	
	  SysCtlADCSpeedSet(SYSCTL_ADCSPEED_500KSPS);
	
	  ADCSequenceDisable(ADC_BASE,1);
	
	  ADCSequenceConfigure(ADC0_BASE, 1, ADC_TRIGGER_PROCESSOR, 0);	
	
	  ADCSequenceStepConfigure(ADC0_BASE, 1, 0, ADC_CTL_CH0 | ADC_CTL_END);
	
	  ADCSequenceEnable(ADC0_BASE, 1);
	
    Display96x16x1Init(false);
   
   

    while(1)
    {
        ADCProcessorTrigger(ADC0_BASE, 1);
			
			  ADCSequenceDataGet(ADC0_BASE, 1, &ADC_Degeri);
			
			  sprintf (ADC_Goster,  "ADC:%04d", ADC_Degeri);
			
			
			  Display96x16x1StringDraw(ADC_Goster ,0,0);
			
			  SysCtlDelay(SysCtlClockGet()/ 3);
			

    }
}

