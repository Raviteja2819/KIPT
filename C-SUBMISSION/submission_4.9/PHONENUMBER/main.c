#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char number[20],arr[10];
    scanf("%[^\n]%*c",number);
    uint8_t n=strlen(number);
    uint8_t j=0,l=0;
    for(int i=0;i<n;i++)
    {
        if(isdigit(number[i])!=0)
        {
            arr[j]=number[i];
            //printf("%c,%c,%d,%d\n",number[i],arr[j],i,j);
            j++;
        }
    }
    l=(int)arr[0]-'0';
    if(l>1)
        {
            printf("%d",l);
        }
    for(int k=1;k<j;k++)
    {
        printf("%c",arr[k]);
    }
    return 0;
}
