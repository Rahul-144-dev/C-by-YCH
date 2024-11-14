#include <stdio.h>
int main()
{
  int num, rem, rev = 0;
  printf("enter number : ");
  scanf("%d", &num);
  int org = num;
  while (num != 0)
  {
    rem = num % 10;
    rev = rem + 10 * rev;
    num /= 10;
  }
  printf("%d", rev);
  // if (org == rev)
  //   printf("this is a palindrome : %d = %d", org, rev);
  // else
  // {
  //   printf("this is not a palindrome : %d!=%d", org, rev);
  // }
  return 0;
}