#include <stdio.h>
int main()
{
    int hour , minute ; 
    printf("Enter time in 24 hours format: ");
    scanf(" %d:%d",&hour,&minute);
    


    if ( hour > 12)
    {
        printf("Equivalent in 12 hour format is: %.2d:%.2d PM.",hour - 12, minute);
    } else if ( hour == 0)
     {
       printf("Equivalent in 12 hour format is 12:%.2d AM.",minute);
    } else if ( hour == 12)
    {
    printf("Equivalent in 12 hour format is: %.2d:%.2d PM.",hour, minute);
    } else
    {
       printf("Equivalent in 12 hour format is: %.2d:%.2d AM.",hour, minute);   
    };

 return 0;
};