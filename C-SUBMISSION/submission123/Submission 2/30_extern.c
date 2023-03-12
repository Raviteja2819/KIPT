#include<stdio.h>
int x;
int main(void)
{
 /* `extern` keyword refers to external definition of `x`. */
    extern int x;
    printf("%d\n", x);
    return 0;
}
/*used to declare an object or function to be used in a module that is not the one in
which the corresponding object or function is defined*/
