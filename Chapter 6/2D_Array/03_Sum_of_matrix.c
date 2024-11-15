#include <stdio.h>
int main()
{
  int sum = 0;
  int arr[2][3] = {{5, 4, -3}, {3, 4, -2}}; // array declared and initialized
  printf("Print the elements of the array\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  for (int i = 0; i < 2; i++)
  { 
    for (int j = 0; j < 3; j++)
    {
      sum += arr[i][j];
    }
  }
  printf("Sum of the matrix is : %d", sum);
  return 0;
}