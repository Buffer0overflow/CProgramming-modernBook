#include <stdio.h>
void find_two_largest(int a[], int n, int *largest, int *secondLargest);


int main()
{

    int largest, secondLargest, n;

    printf("How many numbers you want to enter?", n);
    scanf(" %d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    /*
    When we call the function, array is passed as argument without []
    */

    find_two_largest(a, n, &largest, &secondLargest);  

    printf("Largest number is: %d\n", largest);
    printf("Second largest number is: %d\n", secondLargest);

    return 0;
};

void find_two_largest(int a[], int n, int *largest, int *secondLargest)
{
    if (a[0] > a[1])
    {
        *largest = a[0];
        *secondLargest = a[1];
    }
    else
    {
        *largest = a[1];
        *secondLargest = a[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (a[i] > *largest)
        {
            *secondLargest = *largest;
            *largest = a[i];
        }
        else if (a[i] > *secondLargest)
        {
            *secondLargest = a[i];
        }
    }
}