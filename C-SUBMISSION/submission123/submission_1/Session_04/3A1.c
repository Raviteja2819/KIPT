#include <stdio.h>
int sum (int a);
int main()
{
    int number, sumofdigits;

    printf("Enter the number for which you want to find sum of digits: ");
    scanf("%d", &number);
    sumofdigits = sum(number);
    printf("Sum of digits in %d is %d\n", number, sumofdigits);
    return 0;
}

int sum (int number)
{
    if (number != 0)
    {
        return (number % 10 + sum (number / 10));
    }
    else
    {
       return 0;
    }
}
