#include <stdio.h>
int main()
{
int number ; 

retry : 
printf("enter a number of max 4 digits: ");
scanf(" %d",&number);

if ( number > 0 && number < 10)
{
    printf("the number %d has 1 digits",number);
} else if ( number > 9 && number < 100) 
{
    printf("the number %d has 2 digits",number);
} else if (number > 99 && number < 1000)
{
    printf("the number %d has 3 digits",number);
} else if (number > 999 && number < 10000)
{
     printf("the number %d has 4 digits",number);
} else
{
    puts("You have entered an invalid value , please try again");
    goto retry;
};

 return 0;
};