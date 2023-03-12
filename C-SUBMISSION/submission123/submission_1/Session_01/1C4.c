#include <stdio.h>
int main() {
    int first, second, min;
    printf("Enter two positive integers: ");
    scanf("%d %d", &first, &second);
    min = (first > second) ? first : second;

    while (1) {
        if (min % first == 0 && min % second == 0) {
            printf("The LCM of %d and %d is %d.", first, second, min);
            break;
        }
        ++min;
    }
    return 0;
}
