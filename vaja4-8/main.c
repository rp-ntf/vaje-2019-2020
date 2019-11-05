#include <stdio.h>

int main(int argc, char **argv)
{
	int m,n;
    
    printf("Vpisi m: "); scanf("%d",&m);
    printf("Vpisi n: "); scanf("%d",&n);
    
    for (int i = 0; i<m;i++) {
        for(int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
	return 0;
}
