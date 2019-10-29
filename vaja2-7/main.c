/* Sestavi program, ki bo prebral sredisci in polmera 
 * dveh krogov ter preveril, ali sta kroga locena, se 
 * dotikata, ali pa imata skupno vec kot eno tocko */
 
#include <stdio.h>
#include <math.h>

int main()
{
    float x1,y1,r1;
    float x2,y2,r2;
    float d;
	printf("Vpisi sredisci in polmera dveh krogov.\n");
    printf("Krog 1:\n");
    printf("x = "); scanf("%f",&x1);
    printf("y = "); scanf("%f",&y1);
    printf("R = "); scanf("%f",&r1);
    printf("Krog 2:\n");
    printf("x = "); scanf("%f",&x2);
    printf("y = "); scanf("%f",&y2);
    printf("R = "); scanf("%f",&r2);
    
    d = sqrt((x1-x2)*(x1-x2)+(y2-y1)*(y2-y1));
    if (d<(r1+r2)) printf("Kroga se sekata.\n\n");
    else if (d>(r1+r2)) printf("Kroga niamta skupnih tock.\n\n");
    else printf("Kroga se dotikata v eni tocki.\n\n");
    
	return 0;
}
