#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int n=0;
    printf("1-To enter the string\n2-To get the output\n\nChoose any of the statement:");
    scanf("%d",&n);
    int arr[100]={0},f=0,g=0;
    while(n==1){
        char c[10];
        printf("\nEnter the string:");
        scanf("%s",c);
        f=g;
        for(int i=0;i<strlen(c);i++){
            if(isdigit(c[i])!=0){
                arr[f]=c[i]-'0';
                f++;
            }
        }
        g++;

        printf("\nChoose any of the statement:");
        scanf("%d",&n);

    }
    printf("\n\n\"");
    for(int i=0;arr[i]!='\0';i++){
        printf("%d",arr[i]);
    }
    printf("\"");
    return 0;
}
