// Funkcije
#include <stdio.h>

float izpis(float r)
{
    float obseg;
    obseg = 2*3.14*r;     // return 2*3.14*r;
    
    return obseg;
}


int main()
{
    float x = 3.5;
    float obs;
    obs = izpis(x);
    
    printf("obseg kroga z radijem %g je %g.\n",x,obs);
    
	return 0;
}



