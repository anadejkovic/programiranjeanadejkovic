#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char reci[100][100];
char iskoriscene[100][100];

int broj_reci = 0;
int broj_iskoriscenih = 0;

void ucitaj_reci()
{
    FILE *f = fopen("reci.txt", "r");

    if(f == NULL)
    {
        printf("Greska pri otvaranju datoteke!\n");
        return;
    }

    while(fscanf(f, "%s", reci[broj_reci]) == 1)
    {
        broj_reci++;
    }

    fclose(f);
}

void unos_imena(char ime[])
{
    printf("Unesite ime igraca: ");
    scanf("%s", ime);
}

int postoji_u_recniku(char rec[])
{
    int i;

    for(i = 0; i < broj_reci; i++)
    {
        if(strcmp(rec, reci[i]) == 0)
        {
            return 1;
        }
    }

    return 0;
}

int vec_koriscena(char rec[])
{
    int i;

    for(i = 0; i < broj_iskoriscenih; i++)
    {
        if(strcmp(rec, iskoriscene[i]) == 0)
        {
            return 1;
        }
    }

    return 0;
}

void dodaj_u_iskoriscene(char rec[])
{
    strcpy(iskoriscene[broj_iskoriscenih], rec);
    broj_iskoriscenih++;
}

int main()
{
    char igrac1[30];
    char igrac2[30];

    ucitaj_reci();

    printf("=================================\n");
    printf("          KALADONT\n");
    printf("=================================\n\n");

    unos_imena(igrac1);
    unos_imena(igrac2);

    srand(time(NULL));

    int slucajan = rand() % broj_reci;

    char trenutna_rec[100];

    strcpy(trenutna_rec, reci[slucajan]);

    printf("\nPocetna rec je: %s\n", trenutna_rec);

    dodaj_u_iskoriscene(trenutna_rec);

    int igrac;

    printf("\nKo pocinje?\n");
    printf("1 - %s\n", igrac1);
    printf("2 - %s\n", igrac2);

    scanf("%d", &igrac);

    while(1)
    {
        char nova_rec[100];

        printf("\n---------------------------------\n");

        if(igrac == 1)
        {
            printf("%s unosi rec: ", igrac1);
        }
        else
        {
            printf("%s unosi rec: ", igrac2);
        }

        scanf("%s", nova_rec);

        if(strlen(nova_rec) < 2)
        {
            printf("Rec mora imati najmanje 2 slova!\n");
            continue;
        }

        if(!postoji_u_recniku(nova_rec))
        {
            printf("Rec ne postoji u recniku!\n");

            if(igrac == 1)
                printf("%s je pobednik!\n", igrac2);
            else
                printf("%s je pobednik!\n", igrac1);

            break;
        }

        if(vec_koriscena(nova_rec))
        {
            printf("Ta rec je vec koriscena!\n");

            if(igrac == 1)
                printf("%s je pobednik!\n", igrac2);
            else
                printf("%s je pobednik!\n", igrac1);

            break;
        }

        int duzina = strlen(trenutna_rec);

        if(nova_rec[0] != trenutna_rec[duzina - 2] ||
           nova_rec[1] != trenutna_rec[duzina - 1])
        {
            printf("Pogresan pocetak reci!\n");

            if(igrac == 1)
                printf("%s je pobednik!\n", igrac2);
            else
                printf("%s je pobednik!\n", igrac1);

            break;
        }

        if(strcmp(&nova_rec[strlen(nova_rec)-2], "ka") == 0)
        {
            printf("\nKALADONT!\n");

            if(igrac == 1)
                printf("%s je pobednik!\n", igrac1);
            else
                printf("%s je pobednik!\n", igrac2);

            break;
        }

        dodaj_u_iskoriscene(nova_rec);

        strcpy(trenutna_rec, nova_rec);

        printf("Nova rec je: %s\n", trenutna_rec);

        if(igrac == 1)
            igrac = 2;
        else
            igrac = 1;
    }

    return 0;
}