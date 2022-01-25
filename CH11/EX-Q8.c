#include <stdio.h>
int *find_largest(int a[],int n);

int main()
{
int n;

    printf("How many numbers you want to enter? : ", n);
    scanf(" %d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
 
  int *largest =  find_largest(a, n);  

 printf("Largest number is: %d\n",*largest);
    
 return 0;
};

int *find_largest(int a[],int n)
{
    int *largest = &a[0] , i;
   for (i=1 ; i < n ; i++)
     {
            if ( a[i] > *largest)
        {
            largest = &a[i];
        }

     }
        
     return largest;
}

