/* 1. Naloga:
* Sestavi program, ki za dani znesek, ki ga vpiše 
* uporabnik, izpiše kako ga lahko izplačamo s čim 
* manj bankovci in kovanci, brez centov.
*/

#include <stdio.h>

int main()
{
	printf("Vnesite znesek : ");
	int znesek, i;
	scanf("%d", &znesek);
	int tabela[10] = { 500, 100, 50, 20, 10, 5, 2, 1 };
	printf("Izplacujemo : %d\n", znesek);
	while (znesek > 0)
	{
		for (i = 0; i<9; ++i)
		{
			if (znesek >= tabela[i])
				break;
		}
		znesek = znesek - tabela[i];
		printf("%d, ostane se %d\n", tabela[i], znesek);
	}
	printf("\n");
	return 0;
}
