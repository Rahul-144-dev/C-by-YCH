#include <stdio.h>
#include <string.h>
int main()
{

  // puts("Enter First String Value : ");
  // gets(str1);
  // puts("Enter Second String Value : ");
  // gets(str2);
  // /* Concatenate
  // syntax : strcat(Destination,Source);
  // Step 1 : str1 = Rahul;
  // Step 2 : str2 = Saha;
  // Step 3 : strcat(str1,str2);
  // Step 4 : str1 = Rahul Saha;
  // Step 5 : strcat(str2,str1);
  // Step 6 : str2 = Saha Rahul;
  // */
  // // strcat(str1, str2);
  // // printf("%s", str1);
  // strcat(str2, str1);
  // printf("%s", str2);
  /* Manual Concatenate */
  char str1[100] = "India";
  char str2[100] = "country";
  int len1 = strlen(str1);
  int len2 = strlen(str2);
  int leng = (len1 > len2) ? len1 : len2;
  for (int i = 0; i < leng; i++)
  {
    str1[len1 + i] = str2[i];
  }
  printf("%s", str1);
  return 0;
}