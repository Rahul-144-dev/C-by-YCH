#include <stdio.h>
void arr();
void array_print_loops();
void neg_Array();
void blank_Array();
void Array_extra();
void blank_initialized_Array();
void Array_Initialization();

int main()
{
  // arr();
  // array_print_loops();
  // neg_Array();
  // blank_Array();
  // Array_extra();
  // blank_initialized_Array();
  Array_Initialization();
  return 0;
}
void Array_Initialization()
{
  int arr[5];
  printf("Array_Initialization : \n");
  for (int i = 0; i <= 4; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("the elements of the array : \n");
  for (int i = 0; i <= 4; i++)
  {
    printf("index %d = %d\n", i, arr[i]);
  }
}
void blank_initialized_Array()
{
  int arr[5] = {};
  for (int i = 0; i <= 4; i++)
  {
    printf("%d\n", arr[i]);
  }
}
// void Array_extra()
// {
//   int arr[5] = {13, 42, -13, 44, -55, 64, 53, 66};
//   for (int i = 0; i <= 4; i++)
//   {
//     printf("%d\n", arr[i]);
//   }
// }
void blank_Array()
{
  int arr[5];
  for (int i = 0; i <= 4; i++)
  {
    printf("%d\n", arr[i]);
  }
}
void neg_Array()
{
  int arr[5] = {21, -3, 44};
  for (int i = 0; i <= 4; i++)
  {
    printf("%d\n", arr[i]);
  }
}
void array_print_loops()
{
  int roll[5] = {10, 20, 30, 40, 50};

  //* Print the Array - Full
  
  //| Alogo: Travesal Alogorithm- travelling between all memories of Array
  for (int i = 0; i <= 4; i++)
  {
    printf("%d\n", roll[i]);
  }
}
void arr()
{
  //| 1D Array
  int rollNo[5]; //. only declaration of the Array

  //* Compilie Time Initialization
  /* 1st way: Array Literal */
  
  int roll[5] = {10, 20, 30, 40, 50}; //. declaration and initialization at the same time
  /* 2nd way: Array Indexing */
  int marks[5];
  marks[0] = 95;
  marks[1] = 85;
  marks[2] = 75;
  marks[3] = 98;
  marks[4] = 82;

  //* Print the Array - one by one
  printf("%d\n", roll[3]);
  printf("%d\n", roll[4]);
  printf("%d\n", roll[2]);
}