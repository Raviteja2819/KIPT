#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

union ipaddressestoint
{
    char ipadd[16];
    long  n;
};

long  conversion(char []);

int main()
{
    union ipaddressestoint ipl;
    printf("please enter the IP address you want to be converted:");
    scanf("%s",ipl.ipadd);

    ipl.n=conversion(ipl.ipadd);

    printf("\nIP address after converting to 32-bit long int is :: %lu \n",ipl.n);
}

long conversion(char ipaddress[])
{
    long num=0,val;
    int p=24;
    char *tok,*ptr;
    tok=strtok(ipaddress,".");
    while( tok != NULL)
    {
        val=strtol(tok,&ptr,10);
        num+=  val * (long)pow(2,p);
        p=p-8;
        tok=strtok(NULL,".");
    }
    return(num);
}
