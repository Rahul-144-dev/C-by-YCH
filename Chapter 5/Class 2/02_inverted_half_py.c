#include <stdio.h>
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = i; j <= n; j++)
    {
      printf("x ");
    }
    printf("\n");
  }
  return 0;
}