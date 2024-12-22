/* How to write in a file */
#include <stdio.h>
#include <string.h>
/*
    fputc(); -> user input
    fputs(); ->
    fprintf(file,format specifier,information); -> most use
    fgetc(); ->
*/
int main()
{
  FILE *file;
  // char name[20] = "Surajit Saha";
  char name[30];
  char ch;
  int age;
  // int len = strlen(name);
  file = fopen("test.txt", "r");
  if (file == NULL)
    printf("File Does't exist!!!!");
  else
  {
    printf("File Genereted!!!!\n");
    // for (int i = 0; i < len; i++)
    // {
    //   fputc(name[i], file);
    // }
    // printf("Enter a Name : ");
    // gets(name);
    // printf("Enter a Age : ");
    // scanf("%d", &age);
    /*
        fprintf(file,format specifier,information);
    */
    // fprintf(file, "My Name Is : %s\nMy Age Is : %d\n\n", name, age);
    /* File End Of */
    while (!feof(file))
    {
      ch = fgetc(file);
      printf("%c", ch);
    }
    printf("file is written successfully");
  }
  fclose(file);

  return 0;
}