#include <stdio.h>
void main_ex();
void main_ex1();
/* Call By Value */
int swap1(int x, int y);
/* Call By Reference */
int swap2(int *x, int *y);
int main()
{
  main_ex1();
  return 0;
}
void main_ex()
{
  int a = 7, b = 5;
  printf("Original 1 : a = %d & b = %d\n", a, b);
  swap1(a, b);
  printf("Original 3 : a = %d & b = %d\n", a, b);
}
void main_ex1()
{
  int a = 7, b = 5;
  printf("Original 1 : a = %d & b = %d\n", a, b);
  swap2(&a, &b);
  printf("Original 3 : a = %d & b = %d\n", a, b);
}
/* Call By Value */
int swap1(int x, int y)
{
  x = x + y;
  y = x - y;
  x = x - y;
  printf("Function 2 : x = %d & y = %d\n", x, y);
}
/* Call By Reference */
int swap2(int *x, int *y)
{
  *x = *x + *y;
  *y = *x - *y;
  *x = *x - *y;
  printf("Function 2 : x = %d & y = %d\n", *x, *y);
}