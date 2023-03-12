#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void sum (int a, int b);
void dif (int a, int b);
void pro (int a, int b);
void quo (int a, int b);
void printMenu();

int main (void) /*begin program execution*/
{

    printf("Hello, Welcome to the Calculator Program! This program allows you to select a mode of operation and enter two numbers to apply this operation.");

    void(*c[ 4 ]) (int, int) = {sum, dif, pro, quo};/*intialize array of 4 pointers to functions that each take an arguement and return void*/

    int userSelect = 0; /*menu selection*/

    do{
        printMenu();
        scanf_s("%d", &userSelect);
    } while (userSelect < 0 || userSelect > 4); /*end do...while*/

    if (userSelect = 1){
        sum (int a, int b);
    } /*end if*/
    else (userSelect = 2);{
        dif (int a, int b);
    } /*end else*/
    if (userSelect = 3){
        pro (int a, int b);
    }
    else (userSelect = 4);{
        quo (int a, int b);
    }

    return 0;

} /*end main*/

void printMenu()
{
    printf("Menu:\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4. Division\n");
}

void sum (int a, int b)
{
    printf("Enter first number");
    scanf_s("%d", a);
    printf("Enter second number");
    scanf_s("%d", b);
    sum = int a + int b;
    printf("Sum is:%d\n", sum);

}
void dif (int a, int b)
{
    printf("Enter first number");
    scanf_s("%d", a);
    printf("Enter second number");
    scanf_s("%d", b);
    dif = int a - int b;
    printf("Difference is:\n", dif);
}
void pro (int a, int b)
{
    printf("Enter first number");
    scanf_s("%d", a);
    printf("Enter second number");
    scanf_s("%d", b);
    pro = int a * int b;
    printf("Product is:%d\n", pro);
}
void quo (int a, int b)
{

    printf("Enter first number");
    scanf_s("%d", a);
    printf("Enter second number");
    scanf_s("%d", b);
    quo = a / b;
    printf("Quotient is:%d\n", quo);
}
