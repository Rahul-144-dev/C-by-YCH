#include <stdio.h>
int main()
{
  int a = 10;
  int *p = &a;
  printf("Address of variable a is : %d\n", &a);
  printf("value of pointer p is : %d\n", p);
  // printf("\nthe value stores in the pointer = %d", *p);
  // printf("\nthe address stores in the pointer = %p", p);
  return 0;
}