#include <stdio.h>

/*
 * Domaca naloga:
 * 1) od uporabnika prebere niz znakov in presteje stevilo besed v nizu
 *   (lahko privzamete, da je med besedami 1 presledek)
 *   (lahko uporabite najdi_nov = strchr(najdi_star+1,' '))

 */


int main(int argc, char **argv)
{
    char buf[1000];
    int n;
    printf("Vnesite stavek : \n");
    gets(buf);
    
    // Prestejemo presledke v buf
    n=0;
    for( int i=0; i<strlen(buf); ++i )
    {
        if(buf[i]==' ')
            n++;
    }
    printf("Vneseni stavek ima %d besed\n", n+1);
	
	return 0;
}
