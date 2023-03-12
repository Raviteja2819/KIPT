#include <stdio.h>
int main() {
    int number, i, f = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    for (i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            f = 1;
            break;
        }
    }

    if (number == 1) {
        printf("the number is 1which is neither prime nor composite.");
    }
    else {
        if (f == 0)
            printf("%dthe given number is a prime number.", number);
        else
            printf("%d the given number is not a prime number.", number);
    }

    return 0;
}
