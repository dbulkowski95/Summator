#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "summator.h"

unsigned add(unsigned a, unsigned b){
	 if(b == 0)
		 return a;
	 return add( a ^ b, (a & b) << 1);
}
