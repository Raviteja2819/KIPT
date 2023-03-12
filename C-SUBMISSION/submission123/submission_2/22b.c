//Pointer to Constant
#include <stdio.h>
int main()
{
    int x=1;
    int y=2;
    const int* ptr;
    ptr=&y;
    ptr=&x;
    ++ptr;
    //*ptr=200;
    printf("Value of ptr is :%u",ptr);
    return 0;
}
