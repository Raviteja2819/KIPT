#include <stdio.h>
void sum(int m, int n, int arr[][n],int arr2 [][n])
{
    int i, j;
    for (i = 0; i < m; i++){
      for (j = 0; j < n; j++){
        printf("%d ",(arr[i][j]+arr2[i][j]));
}
    }
}
int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[][3]={{1,5,6},{8,6,5},{3,2,1}};
    int m = 3, n = 3;
    sum(m, n, arr, arr2);
    return 0;
}
