#include <stdio.h>
int main()
{
   char string1[100], string2[1000];
   int begin, end, count = 0;
   int b=0;

   printf("Input a string\n");
   gets(string1);
   gets(string2);


   while (string1[count] != '\0')
      count++;

   end = count - 1;

   for (begin = 0; begin < count; begin++) {
      if(string1[begin]==string2[0])
      {
          b=1;
          break;
      }
   }
   if(b==1)
   {
       printf("the charecter is present");
   }
   else
    printf("charecter is not present");



   return 0;
}
