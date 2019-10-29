// branje vrednosti s tipkovnice
#include <stdio.h>

int main(void)
{
	float polmer;
    float obseg;
    float ploscina;
    
    printf("Vpisi vrednost polmera: ");
    scanf("%f",&polmer);
    
    obseg = 2 * 3.14 * polmer;   // 2 * pi *r
    ploscina = 3.14 * polmer * polmer;
    
    printf("\nObseg kroga z radijem %g je %f,\n",polmer,obseg);
    printf("ploscina tega kroga pa je %e.\n\n",ploscina);
    
	return 0;
}
