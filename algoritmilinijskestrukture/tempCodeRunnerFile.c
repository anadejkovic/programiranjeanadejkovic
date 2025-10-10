#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int iznosracuna,kusur,dato,bn5k,bn2k,bn1k,bn500,bn200,bn100,bn50,bn20,bn10,bn5,bn2,bn1;
    printf("Unesite iznos racuna:\n");
    scanf("%d",&iznosracuna);
    printf("Unesite iznos koji ste dali:\n");
    scanf("%d",&dato);
    kusur=dato-iznosracuna;
    printf("Vas kusur je %d RSD\n",kusur);
    bn5k=kusur/5000;
    kusur=kusur%5000;
    bn2k=kusur/2000;
    kusur=kusur%2000;
    bn1k=kusur/1000;
    kusur=kusur%1000;
    bn500=kusur/500;
    kusur=kusur%500;
    bn200=kusur/200;
    kusur=kusur%200;
    bn100=kusur/100;
    kusur=kusur%100;
    bn50=kusur/50;
    kusur=kusur%50;
    bn20=kusur/20;
    kusur=kusur%20;
    bn10=kusur/10;
    kusur=kusur%10;
    bn5=kusur/5;
    kusur=kusur%5;
    bn2=kusur/2;
    kusur=kusur%2;
    bn1=kusur/1;
    kusur=kusur%1;
    printf("Vas kusur je:\n%d novcanica od 5000 RSD\n%d novcanica od 2000 RSD\n%d novcanica od 1000 RSD\n%d novcanica od 500 RSD\n%d novcanica od 200 RSD\n%d novcanica od 100 RSD\n%d kovanica od 50 RSD\n%d kovanica od 20 RSD\n%d kovanica od 10 RSD\n%d kovanica od 5 RSD\n%d kovanica od 2 RSD\n%d kovanica od 1 RSD\n",bn5k,bn2k,bn1k,bn500,bn200,bn100,bn50,bn20,bn10,bn5,bn2,bn1);
    return 0;
}