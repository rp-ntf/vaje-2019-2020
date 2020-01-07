/* 1. Napisite funkcijo, ki na disk napise tabelo realnih stevil
 * kot tekst 
 * 2. Napisite funkcijo, ki iz diska prebere tabelo realnih stevil
 * kot tekst in jih shrani v novo tabelo, ki jo vrne iz funkcije
 *  ( lahko predpostavite da ima tabela manj kot 100 elementov )
 * 
 * */
#include <stdio.h>

void IzpisiTabeloRealnihStevil(int velikost, double *tabela, char *imedatoteke);
int PreberiTabelo(double *tab, char *imedat);

int main(int argc, char **argv)
{
 //   double a[5]={2.2,1.2,-4.34,3.12,345.3};
    
//    IzpisiTabeloRealnihStevil(5,a,"realnaStevila.txt");

        double tab[100];
        int velikost = PreberiTabelo(tab,"realnaStevila.txt");
        IzpisiTabeloRealnihStevil(velikost,tab,"novaTabela.txt");
    
	return 0;
}

void IzpisiTabeloRealnihStevil(int velikost, double *tabela, char *imedatoteke)
{
    FILE *datoteka = fopen(imedatoteke, "w");
    
    if (datoteka == NULL) printf("Napaka pri odpiranju datpoteke %s.\n",imedatoteke);
    else {
        for (int i = 0; i<velikost;i++)
            fprintf(datoteka,"%g\n",tabela[i]);
            
        fclose(datoteka);
    }
}

int PreberiTabelo(double *tab, char *imedat)
{
    FILE *dat = fopen(imedat,"r");
    int velikost=0;
    
    if(dat==NULL) printf("Napaka pri odpiranju datoteke %s.\n",imedat);
    else {
        int i=0;
        while(!feof(dat)) {
            fscanf(dat,"%lf",&tab[i]);
            i++;
        }
        velikost=i-1;
        fclose(dat);
    }
    return velikost;
}