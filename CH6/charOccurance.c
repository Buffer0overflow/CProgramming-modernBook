/*Simple c demo program for continue statement*/

#include <stdio.h>
#include<string.h>

int main()
{

int counter = 0;

char name [] = "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.";

for (int i = 0 ; i < strlen(name); i++ )
{
    if (name[i] == 't')
    {
        counter++ ;
        printf("No.%d occurrence for letter t is in position No.%d\n",counter,i);
        continue;
    }
}
   printf("\n\nTotal No of appearances of letter t in this text is %d:\n",counter); 
 return 0;
};