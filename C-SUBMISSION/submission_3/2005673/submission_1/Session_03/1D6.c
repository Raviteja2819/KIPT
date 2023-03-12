#include<stdio.h>

int day(int day, int month, int year)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    year -= month < 3;
    return ( year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;
}

int main()
{
    int day_ = day(30, 8, 2010);
    printf ("%d", day);

    return 0;
}
