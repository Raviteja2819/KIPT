#include <stdio.h>

int main(int argmnt, char *argv[])
{
    int number1, number2, minnimum, maximum;

    if (argmnt == 2) {
        scanf("%d %d", &number1, &number2);
        if(number1>number2)
            maximum=number1, minnimum=number2;
        if(number2>number1)
            maximum=number2, minnimum=number1;

        printf("The smaller one is %d \n", minnimum);
    }
}
