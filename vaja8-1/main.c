#include <stdio.h>

// ponavljanje funkcije
// (kaj vrne = void) (ime funkcije = izpisi_tabelo)
// sledijo tipi argumentov in imena v ()
void izpisi_tabelo( int n, int tabela[] )
{
    int vsota = 0; // Lokalna spremenljivka
    for( int i=0; i<n; ++i ) {
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
    for( int i=0; i<n; ++i ) {
        printf("%f\t\n", tabela[i] );
    }
    printf("\n");
}

void dodaj_izvor( int n, float tabela[] )
{
    tabela[n/2] = tabela[n/2] + 1.0;
    // tabela[n/2] += 1.0;
    // Dodatna naloga (po 7. nalogi): 
    // na 1/2 tabele dodamo 1.0,
    // na 3/4 tabele dodamo 1.0/3.0
    // na 1/5 tabele dodamo 1.0/7.0
}

void nastavi_robne_pogoje( int n, float tabela[] )
{
    // tabela[0] ... tabela[n-1]
    tabela[0] = 0;
    tabela[n-1] = 0;
}

void povprecje( int n,
                float tabela1[], float tabela2[] )
{
    for( int i=1; i<n-1; ++i ) {
        tabela2[i] = 1.0/3.0 *
                     ( tabela1[i-1] +
                       tabela1[i] +
                       tabela1[i+1] );
    }
}

float razlika_tabel( int n,
                     float tabela1[], float tabela2[] )
{
    float razlika = 0.0;
    for( int i=0; i<n; ++i )
    {
        razlika += 
            (tabela1[i]-tabela2[i])*(tabela1[i]-tabela2[i]);
    }
    return razlika;
}

void kopiraj_tabelo( int n,
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
 * 6. Napisite funkcijo (kopiraj_tabelo),
 * ki skopira vse elemente tabela1 v elemente tabela2
 * (obe tabeli sta dolzine n, tipa float)
 *
 * Naloga 7:
 * Napisite program,
 * ki tabelo1 (15 elementov, v programu sta dve tabeli)
 * najprej inicializira
 * na samo 0, potem pa v zanki ponavlja naslednje:
 * - tabelo 2 nastavi na povprecje 3 clenov iz tabele1
 * - tabeli 2 nastavi robne pogoje
 * - tabeli 2 doda izvor na sredino
 */

int main(int argc, char **argv)
{
    int vsota = 7;
    int tabela[5] = { 1, 2, 3, 4, 5 };
    int n = 5;
    float tabela_float[9] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9
    };

    float tabela2[9];

    izpisi_tabelo_float(9,tabela_float);

    dodaj_izvor(9,tabela_float);

    printf("Tabela po dodanem izvoru\n");
    izpisi_tabelo_float(9,tabela_float);

    nastavi_robne_pogoje(9,tabela_float);

    printf("Tabela po nastavljenih robnih pogojih\n");
    izpisi_tabelo_float(9,tabela_float);

    povprecje(9,tabela_float, tabela2 );
    nastavi_robne_pogoje(9,tabela2);


    printf("Tabela po povprecenju, in robn. pog. \n");
    izpisi_tabelo_float(9,tabela2);
    
    float razlika = razlika_tabel(9,tabela_float,tabela2);
    
    printf("Razlika tabel = %f\n", razlika);

    return 0;
}
