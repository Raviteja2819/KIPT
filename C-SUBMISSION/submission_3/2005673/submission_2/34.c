#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "45";
    char str2[] = "3.14159";
    char str3[] = "31337 string";

    int myint1 = atoi(str1);
    int myint2 = atoi(str2);
    int myint3 = atoi(str3);
    printf("%d\n%d\n%d",myint1,myint2,myint3);

    return 0;
}
