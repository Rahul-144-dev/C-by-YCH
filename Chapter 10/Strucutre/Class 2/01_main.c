#include <stdio.h>
#include <string.h>
struct student
{
  int roll;
  char name[100];
};
int main()
{
  struct student st[5];
  printf("Enter a Students Information : \n");
  for (int i = 0; i < 3; i++)
  {
    printf("Enter the roll of the students : ");
    scanf("%d", &st[i].roll);
    printf("Enter the name of the students : ");
    getchar();
    gets(st[i].name);
  }
  for (int i = 0; i < 3; i++)
  {
    printf("id : %d Name : %s\n", st[i].roll, st[i].name);
  }
  return 0;
}