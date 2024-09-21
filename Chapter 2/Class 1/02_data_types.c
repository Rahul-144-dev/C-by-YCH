#include <stdio.h>
#include <stdbool.h>
int main()
{
  // Data types
  int bookId = 1001;            // Integer Datatype
  char bookName[] = "C by YCH"; // string datatype(creat by using character array)
  float bookPrice = 455.55;     // Float datatype
  int bookQty = 1;              // Integer datatype
  char bookCover = 'H';         // char datatype
  bool isBookAvailable = 1;     // bool datatype// boolean datatype
  // display all values
  printf("bookId: %i\n", bookId);
  printf("Book Name: %s\n", bookName);
  printf("Book Price: %f\n", bookPrice);
  printf("Book Qty: %d\n", bookQty);
  printf("Book Cover: %c\n", bookCover);
  printf("Is Book Available: %d\n", isBookAvailable);
  return 0;
}
