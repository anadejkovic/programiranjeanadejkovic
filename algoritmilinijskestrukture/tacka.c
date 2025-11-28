#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double x,y,xc,xyc,a,b,r;
    int ip=0,ik=0;
    ptintf("unesite koordinate centra pravougaonika i kruga\n");
    scanf("%lf%lf",&xc&yc);
    printf("unesi koordinate tacke za ispisivanje\n");
    scanf("%lf%lf",&x&y);
    printf("unesi duzinu stranice a i b pravougaonika\n");
    scanf("%lf%lf",&a&b);
    printf("unesi duzinu poluprecnika kruga\n");
    scanf("%lf",r)
    if (x<=xc+a/2 && x>=xc-a/2)&&(y<=yc+a/2 && y>=yc-b/2)
    ip=1;
    if (pow((x-xc),2)+pow((y-yc),2)<=r*r)
    ip=1
    if (pow((x-xc),2)+pow((y-yc),2)<=r*r)
    ik=1
}