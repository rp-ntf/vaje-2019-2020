#include <stdio.h>
// * 2. program, ki sesteje vse kvadrate med 1 in n
int main(int argc, char **argv)
{
    int n;
    int vsota = 0; // vstoa kvadratov
	// Najprej preberemo n od uporabnika
    printf("Vnesite stevilo n : ");
    scanf("%d",&n);
    // V zanki sestevamo vse kvadrate, dokler kvadrat stevca ne preseze stevila n
    for( int i=1; i*i<=n; ++i )
    {
        vsota += i*i;
    }
    printf("Vsota kvadratov med steviloma (vkljucno) 1 in %d je %d\n", n, vsota );
	return 0;
}
