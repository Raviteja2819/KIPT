#ifndef RATIONAL_NUMBERS_H_INCLUDED
#define RATIONAL_NUMBERS_H_INCLUDED
#include<math.h>
int gcd(int a,int b){
int v=0,y=0;
v=(a<b)?a:b;
for(int i=1;i<=v;i++){
    if(a%i==0 && b%i==0){
        y=i;
    }
}
return y;
}
void addition(int a,int b,int c,int d,int *e,int *f){
    *e=a*d+b*c;
    *f=b*d;
}
void subtraction(int a,int b,int c,int d,int *e,int *f){
    *e=a*d-b*c;
    *f=b*d;
}
void multiplication(int a,int b,int c,int d,int *e,int *f){
    *e=a*c;
    *f=b*d;
}
void division(int a,int b,int c,int d,int *e,int *f){
    *e=a*d;
    *f=b*c;
}
void integer_power(int a,int b,int c,int *e,int *f){
    *e=pow(a,c);
    *f=pow(b,c);
}
void real_power(int a,int b,double c,double *e,double *f){
    *e=pow(a,c);
    *f=pow(b,c);
}
void rational_number(int a,int b,double c,double *e){
    float aa,bb;
    bb=1/b;
    aa=pow(c,a);
    *e=pow(aa,bb);
}
#endif // RATIONAL_NUMBERS_H_INCLUDED
