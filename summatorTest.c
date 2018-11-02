#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "summator.h"
#include <criterion/criterion.h>

Test(addNKD, a_equal_b)
{
	unsigned first = 102;
	unsigned second = 102;

	printf("%d\n", add(first, second));
}

Test(addNKD, a_greater_b)
{
	unsigned first = 129;
	unsigned second = 63;

	printf("%d\n", add(first, second));
}

Test(addNKD, a_samller_b)
{
	unsigned first = 1;
	unsigned second = 254;

	printf("%d\n", add(first, second));
}

Test(addNKD, a_and_b_zero)
{
	unsigned first = 0;
	unsigned second = 0;

	printf("%d\n", add(first, second));
}

Test(addNKD, char_error)
{
	unsigned first = -23;
	unsigned second = 10;

	printf("%d\n", add(first, second));
}

Test(addNKD, two_char_error)
{
	unsigned first = -23;
	unsigned second = -10;

	printf("%d\n", add(first, second));
}

Test(addNKD, hex)
{
	unsigned first = 0xff;
	unsigned second = 0x81;

	printf("%d\n", add(first, second));
}
