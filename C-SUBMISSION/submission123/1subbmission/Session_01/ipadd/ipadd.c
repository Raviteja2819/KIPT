#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t frst_eightbits=56;
	uint8_t scnd_eightbits=234;
	uint8_t thrd_eigtbits=124;
	uint8_t fourth_eightbits=216;
	display_32bitint(frst_eightbits,scnd_eightbits,thrd_eigtbits,fourth_eightbits);

	return 0;
}

void display_32bitint(uint8_t a,uint8_t b,uint8_t c,uint8_t d)
{
    uint32_t int_32bit = d;
    int_32bit = (int_32bit << 8) + c;
    int_32bit = (int_32bit << 8) + b;
    int_32bit = (int_32bit << 8) + a;
    printf("8 bit integers which are given are %d %d %d %d\n",a,b,c,d);
    printf("of the given inputs 32 bit result is: 0x%X\n",int_32bit);
}
