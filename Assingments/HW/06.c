// WAP in C to enter the temperature into Celsius and convert it into a Fahrenheit.
//| [Formula : F = C * 9 / 5 + 32]
// where C = Celsius and F = Fahrenheit]
#include <stdio.h>
int main()
{
  float celsius, fahrenheit;
  printf("enter temperature in Celsius : ");
  scanf("%f", &celsius);
  fahrenheit = (celsius * 9) / 5 + 32;
  printf("the celsius converted to fahrenheit is %.2f", fahrenheit);
  return 0;
}