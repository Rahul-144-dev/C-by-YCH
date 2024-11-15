#include <stdio.h>
#include <string.h>
int main()
{
  // /*By Char Arary*/
  // char name[100] = {'R', 'a', 'h', 'u', 'l', ' ', 's', 'a', 'h', 'a', '\0'};
  // printf("name is : %s\n", name);
  // /*By String Literal*/
  // char my[100] = "Rahul Saha";
  // printf("My name is : %s", my);

  // /*User Input*/
  // char input[100];
  // printf("enter your name : ");
  // scanf("%s", &input); //| problem = it cant read the values after space

  // /*Solution 1*/
  // scanf("%[^\n]s", &input);
  // printf("Your name is : %s ", input);

  // /*Solution 2*/
  // char fst_nm[100];
  // char lst_nm[100];
  // printf("enter first name : ");
  // scanf("%s", &fst_nm);
  // printf("enter last name : ");
  // scanf("%s", &lst_nm);
  // printf("Your name is : %s %s", fst_nm, lst_nm);

  // // /*User Input*/
  // char name[100];
  // puts("enter your name : ");
  // gets(name);
  // printf("Your name is : %s ", name);

  /*Length of String*/
  char str[100] = {"Surajit Saha"};
  printf("Length of the string is : %d", strlen(str));
  return 0;
}