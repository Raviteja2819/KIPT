#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=99;
    while(i>=0){
        if(i>1){
            printf("%d bottles of beer on the wall, %d bottles of beer.\nTake one down and pass it around, %d bottles of beer on the wall.\n\n",i,i,i-1);
        }
        else if(i==1){
            printf("1 bottle of beer on the wall, 1 bottle of beer.\nTake it down and pass it around, no more bottles of beer on the wall.\n\n");
        }
        else{
            printf("No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.\n");
        }
        i--;
    }
    return 0;
}
