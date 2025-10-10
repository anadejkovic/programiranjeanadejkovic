#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int cena1,cena2,ukupno;//deklaracija promenljivih
    printf("Unesite cenu prvog proizvoda:\n");
    scanf("%d",&cena1);//unos cena
    printf("Unesite u drugog proizvoda:\n");
    scanf("%d",&cena2);//unos cena
    ukupno=cena1+cena2;//racunanje ukupne cene
    printf("Ukupna cena proizvoda je %d RSD\n",ukupno);//ispis rezultata
    return 0;
}