#include <stdio.h>
#include <inttypes.h>
int main(void)
{
    uint32_t d1;
    uint8_t *cptr;
    d1 = 1;
    cptr = (uint8_t *)&d1;
    if (*cptr == 1)
    {
        printf("lttlendian");
    }
    else if (*cptr == 0)
    {
        printf("bigendian");
    }
    return 0;
}
