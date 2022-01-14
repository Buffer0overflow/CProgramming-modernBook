#include <stdio.h>
int main(void)
{
  int itemNo , year,month,day;
  double price;


  printf("Enter item number                : ",itemNo);
  scanf(" %d",&itemNo);

  printf("Enter unit price                 : ",price);
  scanf(" %lf",&price);

  printf("Enter Purchase date ( mm/dd/yyyy): ",month,day,year);
  scanf(" %d/%d/%d",&month,&day,&year);

  puts("Item\t\tUnit\t\tPurchase");
  puts("    \t\tPrice\t\tDate");
  puts("=========================================================");

  printf("%d\t\t$%6.2lf\t\t%d/%d/%d",itemNo,price,month,day,year);




 return 0;
};