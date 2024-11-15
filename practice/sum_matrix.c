#include <stdio.h>
int main()
{
  int a[2][3] = {{3, 3, 1}, {3, 4, 5}};
  int sum = 0;
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      sum += a[i][j];
    }
  }
  printf("sum of the matrix = %d", sum);
  return 0;
}