#include <stdio.h>
int main()
{
    int i ;
    int fib_numbers [40]= {0,1};

    for ( i = 2 ; i < 40 ; i++)
    {
        fib_numbers[i]=fib_numbers[i-1] + fib_numbers[i-2];
                    
    }
   for ( int b = 0 ; b < 40 ; b++)
   {
       printf("%d ",fib_numbers[b]);
   }



 return 0;
};