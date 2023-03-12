#include <stdio.h>
int main()
{
    char str1[20];
    fgets(str1, 19, stdin);
    printf("%s\n", str1);

    return 0;
}
