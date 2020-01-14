/* Strukture */
#include <stdio.h>

typedef struct {
    float x;
    float y;
}  tocka;

typedef double stanje;

int main(int argc, char **argv)
{

    tocka a;
    tocka *kaz;
    
    stanje s = 4.3;
    
    kaz = &a;
    
    kaz->x=3.2;
    a.y = -1.1;
    
    printf("x: %g   y: %g\n",kaz->y,a.x);
    
	return 0;
}
