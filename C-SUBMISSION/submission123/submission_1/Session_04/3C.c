#include <stdio.h>
int sumofnumbers(int n);
int main() {
    int num;
    printf("enter the number upto which you want sum");
    scanf("%d", &num);
    printf("Sum = %d", sumofnumbers(num));
    return 0;
}

int sumofnumbers(int n) {
    if (n != 0)
        return n + sumofnumbers(n - 1);
    else
        return n;
}
