#include <stdio.h>
#include <string.h>
struct student
{
  char name[50];
  int roll;
  int age;
  int marks;
};
// display function to display all information of the student
void display_st_info(struct student *ptr, int n)
{
  for (int i = 0; i < n; i++)
  {
    puts("");
    printf("Name : %s\nRoll : %d\nMarks : %d\nAge : %d\n", ptr[i].name, ptr[i].roll, ptr[i].marks, ptr[i].age);
  }
}
/* Input Student Information */
int input_st_info(struct student *ptr, int n)
{

  for (int i = 0; i < 2; i++)
  {
    printf("Enter a Student name : ");
    getchar();
    gets(ptr[i].name);
    printf("Enter a Roll Number : ");
    scanf("%d", &ptr[i].roll);
    printf("Enter a Marks : ");
    scanf("%d", &ptr[i].marks);
    printf("Enter a Age : ");
    scanf("%d", &ptr[i].age);
    puts("");
    n += 1;
  }
  return n;
}
int main()
{
  int n = 0;
  struct student st[10];
  int x = input_st_info(st, n);
  display_st_info(st, x);
  return 0;
}
