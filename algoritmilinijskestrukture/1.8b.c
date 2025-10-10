#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int x,y,t;
    printf("unesi celi broj x:\n");
    scanf("%d",&x);
    printf("unesi celi broj y:\n");
    scanf("%d",&y);
    t=x;
    x=y;
    y=t;
    printf("Zamenjeni brojevi su %d i %d\n",x,y);
    return 0;
}