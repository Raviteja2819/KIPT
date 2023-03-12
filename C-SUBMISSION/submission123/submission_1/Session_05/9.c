#include <stdio.h>
int main()
{
int day,month,year;
int a=0;
printf("Enter date in day/month/yearyear format: ");
scanf("%d/%d/%d",&day,&month,&year);
if(year>=1900 && year<=9999)
{
if(month>=1 && month<=12)
{
//check days
if((day>=1 && day<=31) && (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12))
printf("Date is valid.\n");
else if((day>=1 && day<=30) && (month==4 || month==6 || month==9 || month==11))
printf("Date is valid.\n");
else if((day>=1 && day<=28) && (month==2))
printf("Date is valid.\n");
else if(day==29 && month==2 && (year%400==0 ||(year%4==0 && year%100!=0)))
printf("Date is valid.\n");
else
printf("Day is invalid.\n");
a=1;
}
else
{
printf("Month is not valid.\n");
a=1;
}
}
else
{
printf("Year is not valid.\n");
a=1;
}
if(a!=1)
{
    if((((year % 4 == 0) && (year % 100 != 0)) ||
             (year % 400 == 0)))
             {
                 printf("Leap year");
             }
             else
                printf("not a leap year");
}
return 0;
}
