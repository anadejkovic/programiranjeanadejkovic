#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,m,s,d,j;
    printf("Unesite pozitivan cela broj n:\n");
    scanf("%d",&n);//123
    j=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    s=n%10;
    m=j*100+d*10+s;
    printf("Broj u obrnutom redosledu je %d\n",m);
    return 0;
}
