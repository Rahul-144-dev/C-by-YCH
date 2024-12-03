#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  int flag = 0;
  puts("enter a string value : \n");
  gets(str);
  int length = strlen(str);
  for (int i = 0; i < length; i++)
  {
    if (str[i] != str[length - i - 1])
    {
      flag = 1; // not a palindrome
      break;    // exit the loop
    }
  }
  if (flag)
    printf("%s is not a palindrome", str);
  else
    printf("%s is a palindrome", str);
  return 0;
}
