#include<stdio.h>
#include<stdint.h>
int main(){
	uint32_t ipaddress =0xFABDCCFF;
	uint8_t  frsteightbits=(ipaddress)&(0xFF);
	uint8_t  scndeightbits=(ipaddress>>8)&(0xFF);
	uint8_t thirdeightbits=(ipaddress>>16)&(0xFF);
	uint8_t fourtheightbits=(ipaddress>>24)&(0xFF);
	printf("frsteightbits are %x\n",frsteightbits);
	printf("scndeightbits are %x\n",scndeightbits);
	printf("thirdeightbits are %x\n",thirdeightbits);
	printf("fourtheightbits are %x\n",fourtheightbits);

	return 0;
}
