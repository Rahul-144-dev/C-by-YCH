#include <stdio.h>
int main()
{
  int a = 1;
  int *p = &a;
  printf("%d\n", a);
  printf("%d\n", p);
  printf("%d\n", p + a);
  return 0;
}