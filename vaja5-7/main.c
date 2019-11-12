#include <stdio.h>
#include <math.h>
/* Sestavi program, kjer uporabnik vpiše elemente dveh vektorjev
 * in izpiše njun skalarni produkt ter vsoto
 **/
 
int main(int argc, char **argv)
{
    float vektorA[3];
    float vektorB[3];
	printf("Vpisi koordinate vektorjev\n");
    for(int i=0; i<3;i++) {
        printf("%d kordinata vektorja A: ",i+1); scanf("%f",&vektorA[i]);
        printf("%d kordinata vektorja B: ",i+1); scanf("%f",&vektorB[i]);
    }
    printf("Vsota vektorjev A in B: (%g,%g,%g).\n",vektorA[0]+vektorB[0],
    vektorA[1]+vektorB[1],vektorA[2]+vektorB[2]);
    printf("Skalardni produkt A*B: %g\n",sqrt(vektorA[0]*vektorB[0]+vektorA[1]*vektorB[1]+
    vektorA[2]*vektorB[2]));
	return 0;
}
