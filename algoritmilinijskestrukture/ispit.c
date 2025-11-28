#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int poeni;
    printf("Unesite broj poena:\n");
    scanf("%d",&poeni);
    if (poeni<0 || poeni>100)
    {
        printf("Greska pri unosu poena.\n");
    }
    else if (poeni<=51)
    {
        printf("padas i o`cena je 5.\n");
    }
    if (poeni>=51 && poeni<61)
    {
        printf("Ocena je 6.\n");
    }
    if (poeni>=61 && poeni<71)
    {
        printf("Ocena je 7.\n");
    }
    if (poeni>=71 && poeni<81)
    {
        printf("Ocena je 8.\n");
    }
    if (poeni>=81 && poeni<91)
    {
        printf("Ocena je 9.\n");
    }
    if (poeni>=91 && poeni<=100)
    {
        printf("Ocena je 10.\n");
    }
    return 0;
}
