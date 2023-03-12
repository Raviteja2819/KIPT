#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[100];
    scanf("%[^\n]%*c",s);
    int l=strlen(s);
    printf("%c",s[0]);
    for(int i=1;i<l;i++){

        if(isspace(s[i])){
            printf("%c",s[i+1]);
        }
    }
    return 0;
}
