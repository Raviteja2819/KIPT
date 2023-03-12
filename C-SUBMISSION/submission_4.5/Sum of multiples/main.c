#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,x=0;
    printf("Scan the number:");
    scanf("%d",&n);
    printf("\nHow many different number of multiples to verify?:");
    scanf("%d",&x);
    int arr[x];
    for(int i=1;i<=x;i++){
        printf("\nscan the multiple number %d:",i);
        scanf("%d",&arr[i-1]);
    }
    int sum=0;
    for(int i=1;i<n;i++){
    for(int j=0;j<x;j++){
        if(i%arr[j]==0){
           sum=sum+i;
           break;
        }
    }}
    printf("%d",sum);

    return 0;
}
