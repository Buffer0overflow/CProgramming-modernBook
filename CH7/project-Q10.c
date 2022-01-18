#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_NAME_SIZE 25
int main()
{

    int i,
        countr =0;
    char input[25];

    printf("Enter a sentence: ");
    fgets(input,MAX_NAME_SIZE,stdin);
      

    for ( i=0 ; i < strlen(input) ; i++)
    {
       
        
        if ( input[i] == 'a' || input[i] == 'e' || input[i] == 'o' || input[i] == 'i' || input[i] == 'u')
        {
            countr++;
            
        }
    }
    printf("There are %d vowels in your input text",countr);
    
    return 0;
};