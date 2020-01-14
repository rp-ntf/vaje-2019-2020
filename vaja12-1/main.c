/* Sestavi funkcijo, ki bo iz dane tabele celih števil sestavila in vrnila
 * novo tabelo, v kateri bodo najprej zapisna soda števila in nato liha.
 **/
#include <stdio.h>

int *SodaLihaTabela(int *origtab, int velikostTabele){
    int *nt = (int *)malloc(velikostTabele*sizeof(int));
    int j=0;
    
    for (int i=0;i<velikostTabele;i++) {
        if((origtab[i]%2)==0) {
            nt[j]=origtab[i];
            j++;
        }
    }
    
    for (int i=0;i<velikostTabele;i++) {
        if((origtab[i]%2)!=0) {
            nt[j]=origtab[i];
            j++;
        }
    }
    
    return nt;
}

int main(int argc, char **argv)
{
	int a[7]={2,-1,4,23,-7,6,91};
    int *novaTabela = SodaLihaTabela(a,7);
    
    for(int i = 0;i<7;i++)
        printf("tab[%d] = %d\n",i,novaTabela[i]);
        
    free(novaTabela);
	return 0;
}
