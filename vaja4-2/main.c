#include <stdio.h>

int main(int argc, char **argv)
{
    float x;
    float eps;
    float trVrednost=1.0;
    float vsota=trVrednost;
    
    printf("Vpisi x: "); scanf("%f",&x);
    printf("Vnesti natancnost: "); scanf("%f",&eps);
    
    int i =1;
    while (trVrednost > eps)
    {
        trVrednost=trVrednost*x/i;
        vsota+=trVrednost;    // vsota = vsota + trVrednost;
        i++;
    }
    
    printf("Sesteli smo %d clenov vrste.\n",i);
	printf("Vrednost e^x = %g\n\n",vsota);
	return 0;
}
