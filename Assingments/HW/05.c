// WAP in C to find the area, diameter, radius and circumference of a Circle
#include <stdio.h>
#define pi 3.14
int main()
{
  float radius;
  printf("enter the radius of the circle : ");
  scanf("%f", &radius);
  float area = pi * radius * radius;
  float diameter = 2 * radius;
  float circumfrence = 2 * pi * radius;
  printf("radius: %.2f\n", radius);
  printf("area: %.2f\n", area);
  printf("diameter: %.2f\n", diameter);
  printf("circumfrence: %.2f", circumfrence);
  return 0;
}