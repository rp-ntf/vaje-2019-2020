#include <stdio.h>

/* Naloge
 * 
 * 0. Napisite funkcije, ki :
 * - vrne vsoto in razliko dveh int podanih z argumenti
 * - vrne produkt in kvocient dveh float, podanih z argumenti
 * - zamenja dve celi stevili med sabo
 * - zamenja dve realni (float) stevili med sabo
 * 
 * 1. Napisite funkcijo, ki izpise tabelo tipa int, podano s kazalcem
 * void izpisi_tabelo_int( int n, int * tab )
 * 2. Napisi funkcijo, ki skopira eno tabelo int na drugo preko memcpy/memmove
 * void kopiraj_tabelo_int( int n, int *tab1, int * tab2 );
 * 3. Napisi funkcijo, ki vrne NOVO kopijo obstojece tabele
 * int * nova_tabela_int( int n, int * tab )
 * ( uporablja malloc in memcpy )
 * 4. Napisi funkcijo, ki vrne NOVO tabelo, 
 * v kateri so samo soda stevila
 * iz prvotne tabele
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

int main(int argc, char **argv)
{
    int x, y;
    int * z;
    z = &y;
    // &x je lokacija spomina kjer je spremenljivka "x"
    vsota_in_razlika( 6, 2, &x, z );
    printf("Vsota in razlika stevil 6 in 2 sta %d in %d\n",
        x, y );
    
	return 0;
}
