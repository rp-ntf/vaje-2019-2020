#include <stdio.h>
// * 4. program, ki preveri ali je dano naravno stevilo prastevilo
int main(int argc, char **argv)
{
    int n;
    int je_lahko_prastevilo = 1; // 1 ce je n se lahko prastevilo
    printf("Vpisite kandidata za prastevilo : ");
    scanf("%d", &n );
    for( int i=2; i<n && je_lahko_prastevilo; ++i )
    {
        if( n%i == 0 )
            je_lahko_prastevilo = 0;
    }
    if( je_lahko_prastevilo )
        printf("Stevilo %d je prastevilo.\n", n );
    else
        printf("Stevilo %d ni prastevilo.\n", n );
	
	return 0;
}
