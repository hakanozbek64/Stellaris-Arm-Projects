#include "lm3s811.h"
#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/gpio.h"
#include "driverlib/interrupt.h"
#include "driverlib/sysctl.h"



volatile unsigned long  g_u1mode;
volatile int toggle =0;
void GPIOCIntHandle(void) //interrup oldugu taktirde okuyacagi fonksiyon
{

  GPIOPinIntClear(GPIO_PORTC_BASE, GPIO_PIN_4); 

  if(toggle)
    GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_5, GPIO_PIN_5);

  else
    GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_5, !GPIO_PIN_5);

  toggle=~toggle;

    // Kesme bayragini temizle
    
}

int main(void) {
    // Sistem saatini ayarla
    SysCtlClockSet(SYSCTL_SYSDIV_1 | SYSCTL_USE_OSC | SYSCTL_OSC_MAIN | SYSCTL_XTAL_6MHZ);

    // Port B ve Port C'yi aktif et
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOC);

    // C5: çikis, C4: giris olarak ayarla
    GPIOPinTypeGPIOOutput(GPIO_PORTC_BASE, GPIO_PIN_5);
    GPIOPinTypeGPIOInput(GPIO_PORTC_BASE, GPIO_PIN_4);

    // C4 pininde düsen kenar kesmesini ayarla
    GPIOIntTypeSet(GPIO_PORTC_BASE, GPIO_PIN_4, GPIO_FALLING_EDGE);

    // C4 pinindeki kesmeyi aktif et
    GPIOPinIntEnable(GPIO_PORTC_BASE, GPIO_PIN_4);

    // NVIC üzerinden GPIOC kesmesini aktif et
    IntEnable(INT_GPIOC);

    

    // Sonsuz döngü
    while (1) {}
}