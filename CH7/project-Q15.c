// solution from https://www.programiz.com/c-programming/examples/factorial

#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0 || n > 65 )
        printf("Error! Factorial of a negative number doesn't exist or mdy system can't store the result as its too large !!");
    else {
        for (i = 1; i <= n; ++i) {
            fact *=  i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}
