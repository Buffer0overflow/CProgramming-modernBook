/* 
if i and j are positive integers, does (-i)/j always have same value as -(i/j)? justify your answer.
*/

/* we will compile the program in both C89 & C99 standards to see the difference. */

#include <stdio.h>
int main()
{
int i = 9 , j = 7 , result;

/*the result of following expression is always -1 regardless of implementation . Here, it's compiled with gcc version 8.1.0 (x86_64-posix-seh-rev0, Built by MinGW-W64 project) with -std=c99 argument) */
printf(" The value for expression  (-i)/j based on C99 is : %d\n", (-i)/j);

/*the result of following expression is always -1 regardless of implementation */
printf(" The value for expression  -(i/j) based on C99 is : %d", -(i/j));

 return 0;
};