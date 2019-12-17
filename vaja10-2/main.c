#include <stdio.h>
#include <math.h>

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
 * 7) Napisite funkcijo, ki presteje vrstice v datoteki
 * in stevilo izpise na zaslon
 * 
 * 8) Napisite funkcijo, ki shrani tabelo realnih stevil v datoteko
 * tako, da najprej zapise dolzino tabele kot celo stevilo
 * potem pa se vse elemente tabele
 * 9) Napisite funkcijio, ki prebere tabelo iz (8) iz diska
 * in vrne novo tabelo 
 * 
 * 10) Napisite funkcijo, ki spoji dve datoteki
 * tako, da 2. datoteka sledi 1. datoteki
 * 
 * 11) Napisite funkcijo, ki spoji dve datoteki tako,
 * da v vsaki vrstici najprej pride tekst iz 1. datoteke in potem tekst iz 2. datoteke
 * vmes pa je \t. Ce je ena datoteka daljsa kot druga,
 * njen preostanek obravnavamo kot prazne vrstice (vrstice,
 * ki so enake "")
 * 
 * dat1: 
 * abc
 * def
 * 
 * dat2:
 * ghi
 * jkl
 * 
 * skupaj (naloga 10):
 * abc
 * def
 * ghi
 * jkl
 * 
 * skupaj (naloga 11):
 * abc ghi
 * def jkl
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

void zapisi_sinx( char ime_dat[] )
{
    FILE * f = fopen(ime_dat, "wb");
    for( float x = 0.0; x < 7.001; x += 0.05 )
        fprintf(f,"%f\t%f\n", x, sin(x) );
    fclose(f);
}

void zapisi_float_txt( char ime_dat[], 
    float tab[], int n )
{
    FILE * f = fopen(ime_dat, "wb");
    for( int i=0; i<n; ++i )
        fprintf(f, "%f\n", tab[i] );
    fclose(f);
}

float * preberi_float_txt( 
    char ime_dat[],
    int * n )
{
    float * tab = malloc( sizeof(float) * 100 );
    FILE * f = fopen( ime_dat, "rb" );
    *n = 0;
    while( !feof( f ) )
    {
        fscanf( f, "%f",&tab[*n] );
        *n += 1;
    }
    *n -= 1;
    
    fclose(f);
    return tab;
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
	
    zapisi_sinx("sinx.dat");
    
    float tab_float[] = { 1, 2, 3.14142 };
    zapisi_float_txt( "floattxt.dat", tab_float, 3 );
    
    float * tab_f_prebran;
    int n;
    tab_f_prebran = preberi_float_txt("floattxt.dat", &n );
    
    printf("Prebrali smo tabelo float dolzine %d\n", n );
    for( int i=0; i<n; ++i )
        printf("%d | %f\n", i, tab_f_prebran[i] );
    
    free( tab_f_prebran );
    tab_f_prebran = NULL;
    
	return 0;
}
