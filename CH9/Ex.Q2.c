#include <stdio.h>

int check(int x,int y,int n);
int main(void)
{

int x,y,n;
printf("Enter the value of x:");
scanf(" %d",&x);
printf("Enter the value of y:");
scanf(" %d",&y);
printf("Enter the value of n:");
scanf(" %d",&n);

int return_value = check(x,y,n);
printf("Return value from the function is %d",return_value);


 return 0;
};

int check(x,y,n)
{

if ((x <=n-1 && x >=0 ) && (y <=n-1 && y >= 0))
{
    return 1;
}
    return 0;
}
