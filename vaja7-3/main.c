/* Sestavi funkcijo, ki prejme dve vrednosti kot parametra ter izracuna 
 * njuno geometrijsko povprečje. Če uporabnik vpiše negativno število,
 * naj program ustrezno reagira. Uporabi funkcijo v programu, kjer uporabnik 
 * vpiše obe vrednosti, rezultat izpiše na zaslon. */
#include <math.h>
#include <stdio.h>

float geometricnoPovprecje(float a, float b)
{
    float x = a*b;
    
    if ((a<0)||(x<0))
        return -1;
    else
        return sqrt(x);
}

int main()
{
    float x,y,gp;
	printf("Vpisi dve stevili.\n");
    printf("x: "); scanf("%f",&x);
    printf("y: "); scanf("%f",&y);
    gp = geometricnoPovprecje(x,y);
    if (gp<0) 
        printf("Napaka: vsaj en vnos je negativen!\n");
    else
          printf("Geometricno povprecje je %g.\n",gp);
  
	return 0;
}
