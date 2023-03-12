#include <stdio.h>
    void main()
    {

        int i, j, a, n, array[30];
        printf("enter the no of elements of array\n");
        scanf("%d", &n);
        printf("please enter the array's elements \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &array[i]);
        for (i = 0; i < n; ++i)
        {for (j = i + 1; j < n; ++j)
            {if (array[i] > array[j])
                {
                    a =  array[i];
                    array[i] = array[j];
                    array[j] = a;
                    }}}
printf("after arranging in ascending order elements of array are\n");
        for (i = 0; i < n; ++i)
            printf("%d\n", array[i]);

    }
