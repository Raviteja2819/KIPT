#include <stdio.h>
#include <stdlib.h>
#include "binary_search.h"
int main()
{
    int l=0,f=0;
    printf("Length of an array is:");
    scanf("%d",&l);
    int arr[]={0};
    for(int i=0;i<l;i++){
            printf("Scan the element %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("\nScan the number to find\n");
    scanf("%d",&f);
    int position=bs(arr,0,l-1,f);
    (position==-1)?printf("No such number is present in the array"):printf("position of the element(%d) is:%d",f,position);
    return 0;
}
