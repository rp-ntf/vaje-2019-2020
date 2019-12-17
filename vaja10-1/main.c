#include <stdio.h>


int main(int argc, char **argv)
{
    FILE * f;
    // Odpiranje datotek:
    /*
     * fopen( <ime datoteke>, <nacin odpiranja> );
     * nacini odpiranja : 
     * r, w, a, : read , write, append (dodaj = vedno doda na konec datoteke)
     * + : odpre v read in write nacinih
     * b : binaren zapis
     * "rb+" : branje binarne datoteke z moznostjo pisanja
     * "a" : zapisovanje z dodajanjem na konec datoteke
     * 
     * funkcija vrne kazalec na datoteko FILE * 
     * ALI NULL (ce je slo kaj narobe)
     */
    f = fopen("ime.dat", "wb");
    if( f == NULL )
    {
        printf("Napaka pri odpiranju datoteke\n");
        return 1;
    }
    // printf( "abc" ); = fprintf( stdout, "abc" );
    // f = stdout; // (debugiranje)
    fprintf( stdout, "test stdout\n"); // Izpise na zaslon

    /* Pisanje in branje v / iz datotek:
     * Enake funkcije kot za zapis na zaslon
     * fprintf( f, ... )
     * fputs( f, ... )
     * fputc( f, ... )
     * 
     * fscanf( f, ... )
     * fgets( f, ... )
     * fgetc( f, ... )
     */
    fprintf(f, "test\ntest" );
    long lokacija_stavek_3 = 0;
    for( int i=0; i<5; ++i )
    {
        long lokacija = ftell(f);
        printf("Zapisali smo stavek %d na mesto %d\n", 
            i, lokacija );
        fprintf( f, "Stavek %d\n", i );
        if( i == 3 )
            lokacija_stavek_3 = lokacija;
    }
    
    // Nastavimo mesto za pisanje : 
    // SEEK_SET : nastavi na to mesto glede na zac. dat
    // SEEK_CUR : glede na trenutno mesto
    // SEEK_END : glede na konec datoteke
    fseek( f, lokacija_stavek_3, SEEK_SET );
    fprintf( f, "STAVEK %d\n", 9 );
    
    fseek( f, 3, SEEK_CUR );
    fprintf( f, "TEST\n");
    
    int tabela[3] = { 1, 2, 3 };
    /* fwrite( *kazalec na spomin,
        velikost elementa,
        stevilo elementov,
        datoteka ); 
    fread( ... ) podobno kot fwrite
    */
    
    fwrite( tabela, sizeof(int), 3, f );
    
    fflush(f); // Prisilimo zapis na disk
    fclose(f); // Zapremo datoteko
    
    
    // Preberemo zdaj datoteko na zaslon
    char vrstica[10000];
    FILE * fr = fopen("ime.dat", "rb");
    // feof( FILE * ) : vrne TRUE, ko smo na koncu datoteke
    while( !feof(fr) ) 
    {
        fgets( vrstica, 10000, fr );
        printf("DATOTEKA: %s", vrstica );
        // puts( vrstica );
    }
    fclose( fr );
	
	return 0;
}
