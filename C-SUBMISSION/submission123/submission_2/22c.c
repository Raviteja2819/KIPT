//Constant Pointer to a Constant
#include <stdio.h>
int main()
{
    int x=1;
    int y=2;
    const int* const ptr=&x;
    //*ptr=12; error
    //ptr=&b;  error
    printf("Value of ptr is :%d",*ptr);
    return 0;
}
