#include <stdio.h>
int sum();// Function Declaration
int main()
{
  int result1 = sum(10, 2);// Function Call
  int result2 = sum(1, 2);
  printf("Result 1 = %d\n", result1);
  printf("Result 2 = %d", result2);
  return 0;
}
int sum(int n1, int n2)// Function Defination
{
  return n1 + n2;
}