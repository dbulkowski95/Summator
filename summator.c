#include "summator.h"
#include <stdlib.h>

unsigned add(const unsigned a, const unsigned b)
{
	if (b == 0) return a;
	return add(a ^ b, (a & b) << 1);
}

unsigned sub(const unsigned x, const unsigned y)
{
	if (y == 0) return x;
	return add(x, add(~y,1));
}

int U2add(const int a, const int b)
{
	 if (b == 0) return a;
	 return U2add(a ^ b, (a & b) << 1);
}

int U2sub(const int x, const int y)
{
	if (y == 0) return x;
	return U2add(x, add(~y,1));
}

int itterAdd(int a, int b)
{
	int c = 0;
	int result = 0;
	for (size_t i = 0; i < sizeof(int) * 8; ++i)
	{
		int d = (a & 1) ^ (b & 1) ^ c;
		c = (((a & 1) & ((b & 1) | c)) | (((a & 1) | c) & (b & 1)));
		a>>=1;
		b>>=1;
		result |= d << i;
	}
	return result;
}

int AddByMacro(const int a, const int b)
{
	int c = 0;
	int result = 0;
	for (size_t i = 0; i < sizeof(int) * 8; ++i)
	{
		int d = GET_BIT(a,i) ^ GET_BIT(b,i) ^ c;
		c = ((GET_BIT(a,i) & (GET_BIT(b,i) | c)) | ((GET_BIT(a,i) | c) & GET_BIT(b,i)));
		result |= d << i;
	}
	return result;
}

/*Multiply only for positive number's*/
unsigned multiply(unsigned a, unsigned b){
	unsigned result = 0;
	while (b > 0)
	{
		if (ONE_AND(b))
			result+=a;
	    a = ONE_LEFT_SHIFT(a);
	    b = ONE_RIGHT_SHIFT(b);
	}
	return result;
}

