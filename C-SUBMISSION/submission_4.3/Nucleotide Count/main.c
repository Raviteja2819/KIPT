#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s[20],d[4]={'A','C','G','T'};
    char *dna[]={"adenine", "cytosine", "guanine", "thymine"};
    printf("SCAN the DNA structure: ");
    scanf("%s",s);
    int l=strlen(s),arr[4]={0};
    for(int i=0;i<l;i++){
        for(int j=0;j<4;j++){
            if(s[i]==d[j]){
                arr[j]++;
                //printf("%d\t",arr[j]);

            }
        }
    }
    for(int k=0;k<4;k++){
        printf("Nucleotide Count of the %s is %d. \n",dna[k],arr[k]);
    }
    return 0;
}
