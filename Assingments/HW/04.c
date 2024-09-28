// WAP in C to Calculate the Area of a Triangle by using “Heron’s” Formula.
#include <stdio.h>
#include <math.h>
int main()
{
  float a = 12, b = 6, c = 15;
  float s = (float)(a + b + c) / 2;
  float area = sqrt(s * (s - a) * (s - b) * (s - c));
  printf("Area of Triangle according to Heron's formula: %.2f\n", area);
  return 0;
}