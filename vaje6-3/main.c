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
    
    // strcat 

	return 0;
}
