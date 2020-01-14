#include <stdio.h>
#include <iostream>
#include <math.h>

struct tockaC {
    float x;
    float y;
};

class tocka {
public:
    float x;
    float y;
    float Razdalja(tocka a);
};

float tocka::Razdalja(tocka a) {
    float d = (x-a.x)*(x-a.x) + (y-a.y)*(y-a.y);
    return sqrt(d);
}

int main(int argc, char **argv)
{
    
    tocka A,B;
    A.x = 2.0;
    A.y = 1.0;
    B.x =-1.2;
    B.y = 0.3;
    
    printf("d(A,B) = %g.\n",A.Razdalja(B));
    std::cout << "d(B,A) = " << B.Razdalja(A) << "\n";

    
	return 0;
}
