#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n=0;
    printf("Scan the NUMBER: ");
    scanf("%d",&n);
    unsigned long int a=0,b=0;
    for(int i=1;i<=n;i++){
        a=a+i;
        b=b+pow(i,2);
    }
    a=pow(a,2);
    printf("the difference between the square of the sum of the %d natural numbers and \nthe sum of the squares of the %d natural numbers is %lu",n,n,a-b);
    return 0;
}
