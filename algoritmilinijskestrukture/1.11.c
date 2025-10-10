#include<stdio.h>
#include<stdlib.h>  
#include<math.h>                                                                
int main()
{
   int n,j,d,s;
    printf("Unesite pozitivan ceo broj n:\n");
    scanf("%d",&n);
    j=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    s=n%10;
    printf("s=%d d=%d j=%d\n",s,d,j);
    return 0;
}