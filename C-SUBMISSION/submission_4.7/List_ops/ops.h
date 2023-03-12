#ifndef OPS_H_INCLUDED
#define OPS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

void append(int arr[],int brr[]){
    int a=0,b=0;
    while(arr[a] !='\0'){
        a++;
    }
    while(brr[b] !='\0'){
        b++;
    }
    for(int i=a;i<a+b;i++){
        arr[i]=brr[i-a];
    }

}
void concatenate(int arr[],int brr[],int crr[]){
    append(arr,brr);
    append(arr,crr);
}
void filter(int q,int arr[],int *c){
    int a=0,brr[100],b=0;

    while(arr[a] !='\0'){
            if(q==1 && arr[a]%2==0){
                brr[b]=arr[a];
                arr[b]=brr[b];
                b++;
            }
            if(q==2 && arr[a]%2!=0){
                brr[b]=arr[a];
                arr[b]=brr[b];
                b++;
            }

        a++;
    }
    *c=b;
}
void length(int arr[],int *p){
    int a=0;
    while(arr[a]!='\0'){
        a++;
        }
    *p=a;
}
void mapp(int arr[]){
    int a=0,x=0;
    while(arr[a]!='\0'){
        x=arr[a];
        x=3*x+5;
        arr[a]=x;
        a++;
        }
}
void reversee(int arr[]){
    int a=0,brr[100],b=0;
    while(arr[a]!='\0'){
        brr[a]=arr[a];
        a++;
        }
    while(a>0){
        arr[b]=brr[a-1];
        a--;
        b++;

    }

}

#endif // OPS_H_INCLUDED
