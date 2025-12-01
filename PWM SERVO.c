#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"
#include "driverlib/adc.h"
#include "driverlib/pwm.h"

// Global degiskenler
unsigned long ulADC_Degeri[1]; // ADC verisini tutmak için 1 elemanli dizi
unsigned long ulPeriod;

int main(void)
{
    // --- 1. SISTEM SAATI AYARI ---
    // 6MHz kristal ile 6MHz'de çalis
    SysCtlClockSet(SYSCTL_SYSDIV_1 | SYSCTL_USE_OSC | SYSCTL_OSC_MAIN |
                   SYSCTL_XTAL_6MHZ);

    // --- 2. ÇEVRE BIRIMI (PERIPHERAL) AYARLARI ---
    // Gerekli tüm birimleri etkinlestir
    SysCtlPeripheralEnable(SYSCTL_PERIPH_ADC);     // ADC için
    SysCtlPeripheralEnable(SYSCTL_PERIPH_PWM);     // PWM için
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOE); // Hem ADC (PE7) hem PWM (PE0) PORTE üzerinde

    // --- 3. ADC (POTANSIYOMETRE) AYARI (Giris: PE7) ---
    GPIOPinTypeADC(GPIO_PORTE_BASE, GPIO_PIN_7); // PE7 (AIN0) pinini ADC girisi yap
    ADCSequenceConfigure(ADC_BASE, 3, ADC_TRIGGER_PROCESSOR, 0);
    ADCSequenceStepConfigure(ADC_BASE, 3, 0, ADC_CTL_CH0 | ADC_CTL_IE | ADC_CTL_END);
    ADCSequenceEnable(ADC_BASE, 3);
    ADCIntClear(ADC_BASE, 3); // Baslamadan bayragi temizle

    // --- 4. PWM (MOTOR) AYARI (Çikis: PE0) ---
    GPIOPinTypePWM(GPIO_PORTE_BASE, GPIO_PIN_0); // PE0 (PWM_OUT_4) pinini PWM çikisi yap
    SysCtlPWMClockSet(SYSCTL_PWMDIV_1);          // PWM saatini bölme (6MHz)

    // Periyodu ayarla (50 Hz = 20ms periyot)
    ulPeriod = SysCtlClockGet() / 50; 
    PWMGenConfigure(PWM_BASE, PWM_GEN_2, PWM_GEN_MODE_UP_DOWN | PWM_GEN_MODE_NO_SYNC);
    PWMGenPeriodSet(PWM_BASE, PWM_GEN_2, ulPeriod);

    // Baslangiçta motor dur (%0 duty cycle)
    PWMPulseWidthSet(PWM_BASE, PWM_OUT_4, 0);

    // PWM Jeneratörünü ve Çikisini etkinlestir (SADECE BIR KEZ)
    PWMGenEnable(PWM_BASE, PWM_GEN_2);
    PWMOutputState(PWM_BASE, PWM_OUT_4_BIT, true);


    // --- 5. ANA DÖNGÜ ---
    while(1)
    {
        // 1. Potansiyometre degerini güvenle oku
        ADCProcessorTrigger(ADC_BASE, 3);      // Dönüsümü baslat
        while(!ADCIntStatus(ADC_BASE, 3, false)) {} // Dönüsümün bitmesini bekle
        ADCIntClear(ADC_BASE, 3);              // Bayragi temizle
        ADCSequenceDataGet(ADC_BASE, 3, ulADC_Degeri); // Degeri al (ulADC_Degeri[0])

        // 2. Okunan ADC degerini (0-1023) PWM sinyaline (%0-100) esle
        // (ulADC_Degeri[0] * ulPeriod / 1023) formülü tam %0-100 eslemesi yapar.
        PWMPulseWidthSet(PWM_BASE, PWM_OUT_4, (ulADC_Degeri[0] * ulPeriod) / 1023);

        // Sisteme çok yüklenmemek için çok kisa bir gecikme
        SysCtlDelay(SysCtlClockGet() / 300); // Yaklasik 3.3 ms
    }
}