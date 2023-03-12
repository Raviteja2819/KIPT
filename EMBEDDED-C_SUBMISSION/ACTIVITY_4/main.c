#include "main.h"
volatile uint16_t counter,mode_counter;

int main()
{
    GPIOConfig(PD1,INPUT); //MODE SWITCH PCINT17
    GPIOConfig(PD2,INPUT); //GPIO PLUS INT0
    GPIOConfig(PD3,INPUT); //GPIO MINU INT1
    GPIOConfig(PD6,OUTPUT); //OUTPUT
    GPIOConfig(PD7,OUTPUT);
    //FOR PCINT17
    PCICR |= (1<<PCIE2);
    PCMSK2|= (1<<PCINT17);
    sei();
    //FOR PD2
    EICRA &=~(1<<ISC01);
    EICRA |= (1<<ISC00);
    EIMSK |= (1<<INT0);
    sei();
    //FOR PD3
    EICRA &=~(1<<ISC11);
    EICRA |= (1<<ISC10);
    EIMSK |= (1<<INT1);
    sei();

    //FOR TIMER2
    TCCR2A = 0x00;
    TCNT2 = 0x00;
    TCCR2B |= ((1 << CS20) | (1 << CS22)); //default WGM02 settings are 0 at the time of system reset
    TCCR2B |= (1 << CS21); //101
    TIMSK2 |= (1 << TOIE2);
    sei();
    //FOR TIMER0
    TCCR0A |= ((1 << WGM01) | (1 << WGM00));
    TCCR0A |= (1 << COM0A1);
    TCCR0A &= ~(1 << COM0A0);
    OCR0A = 0;
    TCNT0 = 0x00; // Timer counter register
    TCCR0B |= ((1 << CS00) | (1 << CS02)); // Clock selection 101
    TCCR0B &= ~(1 << CS01); //101
    sei(); // Global interrupt

    while(1)
    {
        uint8_t P_R = 0x00;
        P_R = PIND;
        if(P_R & (1<<PD1))
        {
            if(mode_counter==0)
            {
                if(FLAG_BIT.FLAG_TIMER2 == 1)
                {
                    PORTD ^= (1<<PD7);
                    FLAG_BIT.FLAG_TIMER2 = 0;
                }
            }
            else
            {
                OCR0A = t;
            }
        }
        else
        {
             if(FLAG_BIT.APP_FLAG_INT0 == 1)
             {
                 GPIOplus();
                 FLAG_BIT.APP_FLAG_INT0 = 0;
             }
             if(FLAG_BIT.APP_FLAG_INT1 == 1)
             {
                 GPIOminus();
                 FLAG_BIT.APP_FLAG_INT1 = 0;


             }
             OCR0A = t;
        }
    }
}

ISR(TIMER2_OVF_vect) {

  counter++;

  if (counter >=62)
    {
    FLAG_BIT.FLAG_TIMER2 = 1;
    counter = 0;
  }
}
ISR(PCINT2_vect)
{
    mode_counter++;
    FLAG_BIT.MODE_FLAG = 1;
}
ISR(INT0_vect)
{
    FLAG_BIT.APP_FLAG_INT0 = 1;
}
ISR(INT1_vect)
{
    FLAG_BIT.APP_FLAG_INT1 = 1;
}

