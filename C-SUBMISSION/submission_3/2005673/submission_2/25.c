#include<stdio.h>
int main(){
const int x= 1;
int *ptr;
ptr= &x; //?? dicards 'const' qualifier from target type
*ptr= 2; //?? will this work, will it give warning? yes this will work
printf("%d",*ptr);
return 0;
}
