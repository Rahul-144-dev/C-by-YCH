// WAP in C to enter the temperature into Fahrenheit and convert it into a Celsius.
//| [Formula:C = (F - 32) * 5 / 9]
// where C = Celsius and F = Fahrenheit]
#include <stdio.h>
int main()
{
  float celsius, fahrenheit;
  printf("enter temperature in Fahrenheit : ");
  scanf("%f", &fahrenheit);
  celsius = (fahrenheit - 32) * 5 / 9;
  printf("the fahrenheit converted to celsius is %.2f", celsius);
  return 0;
}