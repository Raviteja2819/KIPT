#include <stdio.h>
void myfuncn( int *a, int i)
{
    for(int x=7; x>=0; x--)
    {
        printf("Value of array[%d] is: %d \n", x, *a);
        a++;
    }
}

int main()
{
     int array[] = {11, 22, 33, 44, 55, 66, 77};
     myfuncn(array, 7);
     return 0;
}
