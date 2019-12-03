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

void izpisi_tabelo_float( int n, float tabela[] )
{
    printf("\n");
    for( int i=0; i<n; ++i )
    {
        printf("%f\t\n", tabela[i] );
    }
    printf("\n");
}

void dodaj_izvor( int n, float tabela[] )
{
    tabela[n/2] = tabela[n/2] + 1.0;
    // tabela[n/2] += 1.0;
}

void nastavi_robne_pogoje( int n, float tabela[] )
{
    
}

void povprecje( int n, 
    float tabela1[], float tabela2[] )
{
    
}

void razlika_tabel( int n,
    float tabela1[], float tabela2[] )
{
    
}

/*
 * Naloga: (funkcije tudi uporabite v programu)
 * 1. Napisite funkcijo (izpisi_tabelo_float), 
 * ki izpise tabelo realnih stevil,
 * en element v vrstico (argumenta : dolzina tabele,
 * in tabela)
 * 2. Napisite funkcijo (dodaj_izvor), 
 * ki sredinski element (tabela[n/2]) tabele poveca za 1
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
    float tabela_float[9] = { 
        1, 2, 3, 4, 5, 6, 7, 8, 9 };
    izpisi_tabelo_float(9,tabela_float);
    dodaj_izvor(9,tabela_float);
    izpisi_tabelo_float(9,tabela_float);

	return 0;
}
