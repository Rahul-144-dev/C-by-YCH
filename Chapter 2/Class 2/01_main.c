#include <stdio.h>
#include <float.h>
int main()
{
  int n1 = 5, n2 = 9;
  float result = (float)n1 / n2;
  //: division operator returns quotient value
  // printf("the quotient of %d/%d is : %.2f\n", n1, n2, result);
  //: float vs double
  float float_pi = 3.141592653589793238;   // precision for float = 6 digits after (.)
  double double_pi = 3.141592653589793238; // precision for double = 15 digits after (.)
  // printf("float = %.16f\n", float_pi);
  // printf("double = %.16lf", double_pi);
  //: Size Of operator
  // printf("The size of the float data type is : %d\n", sizeof(float_pi));   // 4 bytes = 32 bits
  // printf("The size of the double data type is : %d\n", sizeof(double_pi)); // 8 bytes = 64 bits
  //|Size according to array

  //: size of arry = size of data type * Length of the array
  float float_array[] = {1.00, 2.25, 3.50, 4.75, 5.00};
  double double_array[] = {1.00, 2.25, 3.50, 4.75, 5.00};
  printf("the size of float arry is : %d\n", sizeof(float_array));
  printf("the size of double arry is : %d\n", sizeof(double_array));
  //: Range
  //|minimum and maximum
  // printf("the range of the float data type is from [%e] to [%e]\n", INT_MIN, FLT_MAX); //*exponential value
  // printf("the range of the float data type is from [%e] to [%e]\n", FLT_MIN, FLT_MAX); //*exponantial value
  // printf("the range of the double data type is from [%e] to [%e]", DBL_MIN, DBL_MAX);  //*exponantial value
  //|if a number is too much big then print it as exponential value
  // float exponential = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899;
  // printf("to print this too big value: %e\n", exponential);//using %e for exponential value
  //: Data Type Modifier
  // int 2 type = signed(+ and -) and unsigned(only +)
  // signed int range= -2,147,483,648 to 2,147,483,647
  // unsigned int range= 0 to (2,147,483,648)*2=0 to 4,294,967,295
  //| signed
  // int num1;       size=4 bytes
  // short num2;     size=2 bytes
  // long num3;      size=4 bytes
  // long long num4; size=8 bytes
  //|unsigned
  
  return 0;
  // refrence link to study about data type ranges = https://www.geeksforgeeks.org/data-types-in-c/?ref=lbp
}