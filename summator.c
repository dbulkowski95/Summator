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
	if(y == 0) return x;
	return add(x, add(~y,1));
}

int U2add(int a, int b){
	 if(b == 0)
		 return a;
	 return U2add( a ^ b, (a & b) << 1);
}

int U2sub(int x, int y)
{
	if(y == 0) return x;
	return U2add(x, add(~y,1));
}
