// TODO: Write a program to define a structure to store the details of an employee. The details
// include employee id, name and date of joining. The date of joining should be stored in another
// structure which includes day, month and year. Display the details of the employee.
#include <stdio.h>
#include <string.h>

struct employee
{
  int epm_ID;
  char emp_Name[100];
  /* Date of joining */
  /* Embeded Structure Approach */
  struct date
  {
    int dd;
    int mm;
    int yy;
  };
};

int main()
{
  struct employee e1;
  e1.epm_ID = 101;
  strcpy(e1.emp_Name, "Rahul Saha");
  e1.dd= 23;
  e1.mm = 06;
  e1.yy = 2006;

  struct employee e2;
  e2.epm_ID = 102;
  strcpy(e2.emp_Name, "Surajit Saha");
  e2.dd = 25;
  e2.mm = 05;
  e2.yy = 2024;

  printf("Employee Id : %d\n", e1.epm_ID);
  printf("Employee Name : %s\n", e1.emp_Name);
  printf("Data of joining : %d/%d/%d", e1.dd, e1.mm, e1.yy);
  puts("\n-----------------------------------------");
  printf("Employee Id : %d\n", e2.epm_ID);
  printf("Employee Name : %s\n", e2.emp_Name);
  printf("Data of joining : %d/%d/%d", e2.dd, e2.mm, e2.yy);
  return 0;
}