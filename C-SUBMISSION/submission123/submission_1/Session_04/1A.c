#include <stdio.h>

double avgarr(int arr[], int n)
{
    int s= 0;
    for (int i=0; i<n; i++)
       s =s+ arr[i];

    return s/n;
}
int main()
{
    int n,i;
    scanf("%d",&n);

    int arr[]={1,5,9,6,3,4,8,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << avgarr(arr, n) ;
    return 0;
}
