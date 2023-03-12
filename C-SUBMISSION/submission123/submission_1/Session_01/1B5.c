#include<stdio.h>
int main()
{
	int a, b, c;

  	printf("\n Please enter the three sides of a triangle : ");
  	scanf("%d%d%d", &a, &b, &c);

  	if(a == b && b == c)
  	{
  		printf("\n This is an EQULATERAL TRIANGLE");
 	}
 	else if(a == b || b == c || a == c)
 	{
 		printf("\n This is an ISOCELES TRIANGLE");
	}
	else
	{
		printf("\n This is a SCALENE TRIANGLE");
	}
 	return 0;
 }
