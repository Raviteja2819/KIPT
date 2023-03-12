#include<stdio.h>

int main() {
   char string1[30], string2[30];
   int i;

   printf("\nEnter two strings :");
   gets(string1);
   gets(string2);

   i = 0;
   while (string1[i] == string2[i] && string1[i] != '\0')
      i++;
   if (string1[i] > string2[i])
      printf("string1 > string2");
   else if (string1[i] < string2[i])
      printf("string1 < string2");
   else
      printf("string1 = string2");

   return (0);
}
