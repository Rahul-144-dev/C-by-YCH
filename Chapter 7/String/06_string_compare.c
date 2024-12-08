#include <stdio.h>
#include <string.h>
int main()
{
  char str1[100] = "Rahul";
  char str2[100] = "rahul";
  /* strcmp,compares 2 string values and return 0 if same */
  if (strcmp(str1, str2) == 0)
    printf("Both Stirngs are equal");
  else
    printf("Both Stirngs are not equal");
  return 0;
}