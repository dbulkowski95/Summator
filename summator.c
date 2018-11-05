#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "summator.h"
#include <ctype.h>

unsigned add(unsigned a, unsigned b)
{
	 if(b == 0)
		 return a;
	 return add( a ^ b, (a & b) << 1);
}

unsigned sub(unsigned x, unsigned y)
{
    while (y != 0) {
        unsigned borrow = (~x) & y;
        x = x ^ y;
        y = borrow << 1;
    }
    return x;
}

int U2add(int a, int b){
	 if(b == 0)
		 return a;
	 return U2add( a ^ b, (a & b) << 1);
}

int U2sub(int a, int b)
{
    while (b != 0) {
        int borrow = (~a) & b;
        a = a ^ b;
        b = borrow << 1;
    }
    return a;
}
