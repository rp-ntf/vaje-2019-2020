#include <stdio.h>

int main(int argc, char **argv)
{
	int n = 0;
    int vsota = 0;
    int x;
    while(1)
    {
        printf("Vnesi celo stevilo: "); scanf("%d",&x);
        if(x<0) continue;
        if(x==0) break;
        vsota += x;
        ++n;
    }
    if (n == 0) printf("Ni bilo pozitivnih stevil.\n\n");
    else printf("Povprecje pozitivnih stevil je %g. \n\n",(float)vsota / n);
	return 0;
}
