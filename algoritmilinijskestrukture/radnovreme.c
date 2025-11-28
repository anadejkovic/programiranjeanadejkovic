#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int vreme,sati,minuti;
printf("Unesite sate:\n");
scanf("%d",&sati);
printf("Unesite minute:\n");
scanf("%d",&minuti);
vreme=sati*60+minuti;
if(vreme>9*60 && vreme<17*60)
{
    printf("Mejl je poslat na vreme.\n");
}
if(vreme<9*60 || vreme>17*60)
{
    printf("Mejl nije poslat na vreme.\n");
}
if (sati<0 || sati>24 || minuti<0 || minuti>60)
{
    printf("Greska pri unosu vremena.\n");
}
    return 0;
}