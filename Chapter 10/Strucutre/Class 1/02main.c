#include <stdio.h>
#include <string.h>
struct student
{
  int roll;
  char name[100];
  int age;
};

int main()
{
  struct student s1 = {115, "Rahul Saha", 18};
  struct student s2;
  s2.age = 19;
  s2.roll = 116;
  strcpy(s2.name, "Surajit Saha");
  printf("s2.age=%d\n", s2.age);
  printf("s2.roll=%d\n", s2.roll);
  printf("s2.name=%s", s2.name);
  return 0;
}