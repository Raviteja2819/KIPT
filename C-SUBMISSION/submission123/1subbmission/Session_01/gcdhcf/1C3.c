#include <stdio.h>
int gcd(int first, int second)
{
    if (second == 0)
        return first;
    return gcd(second, first % second);
}
int main()
{
    int first = 98, second = 56;
    printf("GCD of %d and %d is %d ", first, second, gcd(first, second));
    return 0;
}
