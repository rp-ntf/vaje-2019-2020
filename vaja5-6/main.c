#include <stdio.h>
/* Sestavi program, ki prebere tabelo in poišče njen največji in najmanjši element.
 * Program dopolni tako, da bo izračunal še povprečno vrednost elementov v tabeli
 * in njihov standardni odklon.
 * */
 
int main(int argc, char **argv)
{
    float x[10];
    float min, maks;
    float vsota=0.0;
    float povp, stdo;
    
	printf("Vpisi elemente tabele\n");
    
    for(int i=0;i<10;i++)
    {
        printf("x[%d]=",i); scanf("%f",&x[i]);
        vsota+=x[i];
    }
    povp=vsota/10;
    vsota += (x[0]-povp)*(x[0]-povp);
    min=maks=x[0];
    for(int i=1;i<10;i++)
    {
        if (x[i]>maks) maks=x[i];
        if (x[i]<min) min=x[i];
        vsota+=(x[i]-povp)*(x[i]-povp);
    }
    stdo = sqrt(vsota/10);
    printf("maks = %g in min = %g.\n",maks,min);
    printf("Povprecje je %g in standardni odklon %g.\n\n",povp,stdo);
    
	return 0;
}
