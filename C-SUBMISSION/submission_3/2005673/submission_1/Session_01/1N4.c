#include <stdio.h>
int main() {
   int row, coefficient = 1, spc, i, j;
   printf("please enter the number of rows for pascal triangle: ");
   scanf("%d", &row);
   for (i = 0; i < row; i++) {
      for (spc = 1; spc <= row - i; spc++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            coefficient = 1;
         else
            coefficient = coefficient * (i - j + 1) / j;
         printf("%4d", coefficient);
      }
      printf("\n");
   }
   return 0;
}
