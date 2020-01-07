/*Napisite funkcijo, ki na disk zapise tabelo vrednost
 * x sin(x)
 * za x na intervalu od 0 do 7 v presledkih po 0.05
 * */
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	double x=0.0;
    FILE *izhod;
    
    izhod = fopen("xsin.csv","w");
    
    if (izhod==NULL) printf("Ne morem odpreti datoteke.\n");
    else {
        while (x<=7.0) {
            fprintf(izhod,"%g,%g\n",x,x*sin(x));
            x=x+0.05;
        }
        fclose(izhod);
    }
	return 0;
}
