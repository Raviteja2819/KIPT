#include <stdio.h>
int main()
{
    int i, number, s = 0;
    printf("to check perfect number Enter any number : ");
    scanf("%d", &number);
    for(i = 1; i < number / 2; i++)
    {
        if(number%i == 0)
        {
            s += i;
        }
    }
    if(s == number)
    {
        printf("%d the given number is a perfect number", number);
    }
    else
    {
        printf("%d the given number is not a perfect number", number);
    }

    return 0;
}
