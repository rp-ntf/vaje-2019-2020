/* Napisite funkcijo, ki presteje vrstice v datoteki
 * in stevilo izpise na zaslon
 **/
#include <stdio.h>

int PrestejVrstice(char *imedat)
{
    FILE *dat = fopen(imedat,"r");
    int stevec = 0;
    
    if (dat==NULL) printf("Datoteke ne morem odpreti.\n");
    else {
        char niz[100];
        while(!feof(dat)) 
        {
            fgets(niz,100,dat);
            stevec++;
        }
        fclose(dat);
    }
    return stevec-1;
}

int main(int argc, char **argv)
{
	printf("Stevilo vrstic v datoteki je %d.\n",PrestejVrstice("tabela.txt"));
	return 0;
}
