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

/*
 * Naloga: (funkcije tudi uporabite v programu)
 * 1. Napisite funkcijo (izpisi_tabelo_float), 
 * ki izpise tabelo realnih stevil,
 * en element v vrstico (argumenta : dolzina tabele,
 * in tabela)
 * 2. Napisite funkcijo (dodaj_izvor), 
 * ki sredinski element tabele poveca za 1
 * 3. Napisite funkcijo (nastavi_robne_pogoje),
 * ki zacetni in koncni element tabele nastavi na 0
 * 4. Napisite funkcijo (povprecje),
 * ki kot argumente prejme 2 tabeli enake dolzine
 * in v drugi tabeli nastavi element i (i=1 do n-2)
 * na povprecje elementov i-1, i in i+1 iz prve tabele
 * 5. Napisite funkcijo (razlika tabel),
 * ki izracuna povprecen kvdrat razlike clenov dveh tabel
 * A in B tabeli: funkcija vrne vsoto (A[i]-B[i])^2
 */

int main(int argc, char **argv)
{
    int vsota = 7;
    int tabela[5] = { 1, 2, 3, 4, 5 };
    int n = 5;
    izpisi_tabelo(n,tabela);
    izpisi_tabelo(n,tabela);

	return 0;
}
