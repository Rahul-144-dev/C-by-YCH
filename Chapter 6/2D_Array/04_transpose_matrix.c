#include <stdio.h>
int main()
{
  int arr[2][3];

  printf("Enter the elements of the Array\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      scanf("%d", &arr[i][j]);
    }
    printf("\n");
  }

  printf("Print the elements of the Array\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  int brr[3][2]; // creating a new array for transposing
  printf("Print the elements of the Array\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      brr[i][j] = arr[j][i];
      printf("%d ", brr[i][j]);
    }
    printf("\n");
  }
  return 0;
}
