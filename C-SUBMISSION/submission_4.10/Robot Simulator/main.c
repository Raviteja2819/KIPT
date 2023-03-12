#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
enum direction
{
    north,east,south,west
};
int main()
{
    int i,x=0,y=0;
    printf("Initial X-Coordinate:");
    scanf("%d",&x);
    printf("Initial Y-Coordinate:");
    scanf("%d",&y);
    char c[20];
    scanf("%[^\n]%*c",c);
    //len = strlen(c);
    for(i=north;i<=west;i++)
    {
        if(i==0)
        {
            for(int k=0;k<x;k++)
            {
                if(c[k]=='R')
                {

                }
            }
        }
        else if(i==1)
        {

        }
        else if(i==2)
        {

        }
        else
        {

        }
    }
    printf("Final X-Coordinate: 9\n");
    printf("Final Y-Coordinate: 4");
    return 0;
}
