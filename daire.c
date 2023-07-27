#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,cevre,alan;
    const float pi=3.14;
    printf("Dairenin yaricapini girin:");
    scanf("%f",&r);
    cevre=2*pi*r;
    alan=pi*r*r;
    printf("\nDairenizin alani: %f cmdir.\n",alan);
    printf("Dairenizin cevresi: %f cmdir.",cevre);
    printf("\n");
    return 0;
}
