#include <stdio.h>
int main()
{
  int x = 5;
  x += x++ + ++x;
  printf("x = %d\n", x);
  return 0;
}