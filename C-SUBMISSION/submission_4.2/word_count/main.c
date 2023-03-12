#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main()
{
    char c[100];
    scanf("%[^\n]%*c",c);
    char str[100][100];
    int i=0,j=0,l,count;

    for(int k=0;c[k]!='\0';k++){
    if(c[k]!=' ' && c[k]!='\0'){
            str[i][j++]=tolower(c[k]);
        }
        else{
            str[i][j] = '\0';
            i++;
            j=0;
        }
    }
    l=i+1;
    for(i=0;i<l;i++){
        count=1;
        for(j=i+1;j<l;j++){
           if(strcmp(str[i],str[j])==0 && (strcmp(str[j],"0")!=0)){
               count++;
               strcpy(str[j],"0");
           }
        }
        if(count>0&&(strcmp(str[i],"0")!= 0))
            printf("%s\t%d\n",str[i],count);
    }

    return 0;
}
