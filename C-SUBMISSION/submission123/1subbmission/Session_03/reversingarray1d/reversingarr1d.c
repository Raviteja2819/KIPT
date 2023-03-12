#include <stdio.h>

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int len = sizeof(array)/sizeof(array[0]);

    printf("elements of original array are");
    for (int i = 0; i < len; i++) {
        printf("%d ", array[i]);
    }

    printf("\n\nthe elements of array in reverse order: \n");
    for (int i = len-1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    return 0;
}
