#include<stdio.h>
int main()
{
 int i, j, r, c, a[10][10], b[10][10];

 printf("\nenter Number of r and c\n");
 scanf("%d %d", &i, &j);

 printf("\n enter the Elements \n");
 for(r = 0; r < i; r++)
  {
   for(c = 0;c < j; c++)
    {
      scanf("%d", &a[r][c]);
    }
  }
 for(r = 0; r < i; r++)
  {
   for(c = 0;c < j; c++)
    {
      b[c][r] = a[r][c];
    }
  }

 printf("\nelemnts of transpose matrix are: \n");
 for(r = 0; r < j; r++)
  {
   for(c = 0; c < i; c++)
    {
      printf("%d \t ", b[r][c]);
    }
    printf("\n");
  }

return 0;
}
