#include<stdio.h>
main()
{
       int number1,number2,number3,number4;
       printf("Enter the Four Numbers :");
       scanf("%d %d %d %d",&number1,&number2,&number3,&number4);
       if(number1>number2)
        {
             if(number1>number3)
              {
                 if(number1>number4)
                  {
                     printf("%d is big",number1);
                   }
                 else
                  {
                     printf("%d is big",number4);
                   }
               }
          }
              else if(number2>number3)
                      {
                           if(number2>number4)
                             {
                                 printf("%d is big",number2);
                              }
                            else
                             {
                                 printf("%d is big",number4);
                             }
                       }
               else if(number3>number4)
                      {
                             printf("%d is big",number3);
                       }
              else
               {
                    printf("%d is big",number4);
               }
                    getch();
}
