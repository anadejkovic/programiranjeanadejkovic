#include<stdio.h>
#include<math.h>
int main()
{
    int h,m;
    printf("unesite vreme u satima i minutima:\n");
    scanf("%d %d", &h, &m);
    if(h<0 || h>23 || m<0 || m>59)
    {
        printf("uneto vreme je nemoguce\n");
    }
    else
    {
        printf("vreme uneto u satima i minutima od ponoci je %d\n", h*60 + m);
    }
    return 0;
}