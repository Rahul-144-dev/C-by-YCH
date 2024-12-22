#include <stdio.h>
#include <string.h>
void openFile(ptr, ch)
{
  while (!feof(ptr))
  {
    ch = fgetc(ptr);
    printf("%c", ch);
  }
}
int main()
{
  FILE *ptr;
  int num, age;
  char course[30];
  char name[50];
  char ch;
  ptr = fopen("student.txt", "r");
  if (ptr == NULL)
  {
    printf("File Not Created");
  }
  else
  {
    // printf("File Genareted!!!!!!\n");
    // /* Store the data */
    // printf("Enter Number Of Students : ");
    // scanf("%d", &num);
    // for (int i = 1; i <= num; i++)
    // {
    //   printf("Enter Name Of Students: ");
    //   getchar();
    //   gets(name);
    //   printf("Enter Age Of Students: ");
    //   scanf("%d", &age);
    //   printf("Enter Course Of Students: ");
    //   getchar();
    //   gets(course);
    //   puts("");
    //   /* to store data in file */
    //   fprintf(ptr, "%s\t\t%d\t\t%s\n", name, age, course);
    // }

    /* To Read File */
    // while (!feof(ptr))
    // {
    //   ch = fgetc(ptr);
    //   printf("%c", ch);
    // }
  }
  return 0;
}