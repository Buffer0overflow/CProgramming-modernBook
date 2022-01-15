#include <stdio.h>
int main()
{

int first,second,third,forth,fifth,sixth,seventh,eightth,ninth,tens,eleventh,twelvth,thirteenth,forteenth,fifteenth,sixteenth; 

printf("Enter the numbers from 1 to 16 in any order:");
scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&first,&second,&third,&forth,&fifth,&sixth,&seventh,&eightth,&ninth,&tens,&eleventh,&twelvth,&thirteenth,&forteenth,&fifteenth,&sixteenth);

printf("%d\t %d\t %d\t %d\n",first,second,third,forth);
printf("%d\t %d\t %d\t %d\n",fifth,sixth,seventh,eightth);
printf("%d\t %d\t %d\t %d\n",ninth,tens,eleventh,twelvth);
printf("%d\t %d\t %d\t %d\n",thirteenth,forteenth,fifteenth,sixteenth);

printf("row sums: %d %d %d %d\n",(first+second+third+forth),(fifth+sixth+seventh+eightth),(ninth+tens+eleventh+twelvth),(thirteenth+forteenth+fifteenth+sixteenth));

printf("column sums: %d %d %d %d\n",(first+fifth+ninth+thirteenth),(second+sixth+tens+forteenth),(third+seventh+eleventh+fifteenth),(forth+eightth+twelvth+sixteenth));



 return 0;
};