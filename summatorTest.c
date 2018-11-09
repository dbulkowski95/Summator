#include <stdio.h>
#include "summator.h"
#include <criterion/criterion.h>

Test(addNKD, a_equal_b)
{
	unsigned first = 102;
	unsigned second = 102;
	cr_expect(add(first, second) == first + second, "Expect true");
}

Test(addNKD, a_greater_b)
{
	unsigned first = 129;
	unsigned second = 63;
	cr_expect(add(first, second) == first + second, "Expect true");
}

Test(addNKD, a_samller_b)
{
	unsigned first = 1;
	unsigned second = 254;
	cr_expect(add(first, second) == first + second, "Expect true");
}

Test(addNKD, a_and_b_zero)
{
	unsigned first = 0;
	unsigned second = 0;
	cr_expect(add(first, second) == first + second, "Expect true");
}

Test(addNKD, char_error)
{
	unsigned first = -23;
	unsigned second = 10;
	cr_expect(add(first, second) == first + second, "Expect true");
}

Test(addNKD, two_negative_char)
{
	unsigned first = -23;
	unsigned second = -10;
	cr_expect(add(first, second) == first + second, "Expect true");
}

Test(addNKD, hex)
{
	unsigned first = 0xff;
	unsigned second = 0x81;
	cr_expect(add(first, second) == first + second, "Expect true");
}
Test(U2, a_equal_b)
{
	int first = 102;
	int second = 102;
	cr_expect(U2add(first, second) == first + second, "Expect true");
}

Test(U2, a_greater_b)
{
	int first = 1024;
	int second = 102;
	cr_expect(U2add(first, second) == first + second, "Expect true");
}
Test(U2, a_samller_b)
{
	int first = 2;
	int second = 1012;
	cr_expect(U2add(first, second) == first + second, "Expect true");
}

Test(U2, a_and_b_zero)
{
	int first = 0;
	int second = 0;
	cr_expect(U2add(first, second) == first + second, "Expect true");
}

Test(U2, two_negative_char)
{
	int first = -30;
	int second = -1020;
	cr_expect(U2add(first, second) == first + second, "Expect true");
}

Test(subNKD, sub)
{
	int first = 10;
	int second = 7;
	cr_expect(sub(first, second) == first - second, "Expect true");
}
Test(subU2, sub)
{
	int first = -10;
	int second = -7;
	cr_expect(U2sub(first, second) == first - second, "Expect true");
}

Test(subU2, minus_zero)
{
	int first = -0;
	int second = -0;
	cr_expect(U2sub(first, second) == first - second, "Expect true");
}
Test(itterAdd, a_equal_b)
{
	unsigned first = 102;
	unsigned second = 10;
	cr_expect(itterAdd(first, second) == first + second, "Expect true");
}

Test(AddByMacro, a_equal_b)
{
	unsigned first = 102;
	unsigned second = 10;
	cr_expect(AddByMacro(first, second) == first + second, "Expect true");
}

Test(Multiply, a_equal_b)
{
	unsigned first = 10;
	unsigned second = 10;
	cr_expect(multiply(first, second) == first * second, "Expect true");
}

Test(Multiply, a_greater_b)
{
	unsigned first = 10;
	unsigned second = -10;
	cr_expect(multiply(first, second) == first * second, "Expect true");
}
