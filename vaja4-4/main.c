#include <stdio.h>

int main(int argc, char **argv)
{
	int x,i;
    
    printf("Vnesi stevilo: "); scanf("%d",&x);
    
    for (i = 2; i<x;i++)
    {
        if (x%i==0)
            break;
    }
    
    if (i<x)
        printf("%d je deljiv z %d.\n",x,i);
    else
        printf("%d je prastevilo.\n",x);
        
        
	return 0;
}
