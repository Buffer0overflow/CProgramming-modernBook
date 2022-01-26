#include <stdio.h>
#define ARRAY_SIZE 3
int main()
{

int array[ARRAY_SIZE] , *ptr ;

printf("Enter 3 numbers to print in reverse order: ");
for ( ptr = array ; ptr < array + ARRAY_SIZE ; ptr++)
    {
        scanf("%d",ptr);
        
   }
    printf("In reverse order : ");
    for (ptr= array + ARRAY_SIZE - 1; ptr >= array ; ptr--)
    /* ptr = (0 + 3-1) = 2 ; 2 > = 0 ; 2--*/
        printf(" %d",*ptr);
                
 return 0;
};