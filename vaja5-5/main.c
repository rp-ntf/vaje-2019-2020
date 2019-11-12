#include <stdio.h>
/* Sestavi program, ki v tabelo prebere vrednosti celih števil in 
 * jih izpiše v obratnem vrstnem redu
 **/
 
int main(int argc, char **argv)
{
    int tabela[5];
    
	printf("Vpisi elemente tabele.\n");
    
    for(int i = 0; i<5;i++)
    {
        printf("element %d: ",i+1); scanf("%d",&tabela[i]);
    }
    printf("\nPrebrana tabela v obratnem vrstnem redu:\n");
    for(int i=4; i>=0;i--)
    {
        printf("tab[%d] = %d\n",i,tabela[i]);
    }
	return 0;
}
