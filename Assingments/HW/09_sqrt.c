// WAP in C to enter any number by user and find out the square root value.
#include <stdio.h>
#include <math.h>
int main()
{
  float number;
  printf("enter number : ");
  scanf("%f", &number);
  float sq_rt = sqrt(number);
  printf("square root value of %.2f is %.2f\n", number, sq_rt);
  return 0;
}