#include <stdio.h>
int main()
{

char firstName [25];
char lastName  [25];

printf("Enter a first and last name: ");
scanf("%s %s",firstName,lastName);

printf("%s, %c.",lastName,firstName[0]);

 return 0;
};