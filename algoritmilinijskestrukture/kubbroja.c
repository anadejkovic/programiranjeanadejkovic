#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int x;
printf("Unesite broj:\n");
scanf("%d",&x);
printf("Racunanje kvadrata i kuba broja %d\n",x);
printf("Kvadrat broja %d je %d\n",x,x*x);
printf("Kub broja %d je %d\n",x,x*x*x);
printf("racunanje kvadrata i kuba broja pomocu funkcije pow iz math.h\n");
printf("Kvadrat broja %d je %.0f\n",x,pow(x,2));
printf("Kub broja %d je %.0f\n",x,pow(x,3));
return 0;
}   