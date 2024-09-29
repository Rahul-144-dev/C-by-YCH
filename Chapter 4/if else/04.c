#include <stdio.h>
int main()
{
  char ch;
  printf("enter number : ");
  scanf("%c", &ch);
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'a' && ch <= 'z'))
    printf("%c is a alphabet", ch);
  else if (ch >= 0 && ch <= 9)
    printf("%c is a numarical", ch);
  return 0;
}