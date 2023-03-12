#include <stdio.h>
int main() {
    int number;
    printf("please enter a number: ");
    scanf("%d", &number);
    if(number % 2 == 0)
        printf("%d is an even number.", number);
    else
        printf("%d is an odd number.", number);

    return 0;
}
