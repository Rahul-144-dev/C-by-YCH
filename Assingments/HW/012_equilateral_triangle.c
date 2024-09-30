// WAP in C to calculate area of a Equilateral Triangle
#include <stdio.h>
#include <math.h>
int main()
{
  float side;
  printf("enter number : ");
  scanf("%f", &side);
  float area = sqrt(3.0 / 4.0) * (side * side);
  printf("The area of the equilateral triangle is %.2f\n", area);
  return 0;
}