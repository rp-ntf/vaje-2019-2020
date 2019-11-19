#include <stdio.h>
#include <math.h>

/*
 * Naloga (ponavljanje tabel):
 * Napisi program, ki izpise 2D tabelo velikosti n x n 
 * (n pove uporabnik)
 * Tabela naj ima na sredini krog iz *
 * in okrog kroga kvadrat iz #
 * Krog je najvecji mozen krog, ki se gre v tabelo.
 * Kvadrat je velik 3/4 tabele.
 * Sicer so v tabeli presledki
 * 
 * A) V tabeli je samo krog
 * B) v tabeli je tudi kvadrat
 * 
 *   *  
 *  ###
 * *###*
 *  ###
 *   * 
 */

int main()
{
	int n;
    char tabela[1000][1000];
    
    printf("Povej n (<1000) : \n");
    scanf("%d", &n );
    printf("n = %d\n",n);
    if( n >= 1000 )
    {
        printf("Prevelik n");
        return 1;
    }
    
    // 1. napolnimo tabelo s presledki
    for( int i=0; i<n; ++i )
        for( int j=0; j<n; ++j )
            tabela[i][j] = ' ';
    // 2. Na sredini tabele naredimo krog (A)
    for( int i=0; i<n; ++i )
        for( int j=0; j<n; ++j )
        {
            // (n/2-i)**2 + (n/2-j)**2 < (n/2)**2
            float di = n/2.0 - i;
            float dj = n/2.0 - j;
            float n2 = n/2.0;
            if( di*di + dj*dj < n2*n2 )
                tabela[i][j] = '*';
        }
    // 3. Na sredini tabele naredimo kvadrat (B)
    float a = 3.0/4.0 * n;
    float a2 = a/2.0;
    for( int i=0; i<n; ++i )
        for( int j=0; j<n; ++j )
        {
            // |(n/2-i)|<a2 in |(n/2-j)|<a2
            float di = n/2.0 - i;
            float dj = n/2.0 - j;
            float n2 = n/2.0;
            if( ( fabs(di)<a2 ) && 
                ( fabs(dj)<a2 ) )
                tabela[i][j] = '#';
        }
    // 4. Tabelo izpisemo
    for( int i=0; i<n; ++i )
    {
        for( int j=0; j<n; ++j )
            printf("%c", tabela[i][j] );
        printf("\n");
    }
    
	return 0;
}
