#include <stdio.h>
int main()
{

int n;

printf("Enter a number between 0 & 32767: ");
scanf(" %d",&n);

printf("Ocat value for %d is: %d%d%d%d%d\n",n,

(n /4096)%8,
(n /512)%8,
(n / 64)%8,
(n / 8)%8,
(n %8)); 
printf("Same value can be printed using format specifier : %o",n);


 return 0;
};