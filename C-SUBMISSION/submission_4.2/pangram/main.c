#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char c[100],s[26]="abcdefghijklmnopqrstuvwxyz";
    scanf("%[^\n]%*c",c);
    int l=strlen(c);
    int arr[26]={0};
    for(int i=0;i<l;i++){
        c[i]=tolower(c[i]);
        for(int j=0;j<26;j++){
            if(c[i]==s[j]){
                arr[j]++;
            }
        }
    }
    int a=0;
    for(int i=0;i<26;i++){
        if(arr[i]<1){
            a=1;
            break;
        }
    }
    if(a==0){
        printf("PANGRAM");
    }
    else
        printf("NOT a PANGRAM");
    return 0;
}

