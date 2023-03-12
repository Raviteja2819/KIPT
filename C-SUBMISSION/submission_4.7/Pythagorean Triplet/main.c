#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int checkpythogean(int x,int y,int z){
    int c=pow(z,2);
    int b=pow(y,2);
    int d=pow(x,2);
    int p=0;
    if(c==b+d){
            p=100;
    }
    return p;
}
int main()
{
    int n=0,a[3];
    printf("Enter the Input Integer N:");
    scanf("%d",&n);
    int q=0;
    for(int i=1;i<=n-2;i++){
        a[0]=i;
        for(int j=i;j<=n-2;j++){
        a[1]=j;
        a[2]=n-(i+j);
            if(a[1]<=a[2]){
                int o=checkpythogean(a[0],a[1],a[2]);
                if(o==100){
                q++;
                printf("%d,%d,%d are the Pythagorean Triplet within the given N\n",a[0],a[1],a[2]);
                }
            }

    }
    }
    if(q==0){
        printf("No the Pythagorean Triplet within the given N");
    }
    return 0;
}
