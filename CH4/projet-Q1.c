#include <stdio.h>
int main()
{
int n1,n2;

printf("Enter a two digit number: ");
scanf("%1d%1d",&n1,&n2);

printf("The reversal is %1d%1d\n",n2,n1);

puts("=====================================================");

puts("Here is another solution as per hint and instruction given in the book"); 

int num ;

printf("Enter a two digit number: ");
scanf(" %d",&num);

printf("The reversal is %d%d",num % 10 , num / 10);




 return 0;
};