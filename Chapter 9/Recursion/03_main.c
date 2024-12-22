#include <stdio.h>
void prn(int a);
int main()
{
  int x, y;
  printf("enter range 1 : ");
  scanf("%d", &x);
  // printf("enter range 2 : ");
  // scanf("%d", &y);
  prn(x);
  // for (int i = x; i <= y; i++)
  // {
  //   printf("%d\n", i);
  // }
  return 0;
}
void prn(int a)
{
  if (a == 0)
    return;
  prn(a - 1);
  printf("%d\n", a);
}