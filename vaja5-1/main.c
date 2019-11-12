/* Sestavi program, ki prebere celo število in
 * pove koliko ima to število števk */
#include <stdio.h>

int main(int argc, char **argv)
{
    int stevilo;
    int stevec=0;
    
	printf("Vpisi celo stevilo: \n"); scanf("%d",&stevilo);
    
    do {
        stevilo/=10;
        stevec++;
    } while (stevilo!=0);
    
    printf("Vpisano stevilo ima %d cifer.\n\n",stevec);
	return 0;
}
