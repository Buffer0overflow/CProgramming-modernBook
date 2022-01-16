#include <stdio.h>
int main()
{

    int areaCode;

    printf("Enter your area code :");
    scanf(" %d", &areaCode);

    switch (areaCode)
    {
    case 229:
        printf("Your city name is Albany.");
        break;
    case 404:
        printf("Your city name is Albany2.");
        break;
    case 470:
        printf("Your city name is Albany3.");
        break;
    case 478:
        printf("Your city name is Albany4.");
        break;
    case 678:
        printf("Your city name is Albany5.");
        break;
    case 706:
        printf("Your city name is Albany6.");
        break;
    case 762:
        printf("Your city name is Albany7.");
        break;
    case 770:
        printf("Your city name is Albany8.");
        break;
    case 912:
        printf("Your city name is Albany9.");
        break;
    default:
        printf("Area code not found , please check again !.");
        break;
    }

    return 0;
};