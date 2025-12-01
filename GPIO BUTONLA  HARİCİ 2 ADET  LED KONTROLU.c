#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"

int main(void)
{
    volatile unsigned long i;
    volatile int deger;

    SysCtlClockSet(SYSCTL_SYSDIV_1 | SYSCTL_USE_OSC |
                   SYSCTL_OSC_MAIN | SYSCTL_XTAL_6MHZ);

    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOC);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);
    
    
    GPIOPinTypeGPIOOutput(GPIO_PORTD_BASE, GPIO_PIN_2 | GPIO_PIN_3 );


    //GPIOPinTypeGPIOOutput(GPIO_PORTC_BASE, GPIO_PIN_5);
    GPIOPinTypeGPIOInput(GPIO_PORTC_BASE, GPIO_PIN_4);

    while(1)
    {
        deger = GPIOPinRead(GPIO_PORTC_BASE, GPIO_PIN_4);
        if(!deger)
        {
          GPIOPinWrite(GPIO_PORTD_BASE, GPIO_PIN_2| GPIO_PIN_3 , GPIO_PIN_2 | !GPIO_PIN_3); // LED 2 AKTÝF LED 3 KAPALI
          for(i = 0; i < 100000; i++);
        }
          GPIOPinWrite(GPIO_PORTD_BASE, GPIO_PIN_2 | GPIO_PIN_3, GPIO_PIN_3 | !GPIO_PIN_2);//LED 3 AKTÝF LED 2 KAPALI
          for(i = 0; i < 100000; i++);
    }
}