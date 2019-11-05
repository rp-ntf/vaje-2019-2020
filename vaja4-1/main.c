/* Program izracuna vsoto prvih n clenov vrste za exp(x)
 * n in x vpise uporabnik */
#include <stdio.h>
#include<math.h>

int main(int argc, char **argv)
{
	float x;
    int n;
    float trVrednost=1.0;
    float vsota=trVrednost;
    
    printf("Vnesi stevilo x: "); scanf("%f",&x);
    printf("Vnesi stevilo clenov: "); scanf("%d",&n);
    
    for (int i=1;i<n;i++) {
        trVrednost=trVrednost*x/i;
        vsota+=trVrednost;    // vsota = vsota + trVrednost;
    }
    
    printf("Izracunana vrednost je %g, prava vrednost pa je %g.\n\n",vsota,exp(x));
    
	return 0;
}
