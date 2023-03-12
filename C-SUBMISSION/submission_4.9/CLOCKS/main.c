#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void addition(int *hour,int *min,int *a)
{
    *min = *min + *a;
    while(*min >59)
    {
        (*hour)++;
        if(*hour>23)
        {
            *hour=0;
        }
        *min = *min-60;
    }

}
void sub(int *hour,int *min,int *b)
{
    *min = *min + *b;
    while(*min<0)
    {
        (*hour)--;
        if(*hour<0)
        {
            *hour = 23;
        }
        *min=*min+60;
    }
}
int main()
{
    int a,b,c;

    printf("Enter the time:\nhour:");
    scanf("%d",&a);
    printf("minutes:");
    scanf("%d",&b);
    printf("Enter the minutes to add or subtract:");
    scanf("%d",&c);

    if(c>0)
    {
        addition(&a,&b,&c);
        printf("Time after addition: ");
    }
    else
    {
        sub(&a,&b,&c);
        printf("Time after subtraction: ");
    }
    printf("%d:%d",a,b);
    return 0;
}
