#include<stdio.h>
void swap_call_by_value(int a,int b){
    int c;
    printf("a=%d and b=%d before swap by value in function\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("a=%d and b=%d after swap by value in function\n",a,b);
    return;
}
void swap_call_by_ref(int *i,int *j){
    int k;
    printf("*i=%d and *j=%d before swap by ref in function\n",*i,*j);
    k=*i;
    *i=*j;
    *j=k;
    printf("*i=%d and *j=%d after swap by ref in function\n",*i,*j);
    return;
}


int main(){
    int x=1;
    int y=2;
    printf("values of x and y before swap by value are %d \t %d\n",x,y);
    swap_call_by_value(x,y);//calling a function to swap the values
    printf("values of x and y after swap by value are %d \t %d\n",x,y);
    /* since there is no change absorbed in x and y values that means there is
    no effect in argument but changes made to the parameters  inside function this called as call by value */
    swap_call_by_ref(&x,&y);
    printf("values of x and y after swap by reference are %d \t %d",x,y);
    return 0;
}
