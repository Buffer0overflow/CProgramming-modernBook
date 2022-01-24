#include <stdio.h>
void split_time(unsigned long long total_sec,
                int *hours,
                int *minutes,
                int *seconds);
int main()
{

unsigned long long total_sec;
int hours ,minutes ,seconds;
printf("Enter number of seconds for calculation: ");
scanf(" %ld",&total_sec);

split_time(total_sec ,&hours ,&minutes ,&seconds);
printf("Number of seconds passed since midnight is: %ld seconds\n",total_sec);
printf("Hours:%d Minutes:%d Second%s:%d",hours,minutes,(seconds > 1 )? ("s"):(""),seconds);


 return 0;
};

void split_time(unsigned long long total_sec,
                int *hours,
                int *minutes,
                int *seconds)
    {

       *hours = total_sec / 3600 ; 
       *minutes = (total_sec % 3600) / 60 ;
       *seconds = (total_sec % 3600) - (*minutes * 60);

    };