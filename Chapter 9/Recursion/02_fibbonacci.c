#include <stdio.h>
int fibo(int x)
{
  if (x == 0 || x == 1)
    return x;
  return fibo(x - 1) + fibo(x - 2);
}
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  int recAns = fibo(n);
  printf("%d", recAns);
  return 0;
}