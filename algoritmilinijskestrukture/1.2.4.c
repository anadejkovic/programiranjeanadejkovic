#include<stdio.h>
#include<math.h>
int main() 
{
    int x,y,z,sum,zp=0;
    p:
    printf("unesite tri cela broja:\n");
    scanf("%d %d %d", &x, &y, &z);
    if(x>0) 
    {
        zp=zp+x;//zp=0+3 zp=3
    }
    if(y>0) 
    {
        zp=zp+y;
    }
    if(z>0) 
    {
        zp=zp+z;//zp=3+5 zp=8
    }
    if(zp==0) 
    {
        printf("medju unetim brojevima nema pozitivnih tako da je zbir nula\n");
    }
    else 
    {
        printf("zbir pozitivnih unetih brojeva =%d\n",zp);
    }
    return 0;
}