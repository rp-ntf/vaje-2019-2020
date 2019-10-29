#include <stdio.h>

int main(int argc, char **argv)
{
    int n;
    printf("Vnesite n : \n");
    scanf("%d", &n );
    /*
 * 3. program, ki izracuna produkt ne-nicelnih stevk stevila n
 */
    int stevka;
    int produkt = 1;
    int preostalo = n;
    while( preostalo > 0 )
    {
        stevka = preostalo % 10;
        if( stevka != 0 )
            produkt = produkt * stevka;
        
        preostalo = preostalo / 10;
    }

    printf( "Produkt vseh stevk stevila %d je %d.\n", n, produkt );
	return 0;
}
