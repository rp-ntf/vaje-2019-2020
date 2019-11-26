/* Sestavi funkcijo, ki prejme vrednost cele spremenljivke in 
 * ji poveča vrednost za k, ki ga prejme kot drugi parameter.
 * Povečano vrednost funkcija vrne. Uporabi to funkcijo v funkciji 
 * main  */

#include <stdio.h>

int povecaj(int x, int k)
{
    x = x + k;     // x += k;
    return x;
}

int main()
{
	int x = 7, y;
    
    y = povecaj(x,2);
    printf("Ce vrednosti %d pristejemo 2, dobimo vrednost %d.\n",x,y);
    
	return 0;
}
