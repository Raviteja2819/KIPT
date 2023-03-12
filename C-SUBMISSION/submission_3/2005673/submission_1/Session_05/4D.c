
#include <stdio.h>
#define MAX_SIZE 100
void togglechar(char * str);

int main()
{
    char str[MAX_SIZE];
    scanf(“%s”, &str);
    togglechar(str);
    printf(“nafter toggling the charecters : “);
    printf(“%sn”, str);
    return 0;
}

void togglechar(char * str)
{
    while(*str)
    {
        if(*str >= ‘a’ && *str <= ‘z’)
            *str = *str – 32;
        else if(*str >= ‘A’ && *str <= ‘Z’)
            *str = *str + 32;
        str++;
    }
}
