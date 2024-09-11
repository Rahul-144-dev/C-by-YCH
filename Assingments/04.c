// Write a program to calculate simple interest. I=(P*T*R)/100
// [I:lnterest, P:Principal, R:Rate of Interest, T: Time invested)]
#include <stdio.h>
int main()
{
  double p, t, r;
  printf("enter Principal : ");
  scanf("%lf", &p);
  printf("enter Rate : ");
  scanf("%lf", &r);
  printf("enter Time : ");
  scanf("%lf", &t);
  double i = (p * t * r) / 100;
  printf("Simple Interest is %.2lf", i);
  return 0;
}