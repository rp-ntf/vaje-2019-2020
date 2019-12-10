#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Naloge
 * 
 * 0. Napisite funkcije, ki :
 * - vrne vsoto in razliko dveh int podanih z argumenti
 * - vrne produkt in kvocient dveh float, podanih z argumenti
 * - zamenja dve celi stevili med sabo
 * void zamenjaj_int( int * a, int * b)
 * - zamenja dve realni (float) stevili med sabo
 * void zamenjaj_float( float * a, float * b)
 * 1. Napisite funkcijo, ki izpise tabelo tipa int, podano s kazalcem
 * void izpisi_tabelo_int( int n, int * tab )
 * 2. Napisi funkcijo, ki skopira eno tabelo int na drugo preko memcpy/memmove
 * void kopiraj_tabelo_int( int n, int *tab1, int * tab2 );
 * 3. Napisi funkcijo, ki vrne NOVO kopijo obstojece tabele
 * int * nova_tabela_int( int n, int * tab )
 * ( uporablja malloc in memcpy )
 * 
 * 
 * Domaci nalogi:
 * 
 * 4. Napisi funkcijo, ki vrne NOVO tabelo, 
 * v kateri so samo soda stevila
 * iz prvotne tabele
 * int * soda_podtabela( int n, int * tab, int * n_sodih )
 * {
 * ...
 *      int * tab2 = malloc( ... )
 * ...
 *      return tab2;
 * }
 * 5. Napisi funkcijo, ki kot argument prejme n
 * in vrne NOVO tabelo prvih N elementov fibonacijevega zaporedja
 * int * fib_zap( int n )
 * Fn+1 = Fn + Fn-1
 * 
 * 
 */

void vsota_in_razlika(
    int a, int b,
    int * vsota, int * razlika )
{
    *vsota = a+b;
    *razlika = a-b;
}

void produkt_in_kvocient(
    float a, float b,
    float * prod, float * kvoc )
{
    *prod = a*b;
    *kvoc = a/b;
}

void zamenjaj_int(
    int * a, int * b )
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void zamenjaj_float(
    float * a, float * b )
{
    float tmp = *a;
    *a = *b;
    *b = tmp;
}

void izpisi_tabelo_int( int n, int * tab )
{
    for( int i=0; i<n; ++i )
        printf("%d | %d\n", i, tab[i] );
}

void kopiraj_tabelo_int( int n, int *tab1, int * tab2 )
{
    memcpy( tab2, tab1, n*sizeof(int) );
}

int * nova_tabela_int( int n, int * tab )
{
    int * tab2;
    tab2 = malloc( sizeof(int) * n );
    memcpy( tab2, tab, sizeof(int) * n );
    return tab2;
}

int * soda_podtabela( int n, int * tab, int * n_sodih )
{
    int * soda_tab;
    // 1. prestejemo soda stevila
    // 2. Alociramo novo tabelo primerne velikosti
    // 3. Skopiramo vsa soda stevila v novo tabelo
    // 4. Vrnemo sodo podtabelo
}


int main(int argc, char **argv)
{
    int x, y;
    int * z;
    z = &y;
    // &x je lokacija spomina kjer je spremenljivka "x"
    vsota_in_razlika( 6, 2, &x, z );
    printf("Vsota in razlika stevil 6 in 2 sta %d in %d\n",
        x, y );
    
    int a = 7, b = 9;
    printf("Zamenjam stevili %d, %d -> ", a, b );
    zamenjaj_int(&a,&b);
    printf("%d, %d", a, b );
    
    int * tab2;
    int tab[5] = { 1, 4, 9, 16, 25 };
    tab2 = nova_tabela_int(5,tab);
    izpisi_tabelo_int(5,tab2);
    
	return 0;
}
