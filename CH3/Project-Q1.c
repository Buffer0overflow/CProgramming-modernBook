/*
Accept user input in format mm/dd/yyyy and dispaly as yyyymmdd
*/

#include<stdio.h>

void main(void)
{

int day,month,year;

puts("Enter date in a format ((mm/dd/yyyy))");
scanf("%d/%d/%d",&month,&day,&year);

printf("you Entered %d%d%d",year,month,day);


};