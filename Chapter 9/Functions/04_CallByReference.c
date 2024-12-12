/* Call By Reference */
#include <stdio.h>
int swap1(int *x, int *y);
int swap2(int *x, int *y);
int main()
{
  int a = 7, b = 5;
  printf("Original 1 : a = %d & b = %d\n", a, b);
  swap1(&a, &b);
  printf("Original 3 : a = %d & b = %d\n", a, b);
  return 0;
}
int swap1(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
  printf("Function 2 : x = %d & y = %d\n", *x, *y);
}
int swap2(int *x, int *y)
{
  *x = *x + *y;
  *y = *x - *y;
  *x = *x - *y;
  printf("Function 2 : x = %d & y = %d\n", *x, *y);
}