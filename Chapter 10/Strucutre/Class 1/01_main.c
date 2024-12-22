#include <stdio.h>
#include <string.h>
struct student
{
  int rollNo;
  char name[100];
  int phone;
  float percentage;
};
void main()
{
  /* user input */
  struct student s4;
  printf("Enter a Student Name : ");
  fflush(stdin);
  gets(s4.name);
  printf("Enter a Student Roll Number : ");
  scanf("%d", &s4.rollNo);
  printf("Enter a Student Contact Number : ");
  scanf("%d", &s4.phone);
  printf("Enter a Student Percentage in last examination : ");
  scanf("%d", &s4.percentage);
  /* Output */
  puts(":::::::::The data we have collected::::::::::");
  printf("student name : %s\n", s4.name);
  printf("student Roll : %d\n", s4.rollNo);
  printf("student contact number : %d\n", s4.phone);
  printf("student percentage : %d", s4.percentage);

  // /* Grouping Method */
  // struct student s1 = {115, "Rahul Saha"};
  // /* by using .(dot) member operator */
  // struct student s2;
  // s2.rollNo = 113;
  // strcpy(s2.name, "Surajit Saha");
  // // s2.name = "Rtx 4090";
  // /* Output */
  // printf("Student Name is : %s\n", s2.name);
  // printf("Student Roll number is : %d", s2.rollNo);
}
