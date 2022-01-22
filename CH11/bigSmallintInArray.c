#include <stdio.h>
#define MAX_NUMBERS 10
void max_min(int numbers[] ,int n ,int *max ,int *min);
int main()
{

int numbers[MAX_NUMBERS] ,i ,big ,small;


printf("Enter %d digits to get smallest and bigget values:",MAX_NUMBERS);
for (i=0 ; i < MAX_NUMBERS ; i++)
{
    scanf("%d",&numbers[i]);
}

max_min(numbers ,MAX_NUMBERS ,&big ,&small);

printf("Largest is :%d\n",big);
printf("Smallest is :%d\n",small);


 return 0;
};

void max_min(int numbers[] ,int n ,int *max ,int *min){

int i ;

*max = *min = numbers[0];
for (i = 1 ; i < n ; i++ )
{
    if ( numbers[i] > *max)
    {
        *max = numbers[i];
    } else if(numbers[i] < *min)
    {
        *min = numbers[i];
    };
};



}