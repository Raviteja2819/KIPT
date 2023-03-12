#include "ModeState.h"

void Stand_By_Mode(Pin)
{
    GPIOPinWrite(Pin,HIGH);
    _delay_ms(t_on);
    GPIOPinWrite(Pin,LOW);
    _delay_ms(t_off);
}
