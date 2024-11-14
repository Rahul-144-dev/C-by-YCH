#include <stdio.h>
int main()
{
  //* Compile time Initialization
  int x[3][2] = {
      {21, 42}, // row = 1
      {23, 54}, // row = 2
      {65, 26}  // row = 3
  }; // declaration and initialization at same time

  int a[3][2]; // only declaration
  printf("Enter elements of Array\n");
  for (int row = 0; row < 3; row++) //| using loops to initialize elements in the array memory
  {
    for (int col = 0; col < 2; col++)
    {
      scanf("%d", &a[row][col]);
    }
    printf("\n");
  }
  printf("Elements of the Array\n");
  for (int row = 0; row < 3; row++) //| using loops to print the assinged values of the array
  {
    for (int col = 0; col < 2; col++)
    {
      printf("%d ", a[row][col]);
    }
    printf("\n");
  }
  return 0;
}