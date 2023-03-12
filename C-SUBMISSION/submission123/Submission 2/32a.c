#include<stdio.h>
/* Function declarations */
int add(int a,int b){
    return (a+b);
}
int sub(int a,int b){
    return (a-b);
}
int main()
{
    int s,d;
    int (* ravi)(int, int);	// Function pointer declaration
    ravi = &add; 			   // Function pointer initialization
    s=ravi(10,52);
    printf("sum s=%d\n",s);
    ravi=sub;
    d=ravi(42,2);
    printf("difference d=%d",d);
    return 0;
}
