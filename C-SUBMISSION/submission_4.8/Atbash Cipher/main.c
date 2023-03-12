#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chpier[]="zyxwvutsrqponmlkjihgfedcba";
    int n=0;
    printf("1-Encoding\n2-Decoding\n3-EXIT\n");
    printf("\n-----------------------------\nChoose any of the following:");
    scanf("%d",&n);
    while(1){

        char c[20],p[20];
        if(n==1){
        printf("\nEnter the text to encode:");
        scanf("%s",c);
        for(int i=0;c[i]!='\0';i++){

            if(c[i]>=0)
            p[i]=chpier[c[i]-'a'];
            else{
                p[i]=' ';
            }
        }
        printf("\nEncoding input gives:%s",p);
        }
        else if(n==2){
        printf("\nEnter the text to decode:");
        scanf("%s",c);
        for(int i=0;c[i]!='\0';i++){
            p[i]=chpier[c[i]-'a'];
        }
        printf("\ndecoding input gives:%s",p);
        }
        else
        {
            return 0;
        }
        printf("\n-------------------------\nChoose any of the following:");
        scanf("%d",&n);
    }
    return 0;
}
