#include <stdio.h>
int main()
{
  int num, rem, rev = 0;
  printf("enter number : ");
  scanf("%d", &num);
  while (num != 0)
  {
    rev = num % 10;
    rem = rev + 10 * rem;
    num /= 10;
  }
  printf("%d", rem);
  return 0;
}