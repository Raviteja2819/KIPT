#include "main.h"
int main(void)
{
    GPIOConfig(PD2,INPUT);
    GPIOConfig(PD3,INPUT);
    GPIOConfig(PD6,OUTPUT);

    Enable_input_interrupt();
    Enable_timer2_interrpt();
    Enable_PWMout();
    Enable_ADC();

    while(1)
    {
        if(FLAG_BIT.ENGINE_FLAG == 1)
        {
            if(FLAG_BIT.WIPER_FLAG==0)
            {
                manualmode();
                OCR0A=t;
            }
            else
            {
                if(FLAG_BIT.TIMER2_FLAG==1)
                {
                    FLAG_BIT.TIMER2_FLAG = 0;
                    automode();
                    OCR0A=t;

                }

            }
        }
        else
        {
            standbymode();
        }

    }
    return 0;
}
ISR(INT0_vect)
{
    FLAG_BIT.ENGINE_FLAG ^= 1;
}
ISR(INT1_vect)
{
    FLAG_BIT.WIPER_FLAG ^=1;
}
ISR(TIMER2_OVF_vect)
{
    counter++;
    if(counter>=305)
    {
        FLAG_BIT.TIMER2_FLAG = 1;
        counter =0;
    }
}
