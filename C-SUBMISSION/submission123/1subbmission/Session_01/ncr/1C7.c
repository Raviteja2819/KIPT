#include <stdio.h>
#include <stdlib.h>

int factor(int n);

int NCR(int n, int r)
{
    return factor(n) / (factor(r) * factor(n - r));
}
int factor(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int main()
{
    int n = 5, r = 3;
    printf("%d", NCR(n, r));
    return 0;
}
