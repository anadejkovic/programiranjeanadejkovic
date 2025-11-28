#include<stdio.h>
#include<math.h>
int main()
{
   int x1,x2,y1,y2;
   p1:
   printf("Unesite koordinate prvog topa:\n");
   scanf("%d %d", &x1, &y1);
    if (x1<=0 || y1<=0)
    {
        printf("Greska prilikom unosa\n");
        goto p1;
    }
    p2:
    printf("Unesite koordinate drugog topa:\n");
    scanf("%d %d", &x2, &y2);
    if (x2<=0 || y2<=0)
    {
        printf("Greska prilikom unosa\n");
        goto p2;
    }
    else
    {
        if (x1==x2 && y1==y2)
        {
            printf("Topovi se nalaze na istoj poziciji\n");
        }
        else if (x1==x2 ||y1==y2)
        {
            printf("Topovi su u istoj koloni-napadaju se\n");
        }
        else
        {
            printf("Topovi nisu ni u istom redu ni u istoj koloni-ne napadaju se\n");
        }
    }
    return 0;
}
