#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  puts("Enter a String value : ");
  gets(str);
  printf("Lowercase to Uppercase : %s", strupr(str)); // Function to convert Lowercase to Uppercase
  puts("\n");
  printf("Uppercase to Lowercase : %s", strlwr(str)); // Function to convert Uppercase to Lowercase
  // printf("string is : %s", str);
  // for (int i = 0; str[i] != '\0'; i++)
  // {
  //   if (str[i] >= 'a' && str[i] <= 'z')
  //   {
  //     str[i] -= 32;
  //   }
  //   else
  //     str[i] += 32;
  // }
  return 0;
}