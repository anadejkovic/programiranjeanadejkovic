#include<stdio.h>
#include<stdio.h>
#include<math.h>
int main() 
{
    int x;
    double rv;
    p:
    printf("unesite vrednost celog broja x ciju reciprocnu vrednost zelite da nadjete:\n");
    scanf("%d", &x);
    if(x==0) 
    {
        printf("greska prilikom unosa broj ne sme biti 0\n");
        goto p;
    }
    else
    {
        rv = 1.0/x;
        printf("reciprocna vrednost broja %d je %.4lf",x,rv);
    }
    return 0;
}    