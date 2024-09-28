// WAP in C to enter length and breadth of a rectangle and calculate the perimeter.
// L = 20, b = 50
#include <stdio.h>
int main()
{
  int length = 20, breadth = 50;
  int perimeter = 2 * (length + breadth);
  printf("the perimeter of the rectangle is: %d\n", perimeter);
  return 0;
}