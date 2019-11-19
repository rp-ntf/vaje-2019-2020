#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char niz1[] = "abc";
    char niz2[] = "defg";
    char niz3[] = "abcdefghijkl";
    
    char vrstica[1000];
    
    // strlen : dolzina niza
    printf("Stevilo znakov v nizu (brez koncne 0) : \n");
    printf("%s : %d\n", niz1, strlen(niz1));
    printf("%s : %d\n", niz2, strlen(niz2));
    printf("%s : %d\n", niz3, strlen(niz3));
    
    // strcat : zdruzi en niz k drugemu
    vrstica[0] = 0; // da tabela postane niz dolzine 0
    printf("Vrstica (1) [%d]: \"%s\"\n", 
        strlen(vrstica), vrstica );
    strcat(vrstica, niz1);
    printf("Vrstica (2) [%d]: \"%s\"\n", 
        strlen(vrstica), vrstica );
    strcat(vrstica, niz2);
    printf("Vrstica (3) [%d]: \"%s\"\n", 
        strlen(vrstica), vrstica );
    
    // strcpy, strncpy : kopira (n) znakov
    strcpy(vrstica, niz3);
    printf("Copy 3 : \"%s\"\n", vrstica );
    strcpy(vrstica, niz2);
    printf("Copy 2 : \"%s\"\n", vrstica );
    strncpy(vrstica, niz3, 6);
    printf("Copy N : \"%s\"\n", vrstica );

    // strcmp, strncmp : primerja dva niza po abecednem redu
    // strcmp(niz1, niz2) : vrne 0 ce sta niza enaka, 
    // < 0 ce je prvi po abecedi pred drugim
    // > 0 ce je drugi po abecedi pred prvim
    printf("Primerjamo \"%s\" in \"%s\" : %d\n",
        niz1, niz2, strcmp(niz1, niz2) );
    printf("Primerjamo \"%s\" in \"%s\" : %d\n",
        niz1, niz1, strcmp(niz1, niz1) );
    printf("Primerjamo [3] \"%s\" in \"%s\" : %d\n",
        niz1, niz3, strncmp(niz1, niz3,3) );

    // strchr, strstr : iskanje znaka oz podniza
    // vrne kazalec na prvo ujemanje
    char * ujemanje; // "*" pomeni kazalec
    ujemanje = strstr(niz3,niz2);
    printf("V nizu \"%s\" smo nasli niz \"%s\" na indeksu %d.\n",
        niz3, niz2, 
        ujemanje-niz3); // mesto v nizu najdemo z odstevanjem zacetka
    ujemanje = strstr(niz3,niz1);
    printf("V nizu \"%s\" smo nasli niz \"%s\" na indeksu %d.\n",
        niz3, niz1, 
        ujemanje-niz3);
    ujemanje = strchr(niz3,'f');
    printf("V nizu \"%s\" smo nasli znak \"%c\" na indeksu %d.\n",
        niz3, 'f', 
        ujemanje-niz3);
    ujemanje = strchr(niz3,'X');
    if( ujemanje != NULL )
        printf("V nizu \"%s\" smo nasli znak %c\n",
            niz3, 'X' );
    else
        printf("V nizu \"%s\" NISMO nasli znaka %c\n",
            niz3, 'X' );

	return 0;
}
