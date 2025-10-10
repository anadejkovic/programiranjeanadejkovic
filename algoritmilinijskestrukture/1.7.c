#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   int s1,m1,s2,m2,trajanjeleta;
    printf("Unesite vreme poletanja u formatu ss mm:\n");
    scanf("%d %d",&s1,&m1);
    printf("Unesite vreme sletanja u formatu ss mm:\n");
    scanf("%d %d",&s2,&m2);
    trajanjeleta=(s2*60+m2)-(s1*60+m1);
    printf("Trajanje leta je %d sati i %d minuta\n",trajanjeleta/60,trajanjeleta%60);
    return 0;
}