#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int x1,y1,x2,y2;
    p1:
    printf("Unesite koordinate prve kraljice:\n");
    scanf("%d %d", &x1, &y1);
    if(x1<1 || y1<1 || x1>8 || y1>8)  
    {
        printf("Greska prilikom unosa\n");
        goto p1;
    }
    p2:
    printf("Unesite koordinate druge kraljice:\n");
    scanf("%d %d", &x2, &y2);
    if(x2<1 || y2<1 || x2>8 || y2>8 )
    {
        printf("Greska prilikom unosa\n");
        goto p2;
    }
    if(x1==x2 && y1==y2)
    {
        printf("kraljice se nalaze na istoj poziciji\n");
        return 0;
    }
    if (abs(x1 - x2) == abs(y1 - y2))
    {
        printf("kraljice su u istoj dijagonali-napadaju se\n");
        return 0;
    }
    else
        {
            printf("kraljice nisu ni u istom redu ni u istoj koloni-ne napadaju se\n");
            return 0;
        }
    if (x1==x2 ||y1==y2)
        {
            printf("kraljice su u istoj koloni-napadaju se\n");
        }
    return 0;
}