#include <stdio.h>
#include <stdlib.h>

int main()
{

    float pressure,constantR
    int moles,volume,heat
    constantR=0.82;

    printf("Kabin hacmini girin:");
    scanf("%f",&volume);
    printf("\nKaptaki mol sayisini girin:");
    scanf("%d",&moles);
    printf("\nOrtam sicakligini girin:");
    scanf("%d",&heat);

    pressure=(moles*constantR*heat)/volume;

    printf("%d hacimli kaptaki gaz basinci:%f\n",volume,pressure);

    return 0;
}
