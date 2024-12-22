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
  printf("Enter Students Information:\n");
  for (int i = 0; i < 3; i++)
  {
    printf("Enter the roll of the student: ");
    scanf("%d", &st[i].roll);
    
    getchar(); // Consume the newline character
    printf("Enter the name of the student: ");
    fgets(st[i].name, 100, stdin);
    // Remove the trailing newline character, if present
    // st[i].name[strcspn(st[i].name, "\n")] = '\0';
  }
  for (int i = 0; i < 3; i++)
  {
    printf("ID: %d Name: %s\n", st[i].roll, st[i].name);
  }
  return 0;
}