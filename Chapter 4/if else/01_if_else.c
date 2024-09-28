#include <stdio.h>
int main()
{
  int num;
  printf("enter number : ");
  scanf("%d", &num);
  if (num > 0) // condition 1
    printf("positive");
  else if (num == 0) // condition 2
    printf("zero");
  else // if all conditions are false
    printf("negative");
  return 0;
}