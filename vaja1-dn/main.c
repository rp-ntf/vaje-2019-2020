/*Domači nalogi:
1. Sestavi program, ki prebere trimestno naravno število in ga izpiše v obratnem vrstnem redu.
 
        Vnesi trimestno naravno stevilo: 726
         Obrat stevila 726 je 627.
         

2. Sestavi program, ki prebere kot v radianih (realno število) in ga izpiše v stopinjah in 
minutah (celi števili).

         Vnesi kot v radianih: 2.185
         2.185 radianov = 125 stopinj, 11 minut.*/
      
#include <stdio.h>

int main()
{
    int stevilo, tstevilo;
    int stotice, desetice, enice;
    printf("Vpisi tromestno naravno stevilo: ");  scanf("%d",&stevilo);
    stotice = stevilo / 100;
    tstevilo = stevilo % 100;
    desetice = tstevilo / 10;
    enice = tstevilo % 10;
    
    printf("Obrat stevila %d je %d%d%d\n\n",stevilo,enice,desetice,stotice);
    
    return 0;
}