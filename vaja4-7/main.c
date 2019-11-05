#include <stdio.h>
#include<time.h>
#include<stdlib.h>

/* Sestavi program, ki izbere naključno število med 1 in 100
 * in od uporabnika zahteva, da to število ugane. Pri vsakem poskusu
 * program pove, ali je vnešeno število manjše ali večje od izbranega 
 * števila. Program se konča, ko uporabnik ugane število */

int main(int argc, char **argv)
{
	srand((unsigned)time(NULL));   // inicializacija generatorja naključnih števil
    // rand()  vrne naključno število med 0 in RAND_MAX
    int stevilo;
    int x;
    int i=0;
    
    stevilo = 1 + (int)(100*(float)rand()/RAND_MAX);
    if (stevilo > 100) stevilo = 100;
    
    printf("Izmislil sem si stevilo med 1 in 100. Ugani ga! \n");
    for(;;) {
        i++;
        printf("%d. poskus: ",i); scanf("%d",&x);
        if (x == stevilo ) {
            printf("Bravo, uganil si v %d. poskusu!\n",i);
            break;
        }
        if (x < stevilo) printf("Stevilo %d je premajhno.\n",x);
        else printf("Stevilo %d je preveliko.\n",x);
    }
    
	return 0;
}
