#include <stdio.h>
int main (void)
{
	int a[10][10];
	int i = 0, j = 0, r = 0, c = 0;

	printf ("Enter the no of rs and cumns of matrix:\n");
	scanf ("%d %d", &r, &c);

	int f = 0;

	printf ("Enter the elements of the matrix\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf ("%d", &a[i][j]);
		}
	}

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (i == j && a[i][j] != 1)
			{
				f = -1;
				break;
			}
			else if (i != j && a[i][j] != 0)
			{
				f = -1;
				break;
			}
		}
	}

	if (f == 0)
	{
		printf ("It is a IDENTITY MATRIX\n");
	}
	else
	{
		printf ("It is NOT an identity matrix\n");
	}

	return 0;
}
