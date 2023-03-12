#include <stdio.h>
int hrner(int polynomial[], int n, int x)
{
    int res = polynomial[0];
    for (int i=1; i<n; i++)
        res = res*x + polynomial[i];

    return res;
}
int main(){
    int polynomial[] = {1, -6, 9, -1};
    int x = 3;
    int n = sizeof(polynomial)/sizeof(polynomial[0]);
    printf("Value of polynomial is %d",hrner(polynomial, n, x));
    return 0;
}
