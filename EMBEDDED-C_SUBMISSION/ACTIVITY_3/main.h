





/******************************************************************************
* File Name: GPIO.h
* Description: This file contains function Prototypes of GPIO.c
* Tool-Chain: AVR GCC
*
* Modification History:25/SEP/2020
* Created by: K.Raviteja V1.0 25/SEP/2020
* Description: V1.0
*
******************************************************************************/
#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
/******************************************************************************
* Includes
******************************************************************************/
#include "GPIO.h"
#include "ModeState.h"
#include "AppMode.h"
#include <avr/interrupt.h>
/******************************************************************************
* Defines and data types
******************************************************************************/
#define INPUT 0
#define OUTPUT 1
#define LOW 0
#define HIGH 1
#define SET_BIT(PORT,BIT) PORT |= (1<<BIT)
#define CLR_BIT(PORT,BIT) PORT &=~(1<<BIT)
#define TOGGLE_BIT(PORT,BIT) PORT ^= (1<<BIT)
/******************************************************************************
* Global variables
******************************************************************************/
struct
{
    volatile unsigned int FLAG_TIMER0: 1;
    volatile unsigned int MODE_FLAG:1;
    volatile unsigned int APP_FLAG_INT0 : 1;

    volatile unsigned int APP_FLAG_INT1 : 1;

}FLAG_BIT;
/******************************************************************************
* Public function prototypes
******************************************************************************/

/******************************************************************************
* End of File
******************************************************************************/
#endif

