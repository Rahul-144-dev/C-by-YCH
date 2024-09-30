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
  float si = p * t * r / 100;
  printf("Simple Interest is: %.2f\n", si);
  printf("Total value after SI: %.2f\n", si + p);
  return 0;
}