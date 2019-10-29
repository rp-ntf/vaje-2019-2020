#include <stdio.h>

int main()
{
    float a,b,vecji;
    
	printf("Vpisi dve stevili.\n");
    printf("1.stevilo: "); scanf("%f",&a);
    printf("2.stevilo: "); scanf("%f",&b);
    
    vecji = (a>b) ? a : b;
    printf("Vecje stevilo je %g\n\n",vecji);
    
	return 0;
}
