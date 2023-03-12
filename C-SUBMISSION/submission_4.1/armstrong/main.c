#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int armstrong(int x){
    int a=0;
    int y=x,z=x;
    while(y!=0){
        a++;
        y=y/10;
    }
    int sum=0;
   // printf("a=%d",a);
    for(int i=0;i<a;i++){
        int k=0;
        k=z%10;
        z=z/10;
        int m= pow(k,a);
        sum=sum+m;
        //printf(" sum is = %d\n k=%d\n m=%d\n",sum,k,m);
    }

    return(sum);
}

int main()
{
    int l=0,p=0;
    printf("give a number= ");
    scanf("%d",&l);

    p=armstrong(l);
    if(p==l){
        printf("given number is armstrong number\n");
    }
    else{
        printf("given number is not armstrong");
    }
    return 0;
}
