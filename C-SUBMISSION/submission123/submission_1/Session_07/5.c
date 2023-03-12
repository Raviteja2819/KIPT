#include <stdio.h>
#include <inttypes.h>
typedef union
{
    uint32_t u32radata;
    uint8_t  au8DataBuff[4];
} radata;
int main(void)
{
    radata checkendianess;
    checkendianess.u32radata = 1;
    if (checkendianess.au8DataBuff[0] == 1)
    {
        printf("the sysytem is little-endian");
    }
    else if (checkendianess.au8DataBuff[0] == 0)
    {
        printf("the system is big-endian");
    }
    return 0;}
