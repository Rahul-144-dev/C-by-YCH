// Write a program to create a Simple Calculator using a switch case.
#include <stdio.h>
int main()
{
  int a;
  printf("enter a : ");
  scanf("%d", &a);
  char operator;
  printf("enter operator : ");
  scanf("%c", &operator);
  int b;
  printf("enter b : ");
  scanf("%d", &b);
  switch (operator)
  {
  case '+':
    printf("%d+%d = %d", a, b, a + b);
    break;
  case '-':
    printf("%d-%d = %d", a, b, a - b);
    break;
  case '*':
    printf("%d*%d = %d", a, b, a * b);
    break;
  case '/':
    printf("%d/%d = %d", a, b, a / b);
    break;
  }
  return 0;
}