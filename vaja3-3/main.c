#include <stdio.h>

int main(int argc, char **argv)
{
    int n;
    printf("Vnesite n : \n");
    scanf("%d", &n );
    /*
     * (Naravno stevilo n vedno preberemo od uporabnika)
 * 1. program, ki izpise vse 5-te potence med 1 in n 
 * (n vnese uporabnik)
 *
 */
    for( int i=1; i*i*i*i*i < n ; ++i )
        printf( "%d\n", i*i*i*i*i );
	return 0;
}
