/* 1. funkcijo, ki izpise tabelo celih stevil (vrstico po vrstico)
 * primer : void izpisi_tabelo( int dolzina, int tabela[] )
 * 2. funkcijo, ki izracuna povprecje stevil v tabeli, za stevila tipa int in float:
 * float povprecje_int( int n, int tabela[] )
 * float povprecje_float( int n, float tabela[] )
 * 3. funkcijo, ki z rekurzijo izracuna n! = n * (n-1) * (n-2) * ... * 3 * 2 * 1
 * int fakulteta(int n)
 * 4. funkcijo, ki z rekurzijo izracuna fib. zaporedje 
 * int fib( int n )
 * fib(n) = fib(n-1) + fib(n-2)
 * fib(0) = 1
 * fib(1) = 1
 * 
 * 
 * */
#include <stdio.h>

 int fakulteta( int n)
 {
     if( n <= 1 )
         return 1;
    else
        return n * fakulteta(n-1);
 }

void izpisi_tabelo( int dolzina, int tabela[] )
{
    for (int i = 0; i < dolzina; ++i)
        printf("x[%d] = %d\n",i,tabela[i]);
}

int absolutno(int x)
{
    if ( x < 0) x = -x;
    
    return x;
}

void vrniTabeloAbs(int n, int tab[])
{
    for (int i = 0; i < n; ++i)
        tab[i] = absolutno(tab[i]);
}

int main()
{
    int a[5]={3,-2,99,34,-23};
    printf("Originalna tabela:\n");
    izpisi_tabelo(5,a);
    printf("Abs tabela:\n");
    vrniTabeloAbs(5,a);
    izpisi_tabelo(5,a);

	return 0;
}
