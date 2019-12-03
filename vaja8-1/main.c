#include <stdio.h>

// ponavljanje funkcije
// (kaj vrne = void) (ime funkcije = izpisi_tabelo) 
// sledijo tipi argumentov in imena v ()
void izpisi_tabelo( int n, int tabela[] )
{
    int vsota = 0; // Lokalna spremenljivka
    for( int i=0; i<n; ++i )
    {
        vsota += tabela[i];
        printf("%d\t\n", tabela[i] );
    }
    printf("\n\n\tvsota = %d\n", vsota );
    printf("\n\n\tn = %d\n", n );
    
    // Testiramo kako sprejemo spremenljivke
    // n = 2*n;
    // tabela[2] = 2*tabela[2];
}

int main(int argc, char **argv)
{
    int vsota = 7;
    int tabela[5] = { 1, 2, 3, 4, 5 };
    int n = 5;
    izpisi_tabelo(n,tabela);
    izpisi_tabelo(n,tabela);

	return 0;
}
