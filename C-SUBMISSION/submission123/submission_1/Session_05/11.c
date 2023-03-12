#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void func(char** strings, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (strcmp(strings[j], strings[j + 1]) > 0) {
                char* tempvar;
                tempvar = (char*)calloc(30, sizeof(char));
                strcpy(tempvar, strings[j]);
                strcpy(strings[j], strings[j + 1]);
                strcpy(strings[j + 1], tempvar);
            }
}
int main()
{
    char** strings;
    int n, i;
    printf("please enter strings : ");
    scanf("%d\n", &n);

    strings = (char**)calloc(n, sizeof(char*));

    for (i = 0; i < n; i++)
    {
        strings[i] = (char*)calloc(30, sizeof(char));
        scanf("%s", strings[i]);
    }
    func(strings, n);

    printf("\nafter sorting the array is:\n");
    for (i = 0; i < n; i++)
        printf("%s\n", strings[i]);

    return 0;
}
