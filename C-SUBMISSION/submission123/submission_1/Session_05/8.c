#include <stdio.h>
int time(int hh , int mm , int ss)
{
    int hs=hh*60*60;
    int ms=mm*60;
    int seconds=hs+ms+ss;
    return seconds;
}
int main()
{
    char string[100]={0};
    int ret=0,hour=0,min=0,sec=0;

    printf("\nEnter the time in \"hh:mm:ss\" format : ");
    fgets(string,100,stdin);
    sscanf(string , "%d:%d:%d" , &hour,&min,&sec);
    ret = time(hour,min,sec);
    return 0;
}
