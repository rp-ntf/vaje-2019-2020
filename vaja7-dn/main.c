/* Domače naloge:
 *  1. Sestavi funkcijo, ki prebere koeficiente kvadratne enačbe
 *       a*x² + b*x + c = 0
 *       in izračuna ter izpiše oba korena. Če ni realnih rešitev, izpiši kompleksne.
 *       Funkcijo uporabi v programu.
 *   2. Sestavi funkcijo, ki vrne vsoto kvadratov prvih n naravnih števil, če 
 *        funkcija prejme kot argument število n. Funkcijo uporabi v programu.
 *   3. Sestavi funkcijo, ki izračuna koliko denarja bo imel zvesti varčevalec na banki po 
 *        n letih, če na začetku vsakega leta vplača na račun y EUR. Obresti se obračunavajo
 *        letno. Podatke o obrestni meri in obroku naj vpiše uporabnik. */


#include <stdio.h>
#include <math.h>

int kvadratna_enacba( 
	float a, float b, float c,
	float koreni[2] )
{
	// Vrenmo korene v koreni[]
	// vremo stevilo realnih nicel
	float D = b*b - 4*a*c;
	if( D < 0 )// Ni resitev
	{
		printf("Ni resitev kvadratne enacbe\n");
		return 0;
	}
	else
	{
		koreni[0] = (-b-sqrt(D))/(2*a);
		koreni[1] = (-b+sqrt(D))/(2*a);
		printf("Resitvi kvadratne neacbe sta %f in %f\n", koreni[0], koreni[1] );
		return 2;
	}
}

int vsota_kvadratov( int n )
{
	int vsota = 0;
	for( int i=0; i<=n; ++i )
		vsota += i*i;
	return vsota;
}

float varcevanje(
	int st_let,
	float obrok,
	float obresti // v procentih
	)
{
	float znesek = 0.0; // Na zacetku nimamo nic
	for( int i=0; i<st_let; ++i)
	{
		znesek += obrok; // Na zacetku leta vplacamo obrok
		znesek *= ( 1.0 + obresti / 100.0); // Obrestujemo do zdaj privarcevan znesek
	}
	return znesek;
}

int main(int argc, char **argv)
{
	float koreni[2];
	kvadratna_enacba( 1, -5, 6, koreni );
	
	printf("Vsota kvadratov prvih 10 stevil je %d\n", vsota_kvadratov(10) );
	
	float obrok, obresti;
	int st_let;
	printf("Vnesite stevilo let varcevanja : ");
	scanf("%d",&st_let);
	printf("Vnesite obrok varcevanja : ");
	scanf("%f", &obrok);
	printf("Vnesite obresti varcevanja : ");
	scanf("%f", &obresti);
	printf("Po koncu varcevanja bo na racunu %f\n", 
		varcevanje( st_let, obrok, obresti ) );
	return 0;
}
