
#include <stdio.h>
void  cube(int *x)
{
    *x = (*x) * (*x) * (*x);
}
int main()
{
    int a=4;
    cube(&a);
    printf("the cube of the given number is %d", a);
    return 0;
}


