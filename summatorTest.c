#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "summator.h"
#include <criterion/criterion.h>

//Test(addNKD, a_equal_b)
//{
//	unsigned first = 102;
//	unsigned second = 102;
//
//	printf("%d\n", add(first, second));
//}
//
//Test(addNKD, a_greater_b)
//{
//	unsigned first = 129;
//	unsigned second = 63;
//
//	printf("%d\n", add(first, second));
//}
//
//Test(addNKD, a_samller_b)
//{
//	unsigned first = 1;
//	unsigned second = 254;
//
//	printf("%d\n", add(first, second));
//}
//
//Test(addNKD, a_and_b_zero)
//{
//	unsigned first = 0;
//	unsigned second = 0;
//
//	printf("%d\n", add(first, second));
//}
//
//Test(addNKD, char_error)
//{
//	unsigned first = -23;
//	unsigned second = 10;
//
//	printf("%d\n", add(first, second));
//}
//
//Test(addNKD, two_negative_char)
//{
//	unsigned first = -23;
//	unsigned second = -10;
//
//	printf("%d\n", add(first, second));
//}
//
//Test(addNKD, hex)
//{
//	unsigned first = 0xff;
//	unsigned second = 0x81;
//
//	printf("%d\n", add(first, second));
//}
//
//Test(U2, a_equal_b)
//{
//	int first = 102;
//	int second = 102;
//
//	printf("%d\n", U2add(first, second));
//}
//
//Test(U2, a_greater_b)
//{
//	int first = 1024;
//	int second = 102;
//
//	printf("%d\n", U2add(first, second));
//}
//
//Test(U2, a_samller_b)
//{
//	int first = 2;
//	int second = 1012;
//
//	printf("%d\n", U2add(first, second));
//}
//
//Test(U2, a_and_b_zero)
//{
//	int first = 0;
//	int second = 0;
//
//	printf("%d\n", U2add(first, second));
//}
//
//Test(U2, two_negative_char)
//{
//	int first = -30;
//	int second = -1020;
//
//	printf("%d\n", U2add(first, second));
//}

Test(subNKD, sub)
{
	int first = 10;
	int second = 7;

	printf("%d\n", sub(first, second));
}

Test(subU2, sub)
{
	int first = -10;
	int second = -7;

	printf("%d\n", U2sub(first, second));
}

Test(subU2, minus_zero)
{
	int first = -0;
	int second = -7;

	printf("%d\n", U2sub(first, second));
}
