#include "main.h"
volatile uint16_t counter,mode_counter;

int main()
{
    GPIOConfig(PD1,INPUT); //MODE SWITCH PCINT17
    GPIOConfig(PD2,INPUT); //GPIO PLUS INT0
    GPIOConfig(PD3,INPUT); //GPIO MINU INT1
    GPIOConfig(PD6,OUTPUT); //OUTPUT
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

    //FOR TIMER0
    TCCR0A = 0x00;
    TCNT0 = 0x00;
    TCCR0B |= ((1 << CS00) | (1 << CS02));
    TCCR0B &= ~(1 << CS01);
    TIMSK0 |= (1 << TOIE0);
    sei();


    while(1)
    {
        uint8_t P_R = 0x00;
        P_R = PIND;
        if(P_R & (1<<PD1))
        {
            if(mode_counter==0)
            {
                if(FLAG_BIT.FLAG_TIMER0 == 1)
                {
                    PORTD ^= (1<<PD6);
                    FLAG_BIT.FLAG_TIMER0 = 0;
                }
            }
            else
            {
            GPIOPinWrite(PD6,HIGH);
            _delay_ms(t_on);
            GPIOPinWrite(PD6,LOW);
            _delay_ms(t_off);
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
            GPIOPinWrite(PD6,HIGH);
            _delay_ms(t_on);
            GPIOPinWrite(PD6,LOW);
            _delay_ms(t_off);
        }
    }
}

ISR(TIMER0_OVF_vect) {

  counter++;

  if (counter >= 61) {
    FLAG_BIT.FLAG_TIMER0 = 1;
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

