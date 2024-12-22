#include <stdio.h>
void fun(int *x)
{
  int x = 5;
  x++;
}
void main()
{
  int x;
  fun(&x);
  printf("%d", x);
}