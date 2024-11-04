#include <stdio.h>
int main()
{
  int r, c;
  printf("enter r : ");
  scanf("%d", &r);
  printf("enter column : ");
  scanf("%d", &c);
  int arr[r][c];
  printf("Enter the elements of the array\n");
  for (int row = 0; row < r; row++)
  {
    for (int col = 0; col < c; col++)
    {
      scanf("%d", &arr[row][col]);
    }
    printf("\n");
  }
  printf("Print the elements of the array\n");
  for (int row = 0; row < r; row++)
  {
    for (int col = 0; col < c; col++)
    {
      printf("%d ", arr[row][col]);
    }
    printf("\n");
  }
  return 0;
}