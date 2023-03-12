#include<stdio.h>

int main()
{
	int s1, s2, s3;
  	printf("\n Please Enter First Sides of a Triangle : ");

  	scanf("%d", &s1);
  	printf("\n Please Enter Second Sides of a Triangle: ");

  	scanf("%d", &s2);

  	printf("\n Please Enter Third Sides of a Triangle : ");
  	scanf("%d", &s3);


  	if(s1 == s2 && s2 == s3)
  	{
  		printf("\n This is an Equilateral Triangle");
 	}
 	else if(s1 == s2 || s2 == s3 || s1 == s3)
 	{
 		printf("\n This is an Isosceles Triangle");
	}
	else
	{
		printf("\n This is a Scalene Triangle");
	}
 	return 0;
 }
