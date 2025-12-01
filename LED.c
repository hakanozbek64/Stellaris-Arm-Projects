#include "lm3s811.h"
#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"
#include "driverlib/interrupt.h"
#include  "Display96x16x1.h"


volatile unsigned long g_u1Mode;
volatile  int toggle=0;
void GPIOCIntHandler(void)
{

  GPIOPinIntClear(GPIO_PORTC_BASE, GPIO_PIN_4);
  Display96x16x1StringDraw("Interrupt",0,0);
  GPIOPinWrite(GPIO_PORTD_BASE, GPIO_PIN_2,GPIO_PIN_2);
  SysCtlDelay(SysCtlClockGet()*2/3);

}

   

int main(void) 
{
  
  int count=0;
  char goster[9];
    


    // Sistem saatini ayarla
    SysCtlClockSet(SYSCTL_SYSDIV_1 | SYSCTL_USE_OSC | SYSCTL_OSC_MAIN | SYSCTL_XTAL_6MHZ);

    // Port B ve Port C'yi aktif et
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOC);

  
    GPIOPinTypeGPIOOutput(GPIO_PORTD_BASE, GPIO_PIN_2);

    GPIOPinTypeGPIOInput(GPIO_PORTC_BASE, GPIO_PIN_4);

    // C4 pininde düsen kenar kesmesini ayarla
    GPIOIntTypeSet(GPIO_PORTC_BASE, GPIO_PIN_4, GPIO_FALLING_EDGE);

    // C4 pinindeki kesmeyi aktif et
    GPIOPinIntEnable(GPIO_PORTC_BASE, GPIO_PIN_4);

    // NVIC üzerinden GPIOC kesmesini aktif et
    IntEnable(INT_GPIOC);

    Display96x16x1Init(true);


    while(1)
    {


      for(count=0;count<=9;count++)

      {

				GPIOPinWrite(GPIO_PORTD_BASE, GPIO_PIN_2,!GPIO_PIN_2);
				sprintf( goster ,"sayi:%d" , count );
				Display96x16x1StringDraw("Main Fonk",0,0);
				Display96x16x1StringDraw(goster,0,1);
				SysCtlDelay(SysCtlClockGet()/3);



       }

       if(count==9)
            count =0;

     }

}






