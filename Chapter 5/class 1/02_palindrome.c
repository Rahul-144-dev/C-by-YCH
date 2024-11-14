#include <stdio.h>
int main()
{
  int num, rem;
  printf("enter number : ");
  scanf("%d", &num);
  while (num != 0)
  {
    rem = rem * 10;
    rem = rem + (num % 10);
    num /= 10;
  }

  return 0;
}