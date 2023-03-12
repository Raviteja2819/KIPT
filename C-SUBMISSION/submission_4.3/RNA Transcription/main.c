#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char DNA[20],d[4]={'A','C','G','T'},r[4]={'U','G','C','A'};
    printf("SCAN THE DNA STRUCTURE:");
    scanf("%s",DNA);
    int l=strlen(DNA);
    char RNA[l];
    for(int i=0;i<l;i++){
        for(int j=0;j<4;j++){
            if(DNA[i]==d[j]){
                RNA[i]=r[j];
            }
        }
    }
    printf("RNA structure of respective DNA is: %s",RNA);

    return 0;
}
