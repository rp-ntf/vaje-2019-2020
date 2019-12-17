#include <stdio.h>

/*
 * Vaje :
 * 
 * 1) Napisite funkcijo, ki v datoteko zapise (kot tekst)
 * kvadrate naravnih stevil od 1 do 20 po vrsticah
 * 1 1
 * 2 4
 * 3 9
 * ...
 * 
 * Stolpce locite z znakom "TAB" = \n
 * 
 * 2) Napisite funkcijo, ki v datoteko zapise tabelo 10 celih stevil
 * v binarnem nacinu
 * 3) Napisite funkcijo, ki iz diska prebere tabelo 10 celih stevil
 * in jih izpise na zaslon
 * 
 * 4) Napisite funkcijo, ki na disk zapise tabelo vrednost
 * x sin(x)
 * za x na intervalu od 0 do 7 v presledkih po 0.05
 * 
 * 5) Napisite funkcijo, ki na disk napise tabelo realnih stevil
 * kot tekst
 * 6) Napisite funkcijo, ki iz diska prebere tabelo realnih stevil
 * kot tekst in jih shrani v novo tabelo, ki jo vrne iz funkcije
 *  ( lahko predpostavite da ima tabela manj kot 100 elementov )
 * 
 * 
 */

void kvadrati_20( char ime_dat[] )
{
    FILE * f = fopen(ime_dat, "wt");
    if( f == NULL )
    {
        printf("Napaka pri odpiranju datoteke %s\n", ime_dat );
        return;
    }
    for( int i=1; i<=20; ++i )
        fprintf(f, "%d\t%d\n", i, i*i );
    fclose(f);
}

void zapisi_10_int( char ime_dat[], int tab[] )
{
    FILE * f = fopen(ime_dat,"wb");
    fwrite( tab, sizeof(int), 10, f );
    fclose(f);
}

void preberi_10_int( char ime_dat[], int tab[] )
{
    FILE * f = fopen(ime_dat,"rb");
    fread( tab, sizeof(int), 10, f );
    fclose(f);
}

int main(int argc, char **argv)
{
    kvadrati_20("kvadrati20.txt");
    
    int tab1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int tab2[10] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
    
    zapisi_10_int( "int10.dat", tab1 );
    preberi_10_int( "int10.dat", tab2 );
    for( int i=0; i<10; ++i )
        printf("%d\t%d\n", tab1[i], tab2[i] );
	
	return 0;
}
