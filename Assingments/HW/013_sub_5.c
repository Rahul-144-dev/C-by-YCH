// WAP in C to enter marks of 5 subject and calculate total, average and percentage.
#include <stdio.h>
int main()
{
  float sub1 = 40, sub2 = 50, sub3 = 50, sub4 = 40, sub5 = 50, sub6 = 60;
  float total = sub1 + sub2 + sub3 + sub4 + sub5 + sub6;
  float avg = total / 6;
  float percentage = (total / 300) * 100;
  printf("Percentile = %.2f\n", percentage);
  printf("Average = %.2f\n", avg);
  printf("total = %.2f out of 300\n", total);
  return 0;
}