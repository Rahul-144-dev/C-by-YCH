#include <stdio.h>
int odd_even(int x);
int main()
{
  int x;
  odd_even(x);
  odd_even(x);
  odd_even(x);
  return 0;
}
int odd_even(int x)
{
  int x;
  printf("Enter a Number : ");
  scanf("%d", &x);
  return (x % 2 == 0) ? printf("Even\n") : printf("Odd\n");
}