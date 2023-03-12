#include<stdio.h>

int main(){

  int array[3][3], i, j;

  long det;
  printf("Enter the 9 elements of matrix: ");
  for(i = 0 ;i < 3;i++)
      for(j = 0;j < 3;j++)
           scanf("%d", &array[i][j]);

  printf("\nThe matrix which is entered is\n");
  for(i = 0;i < 3; i++){
      printf("\n");
      for(j = 0;j < 3; j++)
           printf("%d\t", array[i][j]);
  }

  det = array[0][0] * ((array[1][1]*array[2][2]) - (array[2][1]*array[1][2])) -array[0][1] * (array[1][0]
   * array[2][2] - array[2][0] * array[1][2]) + array[0][2] * (array[1][0] * array[2][1] - array[2][0] * array[1][1]);

  printf("\ndeterminant of matrix entered is: %ld", det);

   return 0;
}
