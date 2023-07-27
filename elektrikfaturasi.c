#include <stdio.h>
#include <stdlib.h>

int main()
{

//fatura=harcanan elektrik*birim fiyat*abone ücreti

    float odenecekFatura,eskiBirimFiyat,yeniBirimFiyat;
    float enflasyon,eskiAboneUcreti,yeniAboneUcreti;
    int yeniOkuma,eskiOkuma,toplamHarcananElektrik;

    printf("Enflasyon oranini girin:");
    scanf("%f",&enflasyon);
    printf("\nOnceki aya ait birim fiyat degerini girin:");
    scanf("%f",&eskiBirimFiyat);
    printf("\nOnceki aya ait abonelik ucretini girin:");
    scanf("%f",&eskiAboneUcreti);
    printf("\nOnceki aya ait okuma degerini girin:");
    scanf("%d",&eskiOkuma);
    printf("\nBu aya ait okuma degerini girin:");
    scanf("%d",&yeniOkuma);

    toplamHarcananElektrik=yeniOkuma-eskiOkuma;
    yeniBirimFiyat=eskiBirimFiyat*(1+enflasyon/100);
    yeniAboneUcreti=eskiAboneUcreti*(1+enflasyon/100);
    odenecekFatura=toplamHarcananElektrik*yeniBirimFiyat+yeniAboneUcreti;

    printf("\nBu ayki elektrik faturaniz enflasyonla beraber:%f TL.\n",odenecekFatura);

    return 0;
}
