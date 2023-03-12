#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^\n]%*c",s);
    int arr[27]={0},l=0;
    l=strlen(s);
    char crr[27]="abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<l;i++){
        if(s[i]>=65&&s[i]<=90){
         s[i]=s[i]+32;
        }

        for(int j=0;j<27;j++){

            if(s[i]==crr[j]){
                arr[j]++;
            }
        }
    }
    int p=0;
    for(int i=0;i<27;i++){
        if(arr[i]>1){
            p=1;
            break;
        }
    }
    if(p==1){
        printf("NOT isogram");
    }
    else{
        printf("Isogram");
    }
    return 0;
}
