#include <stdio.h>

int main()
{
	int x1=1, y1=1;
    int x2=3, y2=5;
    int x,y;
    
    printf("Vpisi koordinate tocke T(x,y).\n");
    printf("x: "); scanf("%d",&x);
    printf("y: "); scanf("%d",&y);
    
    printf("Tocka (%d,%d) lezi ",x,y);
    
    if ((x1<x)&&(x<x2)&&(y1<y)&&(y<y2)) printf("v pravokotniku");
    else if((x<x1)||(x2<x)||(y<y1)||(y>y2)) printf("zunaj pravokotnika");
    else printf("na robu pravokotnika");
    
    printf(" [%d,%d] x [%d,%d].\n\n",x1,y1,x2,y2);
	return 0;
}
