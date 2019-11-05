#include <stdio.h>

int main(int argc, char **argv)
{
	int  n=0;
    int vsota=0;
    int x;
    
    while(n<10)
    {
        printf("x = "); scanf("%d",&x);
        if (x==0) continue;
        vsota = vsota + x;
        n++;
    }
    
    printf("Vsota 10 od nic razlicnih stevil je %d.\n\n",vsota);
	return 0;
}
