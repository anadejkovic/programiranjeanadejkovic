#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int x,y;
    printf("Unesite dva cela broja:\n");
    scanf("%d %d", &x, &y);
    if(x>0 && y>0)
    {
        printf("Oba broja su pozitivna.\n");
    }
    if(x<0 && y<0) 
    {
        printf("Oba broja su negativna.\n");
    }
    if(x==0 && y==0)
    {
        printf("Oba broja su nula.\n");
    }
    if(x>0 && y==0)
    {
        printf("X broj je pozitivan, a y nula.\n");
    }
    if(y>0 && x==0)
    {
        printf("y broj je pozitivan, a x nula.\n");
    }
        return 0;
}