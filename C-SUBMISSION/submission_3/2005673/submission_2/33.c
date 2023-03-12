#include<stdio.h>
char *mystrcpy(char *des,char *src){
    for(int i=0;i<src[i]!='\0';i++){
        des[i]=src[i];
    }

    return des;
}
int main(){
    char str1[]="Hello KPIT";
    char dest[40]="I am an engineer";
    mystrcpy(dest,str1);
    for(int j=0;j<str1[j]!='\0';j++){
        printf("%c",dest[j]);
    }
    printf("\n");
    for(int j=0;j<str1[j]!='\0';j++){
        printf("%c",str1[j]);
    }
    return 0;
}

