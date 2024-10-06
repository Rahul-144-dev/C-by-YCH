// Write a program to calculate the Gross salary of an employee by accepting basic salary ond
// calculating DA and HRA.
//[DA:85% of basic salary. HRA:15% of basic salary]
// Gross salary = Basic salary + HRA (House rent allowance) + DA (dearness allowance) + MA (medical allowance)
#include <stdio.h>
#include <math.h>
int main()
{
  float gross_slr, basic_slr, hra, da;
  printf("enter basic salary : ");
  scanf("%f", &basic_slr);
  // calculating DA and HRA from basic salary
  if (basic_slr <= 10000)
  {
    da = basic_slr * 80 / 100;  // explicit type conversion
    hra = basic_slr * 20 / 100; // explicit type conversion
  }
  else if (basic_slr <= 20000)
  {
    da = basic_slr * 90 / 100;  // explicit type conversion
    hra = basic_slr * 25 / 100; // explicit type conversion
  }
  else if (basic_slr > 20000)
  {
    da = basic_slr * 95 / 100;  // explicit type conversion
    hra = basic_slr * 30 / 100; // explicit type conversion
  }
  // calculating Gross Salary
  gross_slr = basic_slr + da + hra;
  printf("DA = %.2f\n", da);
  printf("HRA = %.2f\n", hra);
  printf("Gross Salary = %.2f ", gross_slr);
  return 0;
}