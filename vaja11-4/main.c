/* Napisite funkcijo, ki spoji dve datoteki
 * tako, da 2. datoteka sledi 1. datoteki
 **/
#include <stdio.h>

void SpojiDatoteki(char *dat1, char *dat2)
{
    FILE *datoteka1 = fopen(dat1,"r+");
    FILE *datoteka2 = fopen(dat2,"r");
    
    if(datoteka1==NULL || datoteka2==NULL) printf("Tezave z branjem datotek.\n");
    else {
        char c;
        do
        {
            c=fgetc(datoteka1);
        } while(!feof(datoteka1));
        
        do {
            c=fgetc(datoteka2);
            if(c!=EOF) fputc(c,datoteka1);
        } while(!feof(datoteka2));
        
        fclose(datoteka1);
        fclose(datoteka2);
    }
}

int main(int argc, char **argv)
{
	SpojiDatoteki("datoteka1.txt","datoteka2.txt");
	return 0;
}
