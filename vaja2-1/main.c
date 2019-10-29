// Avtor: G. Kugler
// 22.10.2019
// Uporaba operatorja %
#include <stdio.h>

int main()
{
    int x,y;
    
	printf("Vpisi dve celi stevili:\n");
    printf("1. stevilo: ");
    scanf("%d",&x);
    printf("2.stevilo: ");
    scanf("%d",&y);
    
    printf("%d / %d = %d + %d / %d\n\n",x,y,x/y,x%y,y);
    
	return 0;
}
