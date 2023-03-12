#include "AppMode.h"

int t_off = 10;
int t_on = 10;
int dutycycle =50;

void GPIOplus()
{
    dutycycle += 10;
    if(dutycycle<=100)
    {
        t_on += 2;
        t_off -=2;
    }
    else
    {
        dutycycle = 100;
        t_on=20;
        t_off=0;
    }
}

void GPIOminus()
{
    dutycycle -=10;
    if(dutycycle >=0)
    {
        t_on-=2;
        t_off+=2;
    }
    else
    {
        dutycycle = 0;
        t_on=0;
        t_off=20;
    }
}


