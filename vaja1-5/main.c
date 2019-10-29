#include <stdio.h>

int main()
{
	int stevilo_I, stevilo_II, produkt;
    
    printf("Vpisi prvo stevilo: ");
    scanf("%d",&stevilo_I);   
    
    printf("Vpisi drugo stevilo: ");
    scanf("%d",&stevilo_II);
    
    printf("%d + %d = %d\n",stevilo_I, stevilo_II, stevilo_I + stevilo_II);
    printf("%d - %d = %d\n",stevilo_I, stevilo_II, stevilo_I - stevilo_II);
    
    produkt = stevilo_I * stevilo_II;
    
    printf("%d * %d = %d\n\n", stevilo_I,stevilo_II,produkt);
    printf("%d / %d = %d\n\n",stevilo_I,stevilo_II,stevilo_I / stevilo_II);
    printf("%d %% %d = %d\n\n",stevilo_I,stevilo_II,stevilo_I % stevilo_II);
        
	return 0;
}
