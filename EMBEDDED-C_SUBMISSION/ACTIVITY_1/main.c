
#include "GPIO.h"
typedef struct FLAG_BIT{
  volatile unsigned int FLAG: 1;
}
F;
int main(void)
{
    GPIOConfig(PD6,OUTPUT);
    GPIOConfig(PD7,OUTPUT);
    GPIOConfig(PD2,INPUT);
    GPIOConfig(PD3,INPUT);
    while(1){
        int x=GPIOPinRead(PD2);
        int y=GPIOPinRead(PD3);
        if(x==1 && y==1){
                GPIOPinWrite(PD6,LOW);
                GPIOPinWrite(PD7,LOW);
        }
        else if(x==1 && y==0){
                GPIOPinWrite(PD6,LOW);
                GPIOPinWrite(PD7,HIGH);
        }
        else if(x==0 && y==1){
                GPIOPinWrite(PD6,HIGH);
                GPIOPinWrite(PD7,LOW);
        }
        else if(x==0 && y==0){
                F F;
                F.FLAG=1;
                while(F.FLAG==1){
                    GPIOPinWrite(PD6,HIGH);
                    _delay_ms(1000);
                    GPIOPinWrite(PD6,LOW);
                    GPIOPinWrite(PD7,HIGH);
                    _delay_ms(1000);
                    GPIOPinWrite(PD7,LOW);
                    F.FLAG=0;
                }
        }

    }
}
