#include <stdio.h>

int main(int argc, char **argv)
{
    // Zanke : 
    // while, for, do...while
    int i;
    i = 0;
    while( i < 10 )
    {
        printf( "i = %d\n", i );
        i = i + 2;
    }
    /*
    while( pogoj ) // !!! TU NI PODPICJA !!!
    {
      stavek1;
      stavek2;
      ...
      stavekN;
    }
    */
    // Primer : koliko stevil do 100 je deljivih z 7
    int stevec = 0;
    int n = 1;
    while( n < 100 )
    {
        if( (n % 7) == 0 )
        {
            stevec = stevec + 1;
            printf("Stevilo %d je deljivo z 7\n", n );
        }
        n++;
    }
    printf("Med 1 in 100 je %d stevil, deljivih z 7\n", stevec );
    
    // Zanka "for"
    for( int k = 1; k <= 10; ++k )
    {
        printf("k = %d, k**2 = %d\n", k, k*k);
    }
    /*
    for( zacetek ; pogoj ; stavek0 )
    {
        stevek1;
        stavek2;
        ...
        stavekN;
    }
    zacetek -> ce je pogoj, nadaljuj
    -> stavek1 -> stavek2 -> ... -> stavekN
    -> stavek0 -> ce je pogoj nadaljuj pri stavku 1, 
    ce ne zakljuci zanko
    
    for( ; pogoj ; )
    {
      stavek;
    }
    while( pogoj )
    {
      stavek;
    }
    */
    
    printf("Polni kubi med 1 in 500 so : \n");
    for( int n = 1; n*n*n < 500 ; ++n ) // TU NI PODPICJA //
    {
        printf("%d ", n*n*n );
    }
    printf("\n");
    
    // do { ... } while(pogoj); // IMA PODPICJE ZA POGOJEM
    printf("Zanka do ... while : \n");
    n = 1;
    do{
        printf("n = %d\n", n++ ); // 2-10
        // printf("n = %d\n", ++n ); // 1-9
        // n++ : najprej vrne vrednost in potem poveca n
        // ++n : najprej poveca vrednost in potem vrne vrednost
    } while( n < 10 ); // TU JE PODPICJE //
    
    /*
    do{
        stavek1;
        stavek2;
        ...
        stavekN;
    } while( pogoj ); // TU JE PODPICJE //
    stavki 1 .. N se izvrsijo vsaj enkrat
    */
	
	return 0;
}
