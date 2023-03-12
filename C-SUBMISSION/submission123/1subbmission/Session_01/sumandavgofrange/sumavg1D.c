#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum=0;
    printf("enter no of elements of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("the sum of elements is: %d ",sum);
    printf("the average of array is: %d",(sum/n));

    return 0;
}
