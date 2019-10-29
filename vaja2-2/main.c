/* a <  b  manjši
 * a > b   večji
 * a <= b  manjše ali enako
 * a >= b  večje ali enako
 * a == b  enako
 * a != b   različno
 * 
 *  p1 && p2   logični in
 *  p1 || p2      logični ali
 *  !p                 logična negacija  */

#include <stdio.h>

int main()
{
    int x, abs;
	printf("Vpisi celo stevilo:  \n"); scanf("%d",&x);
    
    abs = (x>0) ? x : -x;
    printf("Absolitna vrednost stevila %d je %d.\n\n",x,abs);
	return 0;
}
