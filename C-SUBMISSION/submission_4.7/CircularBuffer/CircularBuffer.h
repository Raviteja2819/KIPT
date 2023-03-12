#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 7


void menu(){
    printf("\n");
    printf(" 1 - If you wish to enter a new element \n 2 - If you wish to Remove an element \n 3 - If you wish to view the circular buffer \n 4 - Exit \n");
}


void enQue(char *s, char element, int flag){
    if(flag < N){
        *(s + flag) = element;
    }
    else{
        printf("The array is already full and now the elements that will be entered will override the oldest elements.");
        flag = 0;
        *(s + flag) = element;
    }
    printf("\n");
}

void deQue(char *s, int flag){
    *(s + flag) = '*';
    printf("\n");
}

void Display(char *s){
    int flag = 0;
    for(int i = 0; i < N; i++){
        if(s[i] != '*'){
            printf("%c ", s[i]);
            flag = 1;
        }
    }
    if(flag == 0)
        printf("Either no elements have been pushed or all the elements have been removed. ");

    printf("\n \n");
}
