#include <stdio.h>
int main ()
{
	int array[10][10];
	int i = 0, j = 0, row = 0, col = 0;

	printf ("Enter the no of rows and columns of matrix:\n");
	scanf ("%d %d", &row, &col);
    int f = 0;
	printf ("Enter the elements of the matrix\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf ("%d", &array[i][j]);
		}
	}

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j && array[i][j] != 1)
			{
				f = -1;
				break;
			}
			else if (i != j && array[i][j] != 0)
			{
				f = -1;
				break;
			}
		}
	}

	if (f == 0)
	{
		printf ("it's an identity matrix\n");
	}
	else
	{
		printf ("it's not an identity matrix\n");
	}

	return 0;
}
