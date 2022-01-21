#include <stdio.h>
#include <string.h>
int main()
{

char text[256];
    int i,
        whitespace = 0,
        numberOfWords,
        numberOfLetters;
    float average;

    printf("Enter a sentence: ");
    fgets(text,256,stdin);

    for (i = 0; i < strlen(text); i++)
    {
        if (text[i] == 0x20)
        {
            whitespace++;
        }
    };
    numberOfLetters = strlen(text) - whitespace -1;
    numberOfWords = whitespace + 1;
    average = numberOfLetters /(float) numberOfWords;

    printf("No of words is %d\n",numberOfWords);
    printf("No of letters is %d\n",numberOfLetters);

    printf("Average words is %.1f",average);

 return 0;
};