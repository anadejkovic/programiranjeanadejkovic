#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,m,x,y,z;
    printf("Unesite pozitivan ceo broj n:\n");
    scanf("%d",&n);
    printf("Unesite pozitivan ceo broj m:\n");
    scanf("%d",&m);
    x=n/1000;
    y=n%1000;
    z=x*100000+m*1000+y;
    printf("Novi broj je %d\n",z);
    return 0;
}