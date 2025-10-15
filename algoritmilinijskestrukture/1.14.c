#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   int n,x,y,m;
    printf("Unesite ceo broj n:\n");
    scanf("%d",&n);
    x=n/100;
    y=n%10;
    m=x*10+y;
    printf("Broj koji se dobija brisanjem cifre desetice je %d\n",m);
    return 0;
}   