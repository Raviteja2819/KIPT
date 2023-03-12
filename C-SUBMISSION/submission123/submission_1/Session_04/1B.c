#include <conio.h>
int main()
{
    int array[1000],i,n,minnimum,maximum;

    printf("Enter size of the array : ");
    scanf("%d",&n);

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }

    minnimum=maximum=array[0];
    for(i=1; i<n; i++)
    {
         if(minnimum>array[i])
		  minnimum=array[i];
		   if(maximum<array[i])
		    maximum=array[i];
    }
     printf("minnimum of array is : %d",minnimum);
          printf("\nmaximum of array is : %d",maximum);


    return 0;
}
