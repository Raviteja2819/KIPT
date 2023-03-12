#include <stdio.h>

void main()
{  int n;

    int i,  numtofind, f = 0;

    printf("enter no of elements of array");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched ");
    scanf("%d", &numtofind);
    for (i = 0; i < n ; i++)
    {
        if (numtofind == arr[i] )
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
        printf("the element is found at %d",i+1);
    else
        printf("we cant find the element\n");
}
