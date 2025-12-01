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
    GPIOPinTypeGPIOOutput(GPIO_PORTC_BASE, GPIO_PIN_5);
    GPIOPinTypeGPIOInput(GPIO_PORTC_BASE, GPIO_PIN_4);

    while(1)
    {
        deger = GPIOPinRead(GPIO_PORTC_BASE, GPIO_PIN_4);
        if(!deger)
        {
          GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_5, GPIO_PIN_5); // LED ON
          for(i = 0; i < 50000; i++);
        }
          GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_5, 0);          // LED OFF
          for(i = 0; i < 50000; i++);
    }
}