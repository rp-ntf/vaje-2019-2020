#include <stdio.h>
#include <math.h>
/* Sestavi program, ki prebere tabelo števil in vrne indeks elementa katerega 
 * absolutna vrednsot je najmanjša
 * */
 
int main(int argc, char **argv)
{
    int x[]={-2,3,33,-44,7,8,-1,-22};
    int min = abs(x[0]);
    int indeks = 0;
    
    for (int i=1;i<8;i++)
    {
        if (min>abs(x[i])) {
            min = abs(x[i]);
            indeks = i;
        }
    }
    printf("Indeks elementa z najmanjso absolutno vrednotjo je %d.\n\n",indeks);
	return 0;
}
