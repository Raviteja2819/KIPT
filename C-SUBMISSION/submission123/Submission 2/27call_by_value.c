
#include<stdio.h>
void swap(int a,int b){
    int c;
    printf("a=%d and b=%d before swap in function\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("a=%d and b=%d after swap in function\n",a,b);
    return;
}

int main(){
    int x=1;
    int y=2;
    printf("values of x and y before swap are %d \t %d\n",x,y);
    swap(x,y);//calling a function to swap the values
    printf("values of x and y after swap are %d \t %d",x,y);
    /* since there is no change absorbed in x and y values that means there is
    no effect in argument but changes made to the parameters  inside function this called as call by value */
    return 0;
}
