/* Sestavi funkcijo, ki bo naravna števila iz vhodne datoteke prepisla
 * na dve datoteki, na prvo vsa soda in na drugo vsa liha.
 **/
#include <stdio.h>

void PrepisStevil(char *vh, char *soda, char *liha) {
    int stevilo;
    FILE *in = fopen(vh,"r");
    if(in==NULL) printf("Datoteke %s ne morem odpreti!\n",vh);
    else {
        FILE *out1 = fopen(soda,"w+");
        FILE *out2 = fopen(liha,"w+");
        if((out1==NULL)||(out2==NULL)) printf("Napaka pri odpiranju izhodnih datotek.\n");
        else {
            while(1) {
                fscanf(in,"%d",&stevilo);
                if (feof(in)) break;
                if(stevilo%2==0) fprintf(out1,"%d\n",stevilo);
                else fprintf(out2,"%d\n",stevilo);
            }
            fclose(out1);
            fclose(out2);
        }
        fclose(in);
    }
}

int main(int argc, char **argv)
{
	PrepisStevil("vhod.txt","soda.txt","liha.txt");
	return 0;
}
