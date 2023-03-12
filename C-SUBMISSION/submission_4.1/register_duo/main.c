#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char *register_color[]={"Black","Brown","Red","Orange","Yellow","Green","Blue","Violet","Grey","White"};
    char str1[10],str2[10],str3[10];
    scanf("%s %s %s",str1,str2,str3);
    printf("colors of the register are %s-%s-%s",str1,str2,str3);
    int a,b;
    for(int i=0;i<10;i++){
        if(strcmp(str1,register_color[i])==0){
                a=i;
        }
        if(strcmp(str2,register_color[i])==0){
                b=i;
        }
    }
    return (a*10+b);
}
