/* Definiraj strukturo, ki jo sestavljata dve realni spremenljivki z imenoma "re" in "im"
 * ter poimenuj kompleksno (uporabi tudi typedef). sestavi program, ki uporablja to 
 * strukturo za seštevanje, odštevanje in množenje kompleksnih števil, ki jih vnaša uporabnik. */
#include <stdio.h>
typedef float realno;

typedef struct {
    realno re;
    realno im;
} kompleksno;

int main(int argc, char **argv)
{
	kompleksno a,b;
    
    printf("Vpisi dve kompleksni stevili.\n");
    printf("Re(prvo stevilo): "); scanf("%f",&a.re);
    printf("Im(prvo stevilo): "); scanf("%f",&a.im);
    printf("Re(drugo stevilo): "); scanf("%f",&b.re);
    printf("Im(drugo stevilo): "); scanf("%f",&b.im);
    
    printf("Vsota a+b je: %g + %g*i\n",a.re+b.re,a.im+b.im);
    printf("Razlika a-b je: %g + %g*i\n",a.re-b.re,a.im-b.im);
    printf("Produkt a*b je: %g + %g*i\n",a.re*b.re+a.im*b.im, a.im*b.re+b.im*a.re);

	return 0;
}
