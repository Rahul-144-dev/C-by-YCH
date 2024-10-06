#include <stdio.h>
void main()
{
  int day;
  printf("enter a day form 1-7 : ");
  scanf("%d", &day);
  switch (day)
  {
  case 1:
    printf("day 1 Monday");
    break;
  case 2:
    printf("day 2 Tuesday");
    break;
  case 3:
    printf("day 3 Wednesday");
    break;
  case 4:
    printf("day 4 Thursday");
    break;
  case 5:
    printf("day 5 Friday");
    break;
  case 6:
    printf("day 6 Saturday");
    break;
  case 7:
    printf("day 7 Sunday");
    break;
  default:
    printf("invalid day");
  }
  printf("\n---Programme Terminated---");
}