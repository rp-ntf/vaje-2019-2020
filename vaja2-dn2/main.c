#include <stdio.h>

/*
2. Sestavi program, ki bo izračunal obseg in površino lika, 
ki nastane dveh pravokotnikov.
Njune stranice so vzporedne koordinatnima osema. Vsak pravokotnik je podan s 
koordinatami dveh nasprotnih si oglišč.
*/

int main(int argc, char **argv)
{
    // Tocke dveh pravokotnikov
    float x1_1, x1_2, y1_1, y1_2; // Prvi pravokotnik
    float x2_1, x2_2, y2_1, y2_2; // Drugi pravokotnik
    
    printf("Vnesite dve tocki prvega pravokotnika : \n");
    scanf("%f %f %f %f", &x1_1, &y1_1, &x1_2, &y1_2 );
    printf("Vnesite dve tocki drugega pravokotnika : \n");
    scanf("%f %f %f %f", &x2_1, &y2_1, &x2_2, &y2_2 );
    
    /*
    x1_1 = 1; y1_1 = 5; x1_2 = 3; y1_2 = 2;
    x2_1 = 2; y2_1 = 3; x2_2 = 6; y2_2 = 10;
    */
    
    printf("Pravokotnika sta :\n");
    printf("1 : (%f, %f), (%f, %f)\n", 
        x1_1, y1_1, x1_2, y1_2 );
    printf("2 : (%f, %f), (%f, %f)\n", 
        x2_1, y2_1, x2_2, y2_2 );
    
    // Izracunamo min in max X koordinat obeh pravokotnikov
    float x1_min, x1_max, x2_min, x2_max;
    float y1_min, y1_max, y2_min, y2_max;
    
    // Pravokotni 1, koordinata x
    if( x1_1 > x1_2 )
    {
        x1_min = x1_2;
        x1_max = x1_1;
    }
    else
    {
        x1_min = x1_1;
        x1_max = x1_2;
    }
    // Pravokotni 1, koordinata y
    if( y1_1 > y1_2 )
    {
        y1_min = y1_2;
        y1_max = y1_1;
    }
    else
    {
        y1_min = y1_1;
        y1_max = y1_2;
    }
    // Pravokotni 2, koordinata x
    if( x2_1 > x2_2 )
    {
        x2_min = x2_2;
        x2_max = x2_1;
    }
    else
    {
        x2_min = x2_1;
        x2_max = x2_2;
    }
    // Pravokotni 2, koordinata y
    if( y2_1 > y2_2 )
    {
        y2_min = y2_2;
        y2_max = y2_1;
    }
    else
    {
        y2_min = y2_1;
        y2_max = y2_2;
    }
    
    float a, b; // Stranici preseka
    
    if( x1_max - x2_min < x2_max - x1_min )
        a = x1_max - x2_min;
    else
        a = x2_max - x1_min;
        
    if( y1_max - y2_min < y2_max - y1_min )
        b = y1_max - y2_min;
    else
        b = y2_max - y1_min;
    
    // V primeru da preseka ni, bosta izracunani stranici negativni,
    // in ju v tem primeru nastavimo na nic
    if( a < 0 )
        a = 0;
    if( b < 0 )
        b = 0;
        
    float S, O;
    S = a*b;
    O = 2*(a+b);
    
    printf("a = %f\n", a);
    printf("b = %f\n", b );
    
    printf("Ploscina preseka je %f\n", S );
    printf("Obseg preseka je %f\n", O );
    
    return 0;
}
