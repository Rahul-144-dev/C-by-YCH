// Write a program to calculate the Gross salary of an employee by accepting basic salary ond
// calculating DA and HRA.
//[DA:85% of basic salary. HRA:15% of basic salary]
// Gross salary = Basic salary + HRA (House rent allowance) + DA (dearness allowance) + MA (medical allowance)
#include <stdio.h>
#include <math.h>
int main()
{
  float gross_slr, baic_slr, hra, da;
  printf("enter basic salary : ");
  scanf("%f", &baic_slr);
  // calculating DA and HRA from basic salary
  da = baic_slr * (float)85 / 100;  // explicit type conversion
  hra = baic_slr * (float)15 / 100; // explicit type conversion
  // calculating Gross Salary
  gross_slr = baic_slr + da + hra;
  printf("DA = %.2f\n", da);
  printf("HRA = %.2f\n", hra);
  printf("Gross Salary = %.2f ", gross_slr);
  return 0;
}