#include <stdio.h>

int main()
{
    float x;
	printf("Vpisi stevilo: \n");
    scanf("%f",&x);
    
    if (x < 0) x=-x;
    
    printf("Absolutna vrednost je %g\n\n",x);
	return 0;
}
