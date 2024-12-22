/* How to create and close a file in C */
#include <stdio.h>
int main()
{
  FILE *ptr; // File Pointer
  /* Create a File */
  /* fopen(File_Name,File_Mode) */
  /*
  File Mode = w(create and open)
              r(read the data from the file)
              a(to apen the data)
  */
  ptr = fopen("test.txt", "w");
  if (ptr == NULL)
    printf("File Does't exist!!!!");
  else
    printf("File Genereted!!!!");
  fclose(ptr);
  return 0;
}