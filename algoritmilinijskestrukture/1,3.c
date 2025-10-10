#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int x,y;  
    printf("Unesite dva broja:\n");
    scanf("%d%d",&x,&y);
    printf("Zbir brojeva %d i %d je %d\n",x,y,x+y);
    printf("Razlika brojeva %d i %d je %d\n",x,y,x-y);
    printf("Proizvod brojeva %d i %d je %d\n",x,y,x*y);
    printf("Kolicnik brojeva %d i %d je %lf\n",x,y,1.0*x/y);
    printf("ostatak pri deljenju brojeva %d i %d je %d\n",x,y,x%y);
    printf("celobrojno deljenje brojeva %d i %d je %d\n",x,y,x/y);
      return 0;
}