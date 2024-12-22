/* Recursion in Programming */
#include <stdio.h>
int fact(int x)
{
  if (x == 1)
    return 1;
  return x * fact(x - 1);
}
int main()
{
  int num;
  printf("Enter a Number : ");
  scanf("%d", &num);
  int recAns = fact(num);
  printf("the factorial of number %d is : %d\n", num, recAns);
  return 0;
}