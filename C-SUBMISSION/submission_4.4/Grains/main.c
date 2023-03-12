#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    double grains=0,total=0;
    int square=0;
    printf("Scan the Square: ");
    scanf("%d",&square);
    for(int i=1;i<=square;i++){
        grains=pow(2,(i-1));
        printf("Number of grains on %d square are: %.0lf\n",i,grains);
        total=total+pow(2,(i-1));
    }
    printf("Total Grains till given square are: %.0lf\n",total);
    return 0;
}
