#include<stdio.h>
#include<string.h>
int main(){
    char *register_color[]={"Black","Brown","Red","Orange","Yellow","Green","Blue","Violet","Grey","White"};
    char c[10];

    printf("Scan a color ");
    scanf("%s",c);
    for(int i=0;i<10;i++){
        if(strcmp(c,register_color[i])==0){
                printf("%d",i);
        }
    }
    return 0;
}
