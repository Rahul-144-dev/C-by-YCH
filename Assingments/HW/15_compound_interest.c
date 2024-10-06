// WAP in C to enter P, T, R and calculate Simple Interest(S.I),
// where P = Principle Amount, T = Time and R = Rate of Interest.
#include <stdio.h>
#include <math.h>
int main()
{
  float p, t, r, x;
  printf("Enter Principle Amount (P): ");
  scanf("%f", &p);
  printf("Enter Time (T) in years: ");
  scanf("%f", &t);
  printf("Enter Rate of Interest (R): ");
  scanf("%f", &r);
  x = 1 + (r / 100);
  float ci = p * pow(x, t);
  printf("Compound Interest is: %.2f\n", ci);
  printf("Total value after SI: %.2f\n", ci + p);
  return 0;
}