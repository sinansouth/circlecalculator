#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sayi,bolum,kalan,toplam;
    toplam=0;
    printf("Dort basamakli bir sayi girin:\n");
    scanf("%d",&sayi);

    bolum=sayi/1000;
    toplam+=bolum;
    kalan=sayi%1000;

    bolum=kalan/100;
    toplam+=bolum;
    kalan=sayi%100;

    bolum=kalan/10;
    toplam+=bolum;
    kalan=sayi%10;

    bolum=kalan/1;
    toplam+=bolum;

    printf("Dort basamagin toplami: %d\n",toplam);

    return 0;
}
