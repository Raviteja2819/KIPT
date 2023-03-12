#include <stdio.h>
#include <stdlib.h>
#include "Rational Numbers.h"
int main()
{
    int q=0,w=0,e=0,r=0,n=0,d=0,g=0,z=0;
    printf("Scan the  numerator  of ration number1: ");
    scanf("%d",&q);
    printf("Scan the denominator of ration number1: ");
    scanf("%d",&w);
    printf("Scan the  numerator  of ration number2: ");
    scanf("%d",&e);
    printf("Scan the denominator of ration number2: ");
    scanf("%d",&r);
    addition(q,w,e,r,&n,&d);
    g=gcd(n,d);
    printf("addition of two given rational numbers is %d/%d\n",n/g,d/g);
    subtraction(q,w,e,r,&n,&d);
    g=gcd(n,d);
    printf("subtraction of two given rational numbers is %d/%d\n",n/g,d/g);
    multiplication(q,w,e,r,&n,&d);
    g=gcd(n,d);
    printf("multiplication of two given rational numbers is %d/%d\n",n/g,d/g);
    division(q,w,e,r,&n,&d);
    g=gcd(n,d);
    printf("division of two given rational numbers is %d/%d\n",n/g,d/g);
    printf("\nScan the number power n: ");
    scanf("%d",&z);
    integer_power(q,w,z,&n,&d);
    g=gcd(n,d);
    printf("integer power n to rational number 1 is %d/%d\n",n/g,d/g);
    double ff,nn,dd;
    printf("\nScan the real number: ");
    scanf("%lf",&ff);
    real_power(q,w,ff,&nn,&dd);
    printf("real power ff to the rational number1 is%.3lf/%.3lf\n",nn,dd);
    printf("Scan the real number x:");
    scanf("%lf",&ff);
    rational_number(q,w,ff,&nn);
    printf("number x to the power of rational number1 is  %.3lf\n",nn);
    return 0;
}
