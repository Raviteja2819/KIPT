#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int h=0;
    char c[30],s[30];
    printf("SCAN the DNA1:");
    scanf("%s",c);
    printf("SCAN the DNA2:");
    scanf("%s",s);
    for(int i=0;i<strlen(c);i++){
        if(c[i]!=s[i]){
            h++;
        }
    }
    printf("They have %d differences, and therefore the Hamming Distance is %d.",h,h);
    return 0;
}
