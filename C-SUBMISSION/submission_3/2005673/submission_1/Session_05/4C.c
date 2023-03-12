#include<stdio.h>

int main()
{
    char string1[100], find[100];
    int count1 = 0, count2 = 0, i, j, flag;

    printf("Enter the main string:");
    gets(string1);
    printf("Enter substring to be found:");
    gets(find);
    while (string1[count1]!='\0')
        count1++;
    while (find[count2]!='\0')
        count2++;
    for (i=0;i<=count1-count2;i++)
    {
        for(j=i;j<i+count2;j++)
        {
            flag=1;
            if(string1[j] != find[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("Substring is found");
    else
        printf("Substring is not present");

    return 0;
}
