#include <stdio.h>
int main()
{
  int a = 10, b = 20, c;
  int *p = &a;
  int *q = &b;
  c = *q;
  
  *p = 20;
  
  printf("value of a = %d\n", a);
  printf("value of c = %d\n", c);
  printf("value of p = %d\n", *p);
  printf("address of p = %p\n", *p);
  return 0;
}