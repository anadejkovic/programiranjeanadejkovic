#include<stdio.h>
#include<math.h>
int main() 
{
    int x,y,z,ukupna_cena,cena,usteda;
    p:
    printf("unesite tri cela broja koja predstavljaju cene proizvoda:\n");
    scanf("%d %d %d", &x, &y, &z);
    if(x<0 || y<0 || z<0) 
    {
        printf("cena ne sme biti negativna, pokusajte ponovo:\n");
        goto p;
    }
    if(x<=y && x<=z) 
    {
        cena = y + z + 1;
    }
    if (y<x && y<z) 
    {
        cena =x + z + 1;
    }
    if (z<x && z<y)
    {
        cena =x + y + 1;
    }
    else 
    {
      printf("cena ne sme biti negativna pokusajte ponovo\n");
      goto p;
    }
    ukupna_cena = x + y + z;
    usteda = ukupna_cena - cena;
    printf("ukupna cena nakon popusta je %d\n", cena);
    printf("ukupna usteda je %d\n", usteda);
    return 0;
}