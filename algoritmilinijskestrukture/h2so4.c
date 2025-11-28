#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double r,n,p,s,O;
    float pi;
    pi=3.14;
    printf("unesi broj krugova koji trkac istrci\n");
    scanf("%lf",&n);
    printf("unesi poluprecnik kruga\n");
    scanf("%lf",&r);
    O=2*r*pi;
    s=n*O;
    if (n-(int)n==0.25 || n-(int)n==0.75)
    {
        p=sqrt(2*r*r);
    }
        if (n-(int)n==0.5)
    {
        p=2*r;
    }
        if (n-(int)n==1)
    {
        p=0;
    }
    printf("predjeni put je %.2f a pomeraj je %.2f \n",s,p);
}