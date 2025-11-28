#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int h;
    printf("unesi koliko ima sati:\n");
    scanf("%d",&h);
    if (h<=0 && h>24)
    {
        printf("greska\n");
    }
    if ((h<=6 || h>22) || (h>=13 && h<17))
    {
        printf("ne moze\n");
    }
    if ((h>=6 && h<13) || (h>=17 && h<=22))
    {
        printf("moze\n");
    }
    return 0;
}