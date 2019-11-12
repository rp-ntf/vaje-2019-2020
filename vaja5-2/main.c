#include <stdio.h>

int main(int argc, char **argv)
{
    char znak = 'b';
    int koda = (int)znak;
    
	printf("Znak %c ima kodo %d.\n",znak,koda);
    
    printf("Vpisi znak: "); 
    fflush(stdin);
    scanf("%c",&znak);
    koda = (int)znak;
    printf("Vpisani znak %c ima kodo %d.\n",znak,koda);
    
	return 0;
}
