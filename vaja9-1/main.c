#include <stdio.h>
#include <stdlib.h>

// Funkcija ki "vrne" 
// vsoto clenov tabele
// vsoto kvadratov clenov tabele 
void vsota2_in_povprecje( int tab[], int n,
    int * vsota, int * vsota2 )
{
    (*vsota) = 0;
    (*vsota2) = 0;

    for( int i=0; i<n; ++i )
    {
        *vsota += tab[i];
        *vsota2 += tab[i]*tab[i];
    }
}

void izpisi_tabelo_int( int tab[], int n )
{
    for( int i=0; i<n; ++i )
    {
        printf("%d | %d\n", i, tab[i]);
    }
}

int main(int argc, char **argv)
{
    // Kazalci
    int a = 10; // Spremenljivka a tipa int
    int tab[5] = { 1, 2, 3, 4, 5 };
    // (int *) je kazalec na tip int
    int * b; // kazalec na tip int
    int c;
    // *b ... vrednost na lokaciji kamor kaze kazalec "b"
    // &a ... naslov spremenljivke "a"
    b = &a; // Kazalec nastavimo na spremenljivko "a"
    c = a;
    printf("a = %d, b = %u, *b = %d, c = %d\n", 
        a, b, *b, c );
    a = 5;
    printf("a = %d, b = %u, *b = %d, c = %d\n", 
        a, b, *b, c );
    *b = 7;
    printf("a = %d, b = %u, *b = %d, c = %d\n", 
        a, b, *b, c );
    c = 2;
    printf("a = %d, b = %u, *b = %d, c = %d\n", 
        a, b, *b, c );
    
    int vsota, vsota2;
    vsota2_in_povprecje(tab,5,&vsota,&vsota2);
    printf("Vsota tabele = %d\n", vsota);
    printf("Vsota kvadratov clenov tabele = %d\n", vsota2);
    
    float * f;
    float vf;

    f = &a;
    vf = a;
    
    printf("a = %d, b = %u, *b = %d, \n\tf = %u, *f = %.15f, vf = %f\n", 
        a, b, *b, f, *f, vf );
        
    /*b = NULL; // NULL = 0
    printf("*b = %d\n", *b); // Segfault */
    
    int * kazTab = tab; // NE na &tab !!
    
    printf("Izpisem tab\n");
    izpisi_tabelo_int(tab,5);
    
    printf("Izpisem kazTab\n");
    izpisi_tabelo_int(kazTab,5);
    
    kazTab[2] = 100;
    
    printf("Izpisem tab\n");
    izpisi_tabelo_int(tab,5);
    
    printf("Izpisem kazTab\n");
    izpisi_tabelo_int(kazTab,5);
    
    kazTab = &tab[2]; // "pod-tabela", tu je & !!
    printf("Izpisem kazTab\n");
    izpisi_tabelo_int(kazTab,5);
    
    printf("Kazalci in tabele : \n");
    for( int i=0; i<5; ++i )
        printf("%d | %u %d | %u %d\n",
            i, 
            &tab[i], tab[i], 
            &kazTab[i], kazTab[i] );
    
    // Dinamicna alokacija spomina
    printf("Dinamicno alocirana tabela:\n");
    int * tab3;
    // (void *) malloc( st. bytov )
    // sizeof( tip ) = velikost tipa v bytih
    tab3 = malloc(sizeof(int)*5);
    // memcpy( (void *) cilj, (void *) izvor, st. bytov )
    // enako za memmove (vse te funkcije v stdlib.h
    memcpy( tab3, tab, sizeof(int) * 3 );
    printf("Kopiramo samo 3\n");
    izpisi_tabelo_int(tab3,5);
    
    printf("Kopiramo vseh 5\n");
    memcpy( tab3, tab, sizeof(int) * 5 );
    izpisi_tabelo_int(tab3,5);
    
    for( int i=0; i<5; ++i )
        printf("%d | %u %d | %u %d\n",
            i, 
            &tab[i], tab[i], 
            &tab3[i], tab3[i] );
            
    free(tab3);
    /*
    printf("Po sprosceni tab3 : \n");
    izpisi_tabelo_int(tab3,5); // PO SPRSTITVI TABELE TEGA NE POCNEMO VEC !
    */
    
	return 0;
}
