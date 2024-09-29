// WAP in C it takes days as a input and determine number of years, months, weeks and rest days.
#include <stdio.h>
int main()
{
  int days = 1726;
  // printf("enter number : ");
  // scanf("%d", &days);
  int years = days / 365;              // 4 years// r=266 days
  int months = (days % 365) / 30;      // 266 days/30=8 months // r=26 days
  int weeks = ((days % 365) % 30) / 7; // 26 days/7=3 weeks // r=5 days
  int day = ((days % 365) % 30) % 7;   // 5 days
  printf("years = %d\n", years);
  printf("months = %d\n", months);
  printf("weeks = %d\n", weeks);
  printf("day = %d\n", day);
  return 0;
}