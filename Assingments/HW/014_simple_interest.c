// WAP in C to enter P, T, R and calculate Simple Interest(S.I),
// where P = Principle Amount, T = Time and R = Rate of Interest.
#include <stdio.h>
int main()
{
  float p, t, r;
  printf("Enter Principle Amount (P): ");
  scanf("%f", &p);
  printf("Enter Time (T) in years: ");
  scanf("%f", &t);
  printf("Enter Rate of Interest (R): ");
  scanf("%f", &r);
  float ci = p * (1+r/t)*(t);
  printf("Compound Interest is: %.2f\n", ci);
  printf("Total value after CI: %.2f\n", ci + p);
  return 0;
}