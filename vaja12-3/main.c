/* Strukture */
#include <stdio.h>
#include <math.h>

struct tocka {
    float x;
    float y;
};

int main(int argc, char **argv)
{
	struct tocka T1,T2;
    printf("Vpisi koordinati dveh tock(relana stevila).\n");
    printf("x(T1) = "); scanf("%f",&T1.x);
    printf("y(T1) = "); scanf("%f",&T1.y);
    printf("x(T2) = "); scanf("%f",&T2.x);
    printf("y(T2) = "); scanf("%f",&T2.y);
    
    float d = sqrt((T1.x-T2.x)*(T1.x-T2.x)+(T1.y-T2.y)*(T1.y-T2.y));
    
    printf("Razdalja med tockama T2 in T2 je %g.\n",d);
 	return 0;
}
