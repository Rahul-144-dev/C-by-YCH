// WAP in C two enter two angles of a triangle and find the third angle.
#include <stdio.h>
int main()
{
  float a, b, c;
  printf("enter angle a : ");
  scanf("%f", &a);
  printf("enter angle b : ");
  scanf("%f", &b);
  c = 180 - (a + b);
  printf("angle c is : %.2f", c);
  return 0;
}