/* * Sestavi funkcijo, ki prebere parametra k in n JMAK enačbe
 * x = 1-exp(-k*pow(t,n));
 * ter končni čas in časovni korak ter izpiše vrednost x in časa po korakih 
 * */
#include <stdio.h>
#include <math.h>

float jmak(float k, float n, float t)
{
    float x = 1 - exp(-k*pow(t,n));
    
    return x;
}

int main()
{
    float k, n, tk, dt, t=0.0;
	printf("Vpisi parametre k, n, in koncni cas.\n");
    printf("k: "); scanf("%f",&k);
    printf("n: "); scanf("%f",&n);
    printf("tk: "); scanf("%f",&tk);
    dt = tk/50;
    printf(" t           x\n");
    do {
        printf("%5.2f     %5.2e\n",t,jmak(k,n,t));
        t = t +dt;
    } while (t < tk);
        
	return 0;
}
