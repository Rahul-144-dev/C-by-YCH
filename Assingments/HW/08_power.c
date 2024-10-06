// WAP in C to enter two number and find out the power value.
#include <stdio.h>
#include <math.h>
int main()
{
  float base, exponent;
  printf("enter number : ");
  scanf("%f", &base);
  printf("enter exponent : ");
  scanf("%f", &exponent);
  float power = pow(base, exponent);
  printf("%2.f to the power %2.f is = %.2f", base, exponent, power);
  return 0;
}