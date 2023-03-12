//Constant Pointers
#include <stdio.h>
int main()
{
    int x=1;
    int *const ptr=&x;
    *ptr=2;
    ++*ptr;
    //++ptr; gives error
    //ptr=&a; gives error
    printf("Value of ptr is :%d",*ptr);
    return 0;
}
