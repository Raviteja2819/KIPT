#include <stdio.h>

void main()
{
    int  number, binaryvalue, decimalvalue = 0, b = 1, remaider;

    printf("Enter a binary number containing 1s and 0s \n");
    scanf("%d", &number);
    binaryvalue = number;
    while (number > 0)
    {
        remaider = number % 10;
        decimalvalue = decimalvalue + remaider * b;
        number = number / 10 ;
        b = b * 2;
    }
    printf("The Binary value of the number is = %d \n", binaryvalue);
    printf("Its decimal value is = %d \n", decimalvalue);
}
