#include <stdio.h>
int main()
{
float num ,
      largest = 0.0f; 

do {
printf("Enter a number: ");
scanf ("%f", &num);

if ( num > largest )
{
 largest = num;
}

} while ( num > 0);

printf("\nLargest number entered is %.2f",largest);
 return 0;
};