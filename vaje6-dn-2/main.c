#include <stdio.h>
#include <string.h>
/*
 * Domaca naloga:
 * 2) od uporabnika prebira nize v zanki, nov niz doda prejsnemu za presledkom,
 *  in zanko ponavlja dokler uporabnik ne vpise praznega niza
 * primer : 
 * > danes
 * << "danes"
 * > lep
 * << "danes lep"
 * > dan
 * << "danes lep dan"
 * > 
 * (konca, prazen niz)
 */


int main(int argc, char **argv)
{
    char buf[1000];
    char velik_buf[10000];
    char presledek[] = " "; // Presledek v nizu, poenostavi sestavljanje nizov
    velik_buf[0] = 0; // Na zacetku je v velikem buf prazen niz, za to je 0 na zacetku
    do {
        printf("Vnesite niz :");
        gets(buf);
        strcat(velik_buf,presledek);
        strcat(velik_buf,buf);
        printf("Do zdaj ste vnesli : \n");
        puts(velik_buf);
        
    } while(strlen(buf)>0);
	return 0;
}
