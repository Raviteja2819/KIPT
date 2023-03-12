#include <stdio.h>
#include <stdlib.h>

int main(){
    int *primes,limit;
    printf("Enter the range:");
    scanf("%d",&limit);

    primes = malloc(sizeof(int) * limit);

    for (int i = 2;i < limit; i++)
    {
        primes[i] = 1;
    }


    for (int i = 2;i < limit; i++)
    {
        if (primes[i])
        {
            for (int j = i;i * j < limit; j++)
            {
                primes[i * j] = 0;
            }

        }

    }


    printf("\nPrime numbers in range 2 to %d are: \n",limit);
    for (int i = 2;i < limit; i++)
    {
        if (primes[i])
        {
            printf("%d\n", i);
        }

    }


return 0;
}
