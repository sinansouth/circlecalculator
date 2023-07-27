#include <stdio.h>
#include <stdlib.h>

int main()
{

    char myCity[30],myCountry[30];
    printf("Enter your city:\t");
    scanf("%s",&myCity);
    printf("Enter your country:\t");
    scanf("%s",&myCountry);
    printf("You are from:\t%s,%s",myCity,myCountry);
    printf("\n");

    return 0;
}
