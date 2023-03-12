#include <stdio.h>
void main()
{
	int Cordinate1,cordinate2;

	printf("Input the values coordinates for X and Y  : ");
	scanf("%d %d",&Cordinate1,&cordinate2);

	if( Cordinate1 > 0 && cordinate2 > 0)
	  printf("coordinate point (%d,%d) lies in the First quandrant.\n",Cordinate1,cordinate2);
	else if( Cordinate1 < 0 && cordinate2 > 0)
	  printf("coordinate point (%d,%d) lies in the Second quandrant.\n",Cordinate1,cordinate2);
	else if( Cordinate1 < 0 && cordinate2 < 0)
	  printf("coordinate point (%d, %d) lies in the Third quandrant.\n",Cordinate1,cordinate2);
	else if( Cordinate1 > 0 && cordinate2 < 0)
	  printf("coordinate point (%d,%d) lies in the Fourth quandrant.\n",Cordinate1,cordinate2);
	else if( Cordinate1 == 0 && cordinate2 == 0)
	  printf("coordinate point (%d,%d) lies at the origin.\n",Cordinate1,cordinate2);

}
