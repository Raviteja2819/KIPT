#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(){
    int s=0;
    printf("Scan the number to find the square root ");
    scanf("%d",&s);
    int a;
    a=s/2;

    float r1,r2,x,rn1,rn2;
    x=(float)a;
    if(x*x!=s){
        r1=0.5*(x+s/x);
        r2=0.5*(r1+s/r1);
        while(r1-r2>=0.0001){
            rn1=0.5*(r2+s/r2);
            rn2=0.5*(rn1+s/rn1);
            r2=rn2;
            r1=rn1;
        }
        printf("a %.4f",r2);
    }
    else{
        printf("c %.2f",x);
    }

    return 0;
}
