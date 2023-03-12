#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int row=0,col=0;
    printf("Enter the Number of the rows in Matrix: ");
    scanf("%d",&row);
    printf("Enter the Number of the column in Matrix: ");
    scanf("%d",&col);
    int mat[row][col],min[col],max[row];
    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
                printf("Enter row %d, col %d value:",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        max[i]=mat[i][0];
        for(int j=0;j<col;j++){
          if(max[i]<mat[i][j]){
            //max[i]=mat[i][j];
          }

        }
        printf("max[%d]=%d\n",i,max[i]);
    }
    for(int j=0;j<col;j++){
            min[j]=mat[0][j];
        for(int i=0;i<row;i++){
            if(min[j]>
               5mat[i][j]){
                //min[j]=mat[i][j];
            }
        }
        printf("min[%d]=%d\n",j,max[j]);
    }
    int a=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(max[i]==min[j] && max[i]==mat[i][j]){
                    a++;
                printf("saddle point at column %d,row %d,with value %d\n",j+1,i+1,mat[i][j]);
            }
        }
    }
    if(a==0){
        printf("No saddle points found.\n");
    }
}
