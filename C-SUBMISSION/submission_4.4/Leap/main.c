#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year=0;
    printf("Get the year:");
    scanf("%d",&year);
    if(year%4==0){
        if(year%100!=0 || year%400==0){

                printf("Yes,it is a leap year");

        }
    }

    return 0;
}
