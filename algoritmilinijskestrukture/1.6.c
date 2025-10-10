#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int  cena,kolicina,ukupno,dato,kusur;//deklaracija promenljivih
    printf("Unesite cenu proizvoda:\n");
    scanf("%d",&cena);//unos cene
    printf("Unesite kolicinu proizvoda:\n");
    scanf("%d",&kolicina);//unos kolicine
    ukupno=cena*kolicina;//racunanje ukupne cene
    printf("Unesite iznos koji ste dali:\n");
    scanf("%d",&dato);//unos iznosa
    kusur=dato-ukupno;//racunanje kusura
    printf("Vas kusur je %d RSD\n",kusur);//ispis rezultata
    return 0;
}