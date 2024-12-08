#include <stdio.h>
int main()
{
  int a = 10, b = 20, c;
  int *p = &a;
  int *q = &b;
  c = *q;
  printf("a = %d\n", *p);
  return 0;
}