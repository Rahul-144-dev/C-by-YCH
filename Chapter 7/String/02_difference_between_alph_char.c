#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  int alpha, digit, other, space, length;
  alpha = digit = other = 0;
  puts("Enter a String : ");
  gets(str);
  length = strlen(str);
  for (int i = 0; i < length; i++)
  {
    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
      alpha++;
    else if (str[i] >= '0' && str[i] <= '9')
      digit++;
    else if (str[i] == ' ')
      space++;
    else
      other++;
  }
  printf("Alphabets = %d", alpha);
  puts("\n");
  printf("Digits = %d", digit);
  puts("\n");
  printf("Others = %d", other);
  puts("\n");
  printf("Spaces = %d", space);
  return 0;
}