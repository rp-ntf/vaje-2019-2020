#include <stdio.h>

/* Vaje : 
 * Sestavite programe, ki :
 * 1) od uporabnika prebere niz znakov in izpise dolzino niza znakov
 * 2) od uprabnika prebere 2 niza znakov in pove kateri v imeniku pride prej
 * 3) od uporabnika prebere 2 niza znakov in pove na katerem indeksu v 1. nizu se nahaja 2. niz
 * 4) od uporabnika prebere 1 niz znakov in ga kot niz izpise v obratnem vrstenm redu
 * 5) od uporabnika preberemo tabelo 5 celih stevil in jo uredimo po velikosti in izpisemo
 * 
 * Domaca naloga:
 * 1) od uporabnika prebere niz znakov in presteje stevilo besed v nizu
 *   (lahko privzamete, da je med besedami 1 presledek)
 *   (lahko uporabite najdi_nov = strchr(najdi_star+1,' '))
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
    char vrstica1[1000];
    char vrstica2[1000];
    printf("Vpisite niz znakov : \n");
    gets(vrstica1);
    printf("Dolzina niza \"%s\" je %d\n",
        vrstica1, strlen(vrstica1) );
    
    // se 2. program
    printf("Vpisite se 2. niz znakov : \n");
    gets(vrstica2);
    int primerjava = strcmp(vrstica1, vrstica2);
    if( primerjava < 0 )
        printf("Prvi niz je v imeniku pred drugim.\n");
    else if( primerjava > 0 )
        printf("Drugi niz je v imeniku pred prvim.\n");
    else
        printf("Niza sta enaka.\n");
	
	return 0;
}
