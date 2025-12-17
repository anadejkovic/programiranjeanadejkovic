#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void  provera_ispravnosti_unosa ( int x1, int y1, int x2, int y2)
{
    if ( x1==x2 && y1==y2)
    printf("greska\n");
    return 'i';
}
if (x1<0 || x2<0 || x1>8 || x2>8 || y1<0 || y2<0 || y1>8 || y2<8)
{
    printf("greska prilikom unosa koordinate su van opsega\n");
    return 'v';
}
return 'r';// slucajan odabir karaktera ya veacanje ya slucaj da ne prodje ni jedan if
char provera_napadanja(int x1,int y1,int x2,int y2)
{
    if(abs(x2-x1)==abs(y2-y1))
    return 'd';

    return 'n';
}
int main()
{
    int x1,y1,x2,y2;
    char c;
    p:
    printf("unesite x i y koordinate prvog lovca\n");
    scanf("%d%d",x1,y1);
    printf("unesite x i y koordinate drugog lovca\n");
    scanf("%d%d",x2,y2);
    c=provera_ispravnosti_unosa(x2,y2,x1,y1);
    //if (provera_ispravnosti_unosa (x1,y1,x2,y2) =='i' || provera_ispravnosti_unosa (x1,y1,x2,y2) =='v')
    if (c=='i' || c=='v') //oco je bolje jer je kraci zapis pregledniji + ne zovemo dva puta funkciju
    goto p;
    c=provera_ispravnosti_unosa(x2,y2,x1,y1);
    if (c=='d')
    printf("lovci se napadaju\n");
    else 
    printf("lovci se ne napadaju\n");
    return 0;
}

