#include<stdio.h>
#define LENGTH 26
#define ROW 2
#define COL 3
int brr[ROW][COL];
int arr[LENGTH];
int main(){
    for(int i=0;i<LENGTH;i++){
        printf("arr[%d]= %d \n",i+1,i*10);
    }
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            printf("brr[%d][%d]=%d\n",i,j,i+j);
        }
    }
    return 0;
}
