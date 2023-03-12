#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char c[100],d[10][100];
    printf("Scan the word:");
    scanf("%s",c);
    printf("Number of candidates:");
    int p=0,a=strlen(c),arr[26]={0};
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        printf("scan the candidate %d:",i);
        scanf("%s",d[i]);
    }
    for(int j=0;j<a;j++){
        arr[c[j]-'a']++;
    }
    for(int k=0;k<p;k++){
        int car[26]={0};
            int q=strlen(d[k]);
        if(q==a){
            for(int l=0;l<a;l++){
                car[d[k][l]-'a']++;
            }
            int f=0;
            for (int m = 0; m < 26; m++){
                    if (arr[m]!= car[m]){
                        f=1;
                    }
                    }
            if(f==0){
                        printf("%s is anagram of the given word\n",d[k]);
                    }

        }
    }
    return 0;
}
