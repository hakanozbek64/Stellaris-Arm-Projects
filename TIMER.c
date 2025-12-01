#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/debug.h"
#include "driverlib/interrupt.h"
#include "driverlib/sysctl.h"
#include "driverlib/timer.h"
#include "drivers/display96x16x1.h"


int count =0;
int saniye =0;
int dakika =0;
char goster[16];


void TimerInterrupt()
{

  count++;
  if(count==1000)
  {
   saniye++;
   count=0;
	}

  if(saniye==60)
  {
   saniye=0;
   dakika++;
   Display96x16x1Clear();
  }
  TimerIntClear(TIMER0_BASE, TIMER_TIMB_TIMEOUT);
}






int main()
{
    
    SysCtlClockSet(SYSCTL_SYSDIV_1 | SYSCTL_USE_OSC | SYSCTL_OSC_MAIN |
                   SYSCTL_XTAL_6MHZ);

    
    Display96x16x1Init(false);

    SysCtlPeripheralEnable(SYSCTL_PERIPH_TIMER0);

    TimerConfigure(TIMER0_BASE, TIMER_CFG_16_BIT_PAIR| TIMER_CFG_B_PERIODIC);

    TimerLoadSet(TIMER0_BASE, TIMER_B, SysCtlClockGet() /10000);

    TimerIntEnable(TIMER0_BASE, TIMER_TIMB_TIMEOUT);

    IntEnable(INT_TIMER0B);

    TimerEnable(TIMER0_BASE, TIMER_B);
 

    Display96x16x1StringDraw("Saat Uygulamasi", 3, 0);
    

    while(1)
    {
      sprintf (goster,  ":%d" ,saniye);
      Display96x16x1StringDraw(goster, 9, 1);
      sprintf (goster,  ":%d" ,dakika);
      Display96x16x1StringDraw(goster, 0, 1);
		 }
		
}
