#include <stdio.h>
#include <string.h>
// Izpis niza v obratnem vrstnem redu
int main(int argc, char **argv)
{
    char vrstica1[1000];
    char vrstica2[1000];
    int n;
    
    printf("Vnesite niz : \n");
    gets(vrstica1);
    printf("%s\n", vrstica1);
    // V zanki obrnemo niz vrstica1 v vrstica2
    n = strlen(vrstica1);
    for( int i=0; i<n; ++i)
        vrstica2[n-i-1] = vrstica1[i];
    vrstica2[n] = 0;
    printf("%s\n", vrstica2);
	
	return 0;
}
