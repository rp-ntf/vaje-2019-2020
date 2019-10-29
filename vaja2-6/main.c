#include <stdio.h>

int main()
{
    float k1,n1,k2,n2;  // parametri premic
    float x,y;                    // presecisce premic (ce obstaja)
	printf("Definiraj dve premici z parametroma k in n.\n");
    printf("Premica 1:\n");
    printf("k = "); scanf("%f",&k1);
    printf("n = "); scanf("%f",&n1);
    printf("Premica 2:\n");
    printf("k = "); scanf("%f",&k2);
    printf("n = "); scanf("%f",&n2);
    
    if (k1==k2) {
        if (n1==n2) printf("Premici sta enaki. \n\n");
        else printf("Premici sta vzporedni. \n\n");
    }
    else {
        x = (n2 - n1) / (k1-k2);
        y = k1*x + n1;
        printf("Premici se sekata v tocki (%g,%g).\n\n",x,y);
    }
	return 0;
}
