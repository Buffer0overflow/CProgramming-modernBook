/**
 Suppose that we call scanf as follows:
scanf("%d%s%d", %i, s, &j);
If the user enters 12abc34 56def78, what will be the values of i, s and j after the call? (Assume that i and j are int variables and s is an array of characters.)
*/
#include <stdio.h>
void main(void)
{

int i , j;
char s [256];

printf("Enter your details input: "); // user input is : 12abc34 56def78
scanf("%d%s%d",&i,s,&j);

/**
 * value of i = 12; scanf will scan till if sees non-integer char which is a
 * value of s = "abc34"; scanf will store input from first char from previuos scanf round and will stop when it sees space char.
 * value of j = 56; scanf will resume after last space and will store 56 and stop as next char is not int.
 * 
 */
printf("value of i :%d \nvalue of s is :%s \nvalue of j is: %d",i,s,j);
};
