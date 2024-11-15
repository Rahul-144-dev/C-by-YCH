#include <stdio.h>
int main()
{
  int a[3][2] = {{1, 2}, {5, 6}, {3, 1}};
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}