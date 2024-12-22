#include <stdio.h>
int main()
{
  register int x, y, z;
  x = 5, y = 7;
  z = x + y;
  printf("%d", z);
  return 0;
}