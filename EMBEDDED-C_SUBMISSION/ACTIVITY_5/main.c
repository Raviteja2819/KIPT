
#include "GPIO.h"
#include "AppMode.h"
struct
{
    volatile unsigned int FLAG:1;
}FLAG_BIT;
int main()
{
    GPIOConfig(PD2,INPUT);
    GPIOConfig(PD6,OUTPUT);
    GPIOConfig(PD7,OUTPUT);
    //FOR PD2
    EICRA &=~(1<<ISC01);
    EICRA |= (1<<ISC00);
    EIMSK |= (1<<INT0);
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
    //FOR ADC
    ADMUX &= 0x00;
    ADMUX |= (1 << REFS0);
    ADCSRA |= (1 << ADEN);
    while(1)
    {
        if(FLAG_BIT.FLAG == 1)
        {
            OCR0A = samplingmode();
        }
        else
        {
            OCR0A = standbymode();
        }
    }


}
ISR(INT0_vect)
{
    FLAG_BIT.FLAG ^=1;
    TOGGLE_BIT(PORTD,PD7);
}
