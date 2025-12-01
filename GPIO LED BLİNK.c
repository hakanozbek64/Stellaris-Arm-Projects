#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"

int main(void)
{
    volatile unsigned long i;

    SysCtlClockSet(SYSCTL_SYSDIV_1 | SYSCTL_USE_OSC |
                   SYSCTL_OSC_MAIN | SYSCTL_XTAL_6MHZ);

    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOC);
    GPIOPinTypeGPIOOutput(GPIO_PORTC_BASE, GPIO_PIN_5);

    while(1)
    {
        GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_5, GPIO_PIN_5); // LED ON
        for(i = 0; i < 50000; i++);

        GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_5, 0);          // LED OFF
        for(i = 0; i < 50000; i++);
    }
}