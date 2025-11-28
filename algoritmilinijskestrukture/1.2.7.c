#include<stdio.h>
#include<math.h>
int main()
{
    int godina, prestupna;
    printf("unesite godinu:\n");
    scanf("%d", &godina);
    if((godina%4==0 && godina%100!=0) || (godina%400==0))
    {
        prestupna=1;
    }
    else
    {
        prestupna=0;
    }
    if(prestupna==1)
    {
        printf("godina %d je prestupna\n", godina);
    }
    else
    {
        printf("godina %d nije prestupna\n", godina);
    }
    return 0;
}