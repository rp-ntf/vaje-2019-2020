/* setavi program, ki pretvori yarde v m, dm, cm
 * pretvornik med yardi in metri je 0.9144
 * */
#include <stdio.h>

int main()
{
	float yard = 0.9144;
    float dolzinaY;
    float dolzinaM;
    int metri, dm, cm;
    
    printf("Vpsi dolzino v yardih: ");  // enovrstični komentarji
    scanf("%f",&dolzinaY);
  
    dolzinaM = dolzinaY * yard;
    metri = (int)dolzinaM;
    
    dolzinaM = (dolzinaM - metri)*10;
    dm = (int)dolzinaM;
    dolzinaM = (dolzinaM-dm)*10;
    cm = (int)dolzinaM;
    
    printf("%g yardov je %d m %d dm %d cm\n\n",dolzinaY,metri, dm, cm);
    
    
	return 0;
}
