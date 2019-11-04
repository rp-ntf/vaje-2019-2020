/*Domača naloga
1. Sestavi program, ki bo prebral tri realna števila in preveril, 
ali obstaja trikontnik s takimi dolžinami stranic. Če obstaja, naj 
program izračuna njegovo ploščino in obseg.

2. Sestavi program, ki bo izračunal obseg in površino dveh pravokotnikov.
Njune stranice so vzporedne koordinatnima osema. Vsak pravokotnik je podan s 
koordinatami dveh nasprotnih si oglišč.*/

#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,s,p,o;
    
    printf("Vpisi tri realna stevila.\n");
    printf("1.stevilo: "); scanf("%f",&a);
    printf("2.stevilo: "); scanf("%f",&b);
    printf("3.stevilo: "); scanf("%f",&c);
    
    if ((a==0)||(b==0)||(c==0)) printf("Stevila morajo biti razlicna od nic!\n");
    else {
        if((a<(b+c))&&(b<(a+c))&&(c<(a+b))) {
            printf("Trikotnik s temi stranicami obstaja.\n");
            o = (a+b+c);
            s=0.5*o;
            p=sqrt(s*(s-a)*(s-b)*(s-c));
            printf("Obseg trikotnika je %g.\n",o);
            printf("Ploscina trikotnika je %g.\n",p);
        }
        else printf("Trikotnik s temi stranicami ne obstaja.\n");
    }
    
    return 0;
}