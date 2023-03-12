#include <stdio.h>
int main() {
    float array[100], sum = 0.0, average;
    int n, i;
    printf("please enter number of elements in an array");
    scanf("%d", &n);
    while (n > 100 || n < 1) {
        printf("the number of elements for the array is too large");
        printf("please enter the number of elements in array again");
        scanf("%d", &n);
    }
    for (i = 0; i < n; ++i) {
        printf("enter the %d element", i + 1);
        scanf("%f", &array[i]);
        sum += array[i];
    }

    average = sum / n;
    printf("Average of the array is = %.2f", average);
    return 0;
}
