#include "GPIO.h"
#include "StateFSM.h"
struct {
    volatile unsigned int FLAG_ISR1:1;
    volatile unsigned int FLAG_ISR2:1;

}F;
int n=0;
int ppp=0;
int main(void)
{
    GPIOConfig(PD2,INPUT);
    GPIOConfig(PD3,INPUT);
    GPIOConfig(PD6,OUTPUT);
    GPIOConfig(PD7,OUTPUT);
    EICRA |= (1<<ISC00);
    EICRA &=~(1<<ISC01);
    EIMSK |= (1<<INT0);
    sei();
    EICRA |= (1<<ISC10);
    EICRA &=~(1<<ISC11);
    EIMSK |= (1<<INT1);
    sei();
    while(1)
    {


        switch(n){
            case(0):
                if(F.FLAG_ISR1==0){
                    FSMInit();
                }
                else if(F.FLAG_ISR1==1){
                    n=1;
                    F.FLAG_ISR1=0;
                    F.FLAG_ISR2=0;
                }
                break;
            case(1):
                if(F.FLAG_ISR1==0 && F.FLAG_ISR2==0){
                    FSMStateA();
                }
                else if(F.FLAG_ISR2==1){
                    n=2;
                    F.FLAG_ISR1=0;
                    F.FLAG_ISR2=0;
                }
                break;

            case(2):
                if(F.FLAG_ISR2==0 && F.FLAG_ISR1==0){
                    FSMStateB();
                }
                else if(F.FLAG_ISR1==1){
                    n=0;
                    F.FLAG_ISR1=0;
                    F.FLAG_ISR2=0;
                }
                break;
        }

    }
}
ISR(INT0_vect) {

  F.FLAG_ISR1 = 1;

}
ISR(INT1_vect) {

  F.FLAG_ISR2 = 1;

}
