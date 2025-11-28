#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int x1,y1,x2,y2;
    printf("Unesite koordinate prvog lovca:\n");
    scanf("%d %d", &x1, &y1);
    if(x1<=0 || y1<=0)
    p1:
    {
        printf("Greska prilikom unosa\n");
        goto p1;
    }
    printf("Unesite koordinate drugog lovca:\n");
    scanf("%d %d", &x2, &y2);
    if(x2<=0 || y2<=0)
    p2:
    {
        printf("Greska prilikom unosa\n");
        goto p2;
    }
    if(x1==x2 && y1==y2)
    {
        printf("Lovci se nalaze na istoj poziciji\n");
    }
    else if (abs(x1 - x2) == abs(y1 - y2))
    {
        printf("Lovci su u istoj dijagonali-napadaju se\n");
    }
    else
    {
        printf("Lovci nisu ni u istoj dijagonali-ne napadaju se\n");
    }
    return 0;
}