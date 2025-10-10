#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,h,s,d,j,proizvod,razlikakis,obrnuto,obrnutojis,kvadratcifara;
    printf("Unesite pozitivan ceo broj n:\n");
    scanf("%d",&n);
    j=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    s=n%10;
    n=n/10;
    h=n%10;
    proizvod=h*s*d*j;
    razlikakis=(h+j)-(s+d);
    obrnuto=j*1000+d*100+s*10+h;
    obrnutojis=h*1000+j*100+d*10+s;
    kvadratcifara=h*h+s*s+d*d+j*j;
    printf("Proizvod cifara je %d\nRazlika izmedju sume prve i sume druge dve cifre je %d\nBroj u obrnutom redosledu je %d\nBroj u obrnutom redosledu prve i poslednje cifre je %d\nKvadratcifara je %d\n",proizvod,razlikakis,obrnuto,obrnutojis,kvadratcifara);
    return 0;
}   