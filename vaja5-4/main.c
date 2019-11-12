#include <stdio.h>
/* Sestavi program, ki bo izpisal vse znake z danega intervala.
 * Interval, zgornjo in spodnjo mejo, vpiše uporabnik.
 **/
 
int main(int argc, char **argv)
{
    int min, maks;
    
	printf("Vpisi zgornjo in spodnjo mejo intervala.\n");
    printf("Spodnja meja: "); scanf("%d", &min);
    printf("Zgornja meja: "); scanf("%d", &maks);
    
    for (int i=min; i<=maks;i++)
    {
        printf("Kodo %d ima znak %c\n",i,(char)i);
    }
    
	return 0;
}
