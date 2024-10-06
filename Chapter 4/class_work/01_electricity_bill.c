//  • For the first 50 units Rs. 0.50/unit
// 	• For the next 10 units Rs. 0.75 unit
// 	• For the next 100 units Rs. 1.20/unit
// 	• For units above 250 Rs. 1.50/unit
// An additional sub charge of 20% is added to the bill
#include <stdio.h>
int main()
{
  int unit;
  printf("enter number : ");
  scanf("%d", &unit);
  double bill, bill_tax;
  //  • For the first 50 units Rs. 0.50/unit
  if (unit <= 50)
  {
    bill = unit * 0.50;
  }
  // 	• For the next 10 units Rs. 0.75 unit
  else if (unit <= 150)
  {
    bill = (50 * 0.50) + (unit - 50) * 0.75;
  }
  // 	• For the next 100 units Rs. 1.20/unit
  else if (unit <= 250)
  {
    bill = (50 * 0.50) + (100 * 0.75) + (unit - 150) * 1.20;
  }
  // 	• For units above 250 Rs. 1.50/unit
  else if (unit >= 250)
  {
    bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + (unit - 250) * 1.50;
  }
  // An additional sub charge of 20% is added to the bill
  double sub_charge = bill * 0.20;
  double total_bill = bill + sub_charge;
  // GST calculation
  if (total_bill <= 100)
    bill_tax = total_bill * 0.05;
  else if (total_bill <= 300)
    bill_tax = total_bill * 0.08;
  else
    bill_tax = total_bill * 0.15;
  double final_bill = total_bill + bill_tax;
  printf("\n|---------Electricity Bill Amount-----------|\n");
  printf("\nthe final bill amount : %.2lf rs\n", final_bill);
  printf("\nbill before adding sub-charges : %.2lf rs\n", bill);
  printf("the sub-charge amount : %.2lf rs\n", sub_charge);
  printf("total bill amount : %.2lf rs\n", total_bill);
  printf("additional gst amount : %.2lf rs", bill_tax);
  return 0;
}