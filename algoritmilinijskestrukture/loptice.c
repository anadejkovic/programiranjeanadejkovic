#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int bpc,c1,c2,bpp,p1,p2,brp;
    printf(" unesite broj crvenih loptica u prvoj kutiji\n");
    scanf("%d",&c1);
    printf(" unesite broj plavih loptica u prvoj kutiji\n");
    scanf("%d",&p1);
    printf(" unesite broj crvenih loptica u drugoj kutiji\n");
    scanf("%d",&c2);
    printf(" unesite broj plavih loptica u drugoj kutiji\n");
    scanf("%d",&p2);
    kutija1=c1+p1;
    kutija2=c2+p2;
    if(c1>=c2)
    {
        bpc=c1;
    }
    else
    {
        bpc=c2;
    }
    if (c1==c2)
    {
        bpc=c1;
    }
    brp=bpc;
    if(p1<=p2)
    {
        bpp=p1;
    }
    else
    {
        bpp=p2;
    }
    if (p1==p2)
    {
        bpp=p1;
    }
    brp=brp+bpp;
    printf("potreban broj poteza je %d\n",brp);
}