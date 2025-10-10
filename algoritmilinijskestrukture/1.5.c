#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   int cj,kg,cena;//deklaracija promenljivih
    printf("Unesite cenu jabuka:\n");
    scanf("%d",&cj);//unos cene 
    printf("Unesite kolicinu u kilogramima:\n");
    scanf("%d",&kg);//unos kolicine
    cena=cj*kg;//racunanje ukupne cene
    printf("Ukupna cena jabuka je %d RSD\n",cena);//ispis rezultata
    return 0;
}