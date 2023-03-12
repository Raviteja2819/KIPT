#include <stdio.h>
#define SET(x, p) (x |= (1U<< p))
#define CLEAR(x, p) (x &= (~(1U<< p)))
#define FLIP(x,p)(x^=(1U<<p))
int main()
{
    unsigned int x =0;
    unsigned int p = 0;
    printf("input value = ");
    scanf("%u",&x);
    printf("input position = ");
    scanf("%u",&p);
    printf("After setting nth-bit value will be = %d\n",SET(x,p));
    printf("After clearing nth-bit cData will be = 0x%x\n",CLEAR(x,p));
    printf("After flipping nth-bit cData will be = 0x%x\n",FLIP(x,p));

    return 0;
}
