/*
2) Sestavi program, kjer uporabnik vpiše tabelo znakov, kjer se omejimo na 
velike in male črke. Program pretvori velike črke v male in obratno, ter izpiše 
tako spremenjeno tabelo.
*/


#include <stdio.h>

int main(int argc, char **argv)
{
    char tab[1000];
    char buf[1000];
    int n;
    char c;
    
    printf("Vnesite dolzino tabele < 1000 : ");
    scanf("%d", &n);
    if( n >= 1000 )
        return 1;
    printf("Vnesite toliko znakov (en in po en znak)\n");
    while ((c = getchar()) != '\n' && c != EOF) { }
    for( int i=0; i<n; ++i )
    {
        printf("Vnesite znak %d : ", i);
        tab[i] = getchar();
        // Z NASLEDNJO VRSTICO ODSTRANIMO '\n' iz input bufferja
        gets(buf);
    }
    // Popravimo velike crke v male in obratno
    for( int i=0; i<n; ++i )
    {
        c = tab[i];
        
        if( c >= 'a' && c <= 'z' )
            c = ((int)c) + 'A' - 'a';
        else if( c >= 'A' && c <= 'Z' )
            c = ((int)c) + 'a' - 'A';
        
        tab[i] = c;
    }
    printf( "Popravljena tabela (velike crke v male in obratno) je : \n");
    for(int i=0; i<n; ++i )
        printf("Znak %d je %c\n", i, tab[i]);
        
	return 0;
}
