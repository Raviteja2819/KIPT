#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("target coordinates are\n");
    scanf("%f  %f",&a,&b);
    c=pow(a,2)+pow(b,2);
    printf("c=%f \n",c);
    if(c>100.0){
        printf("the dart lands outside the target, player earns no points");
    }
    else if(c<=100 && c>25){
        printf("the dart lands in the outer circle of the target, player earns 1 point");
    }
    else if(c<=25 && c>1){
        printf("the dart lands in the middle circle of the target, player earns 5 points");
    }
    else{
        printf("the dart lands in the inner circle of the target, player earns 10 points");
    }
    return 0;
}
