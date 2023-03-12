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
#ifndef GPIO_H_INCLUDED
#define GPIO_H_INCLUDED
/******************************************************************************
* Includes
******************************************************************************/
#include <avr/io.h>
#include <avr/interrupt.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include <util/delay.h>
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
/******************************************************************************
* Public function prototypes
******************************************************************************/
void GPIOConfig(int Pin,int mode);
int GPIOPinRead(int Pin);
void GPIOPinWrite(int Pin,int state);
/******************************************************************************
* End of File
******************************************************************************/
#endif
