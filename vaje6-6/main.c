#include <stdio.h>
// 5) od uporabnika preberemo tabelo 5 celih stevil in jo uredimo po velikosti in izpisemo

int main(int argc, char **argv)
{
    int tabela[5];
    // 1. preberemo tabelo
    for( int i=0; i<5; ++i )
    {
        printf("Vpisite stevilo %i : ",i);
        scanf("%d", &tabela[i]);
    }
    // 2. uredimo tabelo
    for( int j=0; j<5; ++j )
    {
        for( int i=0; i<4; ++i )
        {
            if( tabela[i+1] < tabela[i] )
            {
                // Zamenjamo stevili
                int zacasen = tabela[i];
                tabela[i] = tabela[i+1];
                tabela[i+1] = zacasen;
            }
        }
    }
    // 3. izpisemo tabelo
    printf("Koncna tabela : \n");
    for( int i=0; i<5; ++i )
        printf("%d | %d\n", i, tabela[i]);
	
	return 0;
}
