#include <stdio.h>
int main()
{
  int a, frst, lst, mdl, n, srch, arr[100];

  printf("please enter number of elements of array\n");
  scanf("%d", &n);

  printf("please enter %d integers\n", n);

  for (a = 0; a < n; a++)
    scanf("%d", &arr[a]);

  printf("Enter value to find\n");
  scanf("%d", &srch);

  frst = 0;
  lst = n - 1;
  mdl = (frst+lst)/2;

  while (frst <= lst) {
    if (arr[mdl] < srch)
      frst = mdl + 1;
    else if (arr[mdl] == srch) {
      printf("%d element is found at the location%d.\n", srch, mdl+1);
      break;
    }
    else
      lst = mdl - 1;

    mdl = (frst + lst)/2;
  }
  if (frst > lst)
    printf("we cant find the element\n", srch);

  return 0;
}
