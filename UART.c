#include "lm3s811.h"
#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/gpio.h"
#include "driverlib/interrupt.h"
#include "driverlib/sysctl.h"
#include "driverlib/uart.h"
#include "drivers/display96x16x1.h"
#include  "utils/uartstdio.h"
#include  <stdio.h>


char ADC_Goster[10];
volatile unsigned int count=0;

int main()
{
    
    SysCtlClockSet(SYSCTL_SYSDIV_4 | SYSCTL_USE_PLL | SYSCTL_OSC_MAIN |
                   SYSCTL_XTAL_6MHZ);

    
    Display96x16x1Init(false);
    
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);

    
    GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1);

    
    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);

    UARTStdioInit(0);


    UARTprintf("merhaba\n");


    
    while(1)
    {
     
			
			sprintf (ADC_Goster, "sayac:%-2d\n", count );
	
			Display96x16x1Clear();
			
			Display96x16x1StringDraw(ADC_Goster ,0,0);
			
			UARTprintf("sayac=%d\n",count);

			SysCtlDelay(SysCtlClockGet()/3);
  

			count++;
			if(count==20)
			{
	     count=0;
			}

    }
}