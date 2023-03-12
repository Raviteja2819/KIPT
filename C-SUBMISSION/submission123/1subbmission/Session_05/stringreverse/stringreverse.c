#include <stdio.h>
int main()
{
   char string1[100], string2[1000];
   int begin, end, count = 0;

   printf("Input a string\n");
   gets(string1);


   while (string1[count] != '\0')
      count++;

   end = count - 1;

   for (begin = 0; begin < count; begin++) {
      string2[begin] = string1[end];
      end--;
   }

   string2[begin] = '\0';

   printf("%s\n", string2);

   return 0;
}
