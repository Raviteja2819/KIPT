#ifndef INTERRUPT_H_INCLUDED
#define INTERRUPT_H_INCLUDED
void Enable_input_interrupt();
void Enable_timer2_interrpt();
void Enable_PWMout();
void Enable_ADC();
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#endif // INTERRUPT_H_INCLUDED
