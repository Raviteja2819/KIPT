
#include<stdio.h>

#include<conio.h>

void main()

{
     int array[100][100],n,i,j;
     printf("enter the order to create identity matrix");
     scanf("%d",&n);
     printf(" the matrix is - \n");
     for(i=0;i<n;i++)
     {
           for(j=0;j<n;j++)
           {
                 if(i==j)
                 {
                         array[i][j]=1;
                         printf("%d ",array[i][j]);
                 }
                 else
                 {
                     array[i][j]=0;
                     printf("%d ",array[i][j]);
                 }

           }printf("\n");}
}
