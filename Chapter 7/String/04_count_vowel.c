// WAP to check the numbers of vowel in a string
#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  int i = 0;
  int len, count = 0;
  puts("Enter a String : ");
  gets(str);
  len = strlen(str);
  while (i <= len)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
      count++;
    i++;
  }
  printf("Number of Vowels in the String is : %d", count);
  return 0;
}