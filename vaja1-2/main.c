#include <stdio.h>

int main()
{
    float polmer, obseg, ploscina;
    
    printf("Vpisi polmer kroga: ");
    scanf("%f",&polmer);
    
    printf("Obseg kroga z radijem %g je %g\n",polmer,2*3.14*polmer);
    printf("Ploscina kroga z radijem %g je %g\n",polmer, 3.14*polmer*polmer);
    
    return 0;
}
