#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int broj_cifara(int k)
{
    int bc=0;
    while(k!=0)
    {
        bc++;
        k=k/10;
    }
    return bc;
}
int okretanje_cifara(int n)
{
    int c,m=0,k,bc;
    k=abs(k);
    bc=broj_cifara(n);
    k=pow(10,bc-1);
    while(n!=0)
    {
        c=n%10;
        m=m+c*k;
        k=k/10;
    }
    return m;
}
int main ()
{
    int n,m,k;
    printf("unesi ceo broj n\n");
    scanf("%d",&n);
    k=okretanje_cifara(n);
    printf(" broj obrnute cifre broja %d je %d\n",n,k);
    return 0;
}