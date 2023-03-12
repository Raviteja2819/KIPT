#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char c[100];
    printf("Question:");
    scanf("%[^\n]%*c",c);
    int len=strlen(c);
    int k=0;
    char p[]="BOB";
    if(strcmp(c,p)==0){
        k=1;
        printf("Fine. Be that way!");
    }
    else{
    for(int i=0;i<len;i++)
    {
        if(c[i]=='!' || c[i]=='?')
        {
            k=2;
            if(c[i]=='!')
            {
                    if(c[i-1]=='?' || c[i+1]=='?')
                    {
                printf("Calm down, I know what I'm doing!");

                    }
                    else
                    {
                printf("Whoa, chill out!");
                    }
            }
            else
            {
                if(c[i-1]=='!' || c[i+1]=='!')
                    {
                printf("Calm down, I know what I'm doing!");

                    }
                    else
                    {
                printf("Sure.");
                    }
            }
        break;
        }
    }
    }
    if(k==0)
    {
        printf("Whatever");
    }
    return 0;
}
