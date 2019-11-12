#include <stdio.h>
/*Sestavi program, kjer uporabnik vpisuje znake dokler ne vpise znaka 0.
 * Na zaslon naj izpisuje kode vpisanih znakov.
 */

int main(int argc, char **argv)
{
    char znak;
    
	printf("Vpisuj znake, za konec vpisi '0'.\n");
    
    for(;;) {
        printf("znak: "); fflush(stdin);
        scanf("%c",&znak);
        if (znak=='0') break;
        printf("Koda je %d.\n",(int)znak);
    } 
	return 0;
}
