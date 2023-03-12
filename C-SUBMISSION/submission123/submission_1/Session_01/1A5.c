#include<stdio.h>

int main() {
   int number1, number2;

   printf("\nEnter First Number: ");
   scanf("%d", &number1);

   printf("\nEnter Second Number: ");
   scanf("%d", &number2);

   number1 = number1 ^ number2;
   number2 = number1 ^ number2;
   number1 = number1 ^ number2;

   printf("\n after exchaning the numbers are : \n");
   printf("\n number1 = %d \n number2 = %d", number1, number2);

   return(0);
}
