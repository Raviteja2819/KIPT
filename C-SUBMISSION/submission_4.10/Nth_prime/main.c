#include <stdio.h>
#include<math.h>

int main ()
{
    int a, c = 0, num = 2, i, b = 0;
    printf ("Enter Nth Number:");
    scanf ("%d", &a);

    while (c != a)
    {
      int count = 0;
      for (i = 2; i <= sqrt (num); i++)
        {
            if (num % i == 0)
                {
                count++;
                break;
                }
        }
        if (count == 0)
        {
        c++;
        b = num;
        }
        num = num + 1;
    }
    printf ("%dth prime number is: %d ",a,b);
    return 0;
}
