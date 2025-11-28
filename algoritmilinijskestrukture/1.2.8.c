#include<stdio.h>
#include<math.h>
int main()
{
    int j,d,s,h;
    printf("unesite ceo broj:\n");
    scanf("%d", &j,d,s,h);
    if(j<0 || d<0 || s<0 || h<0)
    {
        printf("greska prilikom unosa\n");
    }
    else
    {
        printf("uneseni broj je: %d %d %d %d\n", j,d,s,h);
    }
    if(j>=d && j>=s && j>=h)
    {
        printf("najveci cifra je: %d\n", j);
    }
    else if(d>=j && d>=s && d>=h)
    {
        printf("najveci cifra je: %d\n", d);
    }
    else if(s>=j && s>=d && s>=h)
    {
        printf("najveci cifra je: %d\n", s);
    }
    else
    {
        printf("najveci cifra je: %d\n", h);
    }
    return 0;
}