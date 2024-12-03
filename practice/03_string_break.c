#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  int alphabet, number, space, special, length;
  alphabet = number = space = special = length = 0;
  puts("Enter a String value : ");
  gets(str);
  length = strlen(str);
  /*just using while loop*/
  int i = 0;
  while (length != 0)
  {
    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
      alphabet++;
    else if (str[i] >= '0' && str[i] <= '9')
      number++;
    else if (str[i] == ' ')
      space++;
    else
      special++;

    i++;
    length--;
  }
  printf("Alphabets = %d", alphabet);
  puts("\n");
  printf("Numbers = %d", number);
  puts("\n");
  printf("Spaces = %d", space);
  puts("\n");
  printf("Specials = %d", special);
  return 0;
}