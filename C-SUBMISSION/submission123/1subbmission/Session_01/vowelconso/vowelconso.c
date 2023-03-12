#include <stdio.h>
int main()
{
    char chr;
    printf("please enter a valid charecter ");
    scanf("%c", &chr);
    if(chr=='a' || chr=='e' || chr=='i' || chr=='o' || chr=='u' ||
       chr=='A' || chr=='E' || chr=='I' || chr=='O' || chr=='U')
    {
        printf("'%c' is a Vowel.", chr);
    }
    else if((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z'))
    {
        printf("'%c' is Consonant.", chr);
    }
    else
    {
        printf("'%c' is not an alphabet.", chr);
    }

    return 0;
}
