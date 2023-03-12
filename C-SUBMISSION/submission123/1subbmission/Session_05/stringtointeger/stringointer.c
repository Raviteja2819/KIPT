#include<stdio.h>
#include <stdlib.h>

int main() {

    char str[10];
    gets(str);
    int x = atoi(str);
    printf("Converting str: %d\n", x);
    return 0;
}
