#include <stdio.h>
/* Sestavi program, ki v 2D tabeli zamenja negativne vrednsoti s pozitivnimi
 * in obratno.
 */

int main(int argc, char **argv)
{
    int x[4][3] = {{-1,2,2},{0,4,-2},{8,1,-2},{-1,-1,-3}};
    int n=4, m=3;
    
    for (int i=0;i<n;i++) {
        for(int j = 0; j < m; j++) {
            x[i][j]*=-1.0;
            printf("x[%d][%d] = %d,  ",i,j,x[i][j]);
        }
        printf("\n");
    }
    
	
	return 0;
}
