#include <stdio.h>
#include <math.h>

    void main ()
    {static int array1[10][10];
        int i, j, m, n, sum1 = 0, sum2 = 0, a = 0, normal;

        printf("Enter the order of the matrix\n");
        scanf("%d %d", &m, &n);

        printf("Enter the n coefficients of the matrix \n");
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                scanf("%d", &array1[i][j]);
                a = array1[i][j] * array1[i][j];
                sum2 = sum2 + a;
            }
        }

        normal = sqrt(sum2);
        printf("The normal of the given matrix is = %d\n", normal);
        for (i = 0; i < m; ++i)
        {
            sum1 = sum1 + array1[i][i];
        }

        printf("Trace of the matrix is = %d\n", sum1);

    }
