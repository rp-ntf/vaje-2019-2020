#include <stdio.h>

int main(int argc, char **argv)
{
    float a,b;
    int i;
	for(i=0, a=10.0,b=-2.2;i<=10;i++,a*=2,b+=3) printf("%d  %g  %g\n",i,a,b);
	return 0;
}
