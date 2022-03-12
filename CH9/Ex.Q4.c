#include <stdio.h>
#include <stdbool.h>
#define n 5

bool has_zero(int array[],int n);
int main(void)
{

int arr []= {1,4,0,5,9};

has_zero(arr,n);

if (has_zero)
    printf("True") ;
    else
   printf("Fasle") ;

 return 0;
};

bool has_zero(int arr1[],n);
{

for (int i=0 ; i < n ; i++)
{
    if (arr1[i] == 0)
    {
        return true ; 
    } else 
    {
        return false;
    }

}


}