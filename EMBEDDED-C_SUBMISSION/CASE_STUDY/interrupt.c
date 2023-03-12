




/******************************************************************************
* File Name: interrup.c
* Description: This file contains API definitions for interrupt functionality
* Tool-Chain: AVR GCC
*
* Modification History:25/SEP/2020
* Created by: K.Raviteja V1.0 25/SEP/2020
* Description: V1.0
******************************************************************************/
/******************************************************************************
* Includes
******************************************************************************/
#include "interrupt.h"
/******************************************************************************
* Defines and data types
******************************************************************************/
/******************************************************************************
* Global variables
******************************************************************************/
/******************************************************************************
* Static variables
******************************************************************************/
/******************************************************************************
* Internal function prototypes
******************************************************************************/
/******************************************************************************
* Public functions definitions
******************************************************************************/
/******************************************************************************
* Name: Enable_input_interrupt()
* Description: enables the interrupt for the input
* Arguments: None
* Returns: None
******************************************************************************/
void Enable_input_interrupt()
{
    //FOR INT0
    EICRA |= (1 << ISC00);
    EICRA &= ~(1 << ISC01); //Any logical change will raise interrupt.
    EIMSK |= (1 << INT0); //Local Interrupt enable
    sei();
    //FOR INT1
    EICRA |= (1 << ISC10);
    EICRA &= ~(1 << ISC11); //Any logical change will raise interrupt.
    EIMSK |= (1 << INT1); //Local Interrupt enable
    sei();
};
/******************************************************************************
* Name: Enable_timer2_interrpt()
* Description: enables the timer interrupt
* Arguments: None
* Returns: None
******************************************************************************/
void Enable_timer2_interrpt()
{
    //FOR TIMER
    TCCR2A = 0x00; // Normal mode of operation
    TCNT2 = 0x00;
    TCCR2B |= ((1 << CS20) | (1 << CS22)); //default WGM02 settings are 0 at the time of system reset
    TCCR2B |= (1 << CS21); //111
    TIMSK2 |= (1 << TOIE2); //Local Timer Overflow INT enable
    sei(); // Global interrupt
};
/******************************************************************************
* Name: Enable_PWMout()
* Description: Enables the PWM signal
* Arguments: None
* Returns: None
******************************************************************************/
void Enable_PWMout()
{
    //FOR PWM
    TCCR0A |= ((1 << WGM01) | (1 << WGM00));
    TCCR0A |= (1 << COM0A1);
    TCCR0A &= ~(1 << COM0A0);
    TCNT0 = 0x00; // Timer counter register
    TCCR0B |= ((1 << CS00) | (1 << CS02)); // Clock selection 101
    TCCR0B &= ~(1 << CS01); //101
    sei(); // Global interrupt
};
/******************************************************************************
* Name: Enable_ADC()
* Description: Enables the ADC
* Arguments: None
* Returns: None
******************************************************************************/
void Enable_ADC()
{
    //FOR ADC
    ADMUX &= 0x00;
    ADMUX |= (1 << REFS0);
    ADCSRA |= (1 << ADEN);
};
/******************************************************************************
* Internal functions
******************************************************************************/
/******************************************************************************
* Name:
* Description:
******************************************************************************/
/******************************************************************************
*******************************************************************************
* End of File
******************************************************************************/

