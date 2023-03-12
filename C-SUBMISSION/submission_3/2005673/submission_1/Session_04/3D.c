#include <stdio.h>
int parity(int n)
{
    if (n == 0)
        return 0;

    if((n & 1) == 1)
        printf("%d", 1 + parity(n >> 1));
    else
        printf("%d", parity(n >> 1));
}

int main()
{
    int n = 21;
    parity(n);

    return 0;
}
