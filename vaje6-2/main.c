#include <stdio.h>

int main(int argc, char **argv)
{
    // Nizi
    char niz[] = "to je niz znakov";
    printf("Izpisujem niz : #%s#\n",niz); // %s formatno dolocilo
    char niz2[] = "abc";
    printf("Dolzina tabele niz2 je : %d\n", 
        sizeof(niz2)/sizeof(niz2[0]));
    printf("Izpisujemo niz2 : \n");
    for( int i=0; i<4; ++i )
    {
        if( i<3 )
            printf("%d | %d | %c\n", i, niz2[i], niz2[i] );
        else
            printf("%d | %d | %c\n", i, niz2[i], 'X' );
    }
    char niz3[] = { 'd', 'e', 'f' }; // Na koncu ni 0
    printf("Izpisujemo niz3 : \n");
    for( int i=0; i<4; ++i )
    {
        printf("%d | %d | %c\n", i, niz3[i], niz3[i] );
    }
    
    /* Nizi so tabele znakov, ki se koncajo z vrednostjo 0 = '\0'.
     */
    
    char vrstica[1000];
    printf("Vpisite vrstico : \n");
    scanf("%s", vrstica ); // NI & pred vrstica !
    printf("Vpisali ste (scanf) : #%s#\n", vrstica );
    // scanf prebere niz samo do prvega "belega" znaka (whitespace)
    
    printf("Vpisite vrstico : \n");
    gets(vrstica);
    printf("Vpisali ste (gets) : #%s#\n", vrstica );
    printf("Izpisujemo z puts: \n");
    puts(vrstica);
    // gets prebere niz do \n, iz "INPUT"-a racunalnika
	
    
	return 0;
}
