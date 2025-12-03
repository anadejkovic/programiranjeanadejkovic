#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
    int bgi1,bgi2;
    printf("unesi koliko gemova u setu je ostvario prvi igrac \n");
    scanf("%d",&bgi1);
    printf("unesi koliko gemova u setu je ostvario drugi igrac \n");
    scanf("%d",&bgi2);
    if(bgi1<6 && bgi2<6)
    {
        printf("Mec jos uvek traje\n");
        return 0;
    }
    if (bgi1==6 && (bgi2>=0 && bgi2<=4))
    printf("prvi je pobedio\n");
 else
 {
    if(bgi2==6 && (bgi1>=0 && bgi1<=4))
    printf("Pobedio je drugi\n");
    else
    {
        if(bgi1==6 && bgi2==6)
        { 
            int bptbi1,bptbi2;
            char izbor;
            p:
            printf("unesi broj poena prvog u tajbrejku\n");
            scanf("%d",&bptbi1);
             printf("unesi broj poena drugog u tajbrejku\n");
             scanf("%d",&bptbi2);
             if(bptbi1<7 && bptbi2<7 || abs(bptbi1-bptbi2<2))
             {
                printf("Taj brejk jos uvek traje\n");
                printf("Da li zelite da unesete kasnije ponovo rezultat taj brejka za proveru pobednika unesi y ako zelis n ako ne zelis\n");
                scanf(" %c",&izbor);
                if(izbor=='y')
                   goto p;
                else
                return 0;
             }
             if(bptbi1==7 && bptbi2>=0 && bptbi2<=5)
             printf("Pobedio je prvi igrac\n");
             else
             {
                if(bptbi1==7 && bptbi2>=0 && bptbi2<=5)
                printf("Pobedio je drugi igrac");
                else
                {
                    if(bptbi1+bptbi2>=12)
                    {
                         if(bptbi1-bptbi2==2)
                         printf("pobedio je prvi\n");
                         else
                         {
                            if(bptbi2-bptbi1==2)
                            printf("Pobedio je drugi\n");
                         }
                    }
                }
             }
        }
    }
 }
    return 0;
}