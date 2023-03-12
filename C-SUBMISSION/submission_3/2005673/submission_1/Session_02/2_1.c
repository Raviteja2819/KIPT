#include <stdio.h>
int main ()
{
  unsigned int x = 0x76543210;
  char *s = (char*) &x;

  printf ("*s is: 0x%x\n", *s);
  if (*s == 0x10)
  {
    printf ("The architecture is little endian");
  }
  else
  {
     printf ("The architecture is big endian");
  }

  return 0;
}
