// WAP in C to enter two number and find out the power value.
#include <stdio.h>
#include <math.h>
int main()
{
  float num, exponent;
  printf("enter number : ");
  scanf("%f", &num);
  printf("enter exponent : ");
  scanf("%f", &exponent);
  float power = pow(num, exponent);
  printf("%2.f to the power %2.f is = %.2f", num, exponent, power);
  return 0;
}