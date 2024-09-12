#include <stdio.h>
int main()
{
  // Variable Declaration
  int num1; // memory allocation done here(size = 4 bytes)
  // assign value inside the variable
  num1 = 10;
  // Declaration and assign in same line
  // Flow of the program
  // int num2(LHS) = 20(RHS)
  int num2 = 20;

  printf("num1 = %d\n", num1);
  printf("num2 = %d", num2);
  return 0;
}