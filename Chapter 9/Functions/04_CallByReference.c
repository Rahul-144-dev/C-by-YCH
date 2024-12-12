/* Call By Reference */
#include <stdio.h>
int swap(int *x, int *y);
int swap_s(int x, int y);
int main()
{
  int a = 7, b = 5;
  printf("Original a = %d & b = %d\n", a, b);
  swap(&a, &b);
  printf("Original a = %d & b = %d\n", a, b);
  return 0;
}
int swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
  printf("Function x = %d & y = %d\n", *x, *y);
}
int swap_s(int x, int y)
{
  x = x + y;
  y = x - y;
  x = x - y;
  printf("Function x = %d & y = %d\n", x, y);
}