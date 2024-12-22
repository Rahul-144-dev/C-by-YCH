// TODO: Write a program to define a structure to store the details of an employee. The details
// include employee id, name and date of joining. The date of joining should be stored in another
// structure which includes day, month and year. Display the details of the employee.
#include <stdio.h>
#include <string.h>
struct date
{
  int dd;
  int mm;
  int yy;
};
struct employee
{
  int epm_ID;
  char emp_Name[100];
  /* Date of joining */
  struct date doj;
};

int main()
{
  struct employee e1;
  e1.epm_ID = 101;
  strcpy(e1.emp_Name, "Rahul Saha");
  e1.doj.dd = 23;
  e1.doj.mm = 06;
  e1.doj.yy = 2006;

  struct employee e2;
  e2.epm_ID = 102;
  strcpy(e2.emp_Name, "Surajit Saha");
  e2.doj.dd = 25;
  e2.doj.mm = 05;
  e2.doj.yy = 2024;

  printf("Employee Id : %d\n", e1.epm_ID);
  printf("Employee Name : %s\n", e1.emp_Name);
  printf("Data of joining : %d/%d/%d", e1.doj.dd, e1.doj.mm, e1.doj.yy);
  puts("\n-----------------------------------------");
  printf("Employee Id : %d\n", e2.epm_ID);
  printf("Employee Name : %s\n", e2.emp_Name);
  printf("Data of joining : %d/%d/%d", e2.doj.dd, e2.doj.mm, e2.doj.yy);
  return 0;
}