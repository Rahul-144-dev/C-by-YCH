// WAP to find the maximum between 3 numbers
#include <stdio.h>
int main()
{
  int a, b, c;
  printf("enter a : ");
  scanf("%d", &a);
  printf("enter b : ");
  scanf("%d", &b);
  printf("enter c : ");
  scanf("%d", &c);
  if (a > b)
  {
    if (a > c)
    {
      printf("the largest number is %d", a);
    }
    else
    {
      printf("the largest number is %d", c);
    }
  }
  else if (b > a)
  {
    if (b > c)
    {
      printf("the largest number is %d", b);
    }
    else
    {
      printf("the largest number is %d", c);
    }
  }
  return 0;
}