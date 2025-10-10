#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   int x,y,z,r,p,cd,od;//deklaracija promenljivih
    printf("Unesite dva broja:\n");
    scanf("%d%d",&x,&y);//unos brojeva
    z=x+y;//racunanje zbira
    r=x-y;//racunanje razlike
    p=x*y;//racunanje proizvoda
    cd=x/y;//racunanje celobrojnog kolicnika
    od=x%y;//racunanje ostatka pri deljenju
    printf("Zbir brojeva %d i %d je %d\n",x,y,z);//ispis rezultata
    printf("Razlika brojeva %d i %d je %d\n",x,y,r);//ispis rezultata
    printf("Proizvod brojeva %d i %d je %d\n",x,y,p);//ispis rezultata
    printf("Celobrojno deljenje brojeva %d i %d je %d\n",x,y,cd);//ispis rezultata
    printf("Ostatak pri deljenju brojeva %d i %d je %d\n",x,y,od);//ispis rezultata
    printf("Kolicnik brojeva %d i %d je %lf\n",x,y,1.0*x/y);//ispis rezultata
    return 0;
}