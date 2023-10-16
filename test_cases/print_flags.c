#include <stdio.h>
#include <limits.h>
#include "../main.h"

int main(void)
{
	long l;
	int len_1, len_2;

	/* Test the (+) with positive and negative integers */
	printf("----------------------\n");
	printf("-----> (+) FLAG <-----\n");
	printf("----------------------\n");
	len_1 = _printf("%+d\n", 123);
	len_2 = printf("%+d\n", 123);
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	len_1 = _printf("%+d\n", -123);
	len_2 = printf("%+d\n", -123);
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	len_1 = _printf("%+d\n", INT_MAX);
	len_2 = printf("%+d\n", INT_MAX);
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	len_1 = _printf("%+d\n", INT_MIN);
	len_2 = printf("%+d\n", INT_MIN);
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	l = INT_MAX + (long)1024;
	len_1 = _printf("%+d\n", l);
	len_2 = printf("%+d\n", l);
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	l = INT_MIN - (long)1024;
	len_1 = _printf("%+d\n", l);
	len_2 = printf("%+d\n", l);
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	len_1 = _printf("%+i\n", 0);
	len_2 = printf("%+i\n", 0);
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	/* Test the (space) with positive and negative integers */
	printf("----------------------\n");
	printf("----> (' ') FLAG <----\n");
	printf("----------------------\n");
	len_1 = _printf("% d\n", 123);
	len_2 = printf("% d\n", 123);
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	len_1 = _printf("% d\n", 0);
	len_2 = printf("% d\n", 0);
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	len_1 = _printf("% d\n", -123);
	len_2 = printf("% d\n", -123);
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	l = INT_MAX + (long)1024;
	len_1 = _printf("% d\n", l);
	len_2 = printf("% d\n", l);
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	l = INT_MIN - (long)1024;
	len_1 = _printf("% d\n", l);
	len_2 = printf("% d\n", l);
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	len_1 = _printf("% ");
	len_2 = printf("% ");
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);
	len_1 = _printf("% % % % ");
	printf("\n");
	len_2 = printf("% % % % ");
	printf("\n");
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	/* Test the (#) flag with [o, x, X ] conversion specifiers */
	printf("----------------------\n");
	printf("-----> (#) FLAG <-----\n");
	printf("----------------------\n");
	len_1 = _printf("%#o\n", 123);
	len_2 = printf("%#o\n", 123);
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	len_1 = _printf("%#o\n", 0);
	len_2 = printf("%#o\n", 0);
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	len_1 = _printf("dyali : %#u\n", UINT_MAX);
	len_2 = printf("dyaalhom : %#u\n", UINT_MAX);
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	len_1 = _printf("%#o\n", UINT_MAX);
	len_2 = printf("%#o\n", UINT_MAX);
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	len_1 = _printf("%#x\n", UINT_MAX);
	len_2 = printf("%#x\n", UINT_MAX);
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	len_1 = _printf("%#X\n", UINT_MAX);
	len_2 = printf("%#X\n", UINT_MAX);
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	len_1 = _printf("%#x\n", 123);
	len_2 = printf("%#x\n", 123);
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	len_1 = printf("%#x", 0);
	printf("\n");
	len_2 = _printf("%#x", 0);
	printf("\n");
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	len_1 = _printf("%#X\n", 123);
	len_2 = printf("%#X\n", 123);
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	len_1 = printf("%#X", 0);
	printf("\n");
	len_2 = _printf("%#X", 0);
	printf("\n");
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	/* Test combination of (space) & (+) with positive / negative int's */
	printf("----------------------\n");
	printf("-> (' ') & (+) FLAG <-\n");
	printf("----------------------\n");
	len_1 = _printf("% +d\n", 123);
	len_2 = printf("% +d\n", 123);
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	len_1 = 	printf("% +d + %+ d = % +i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("\n");
	len_2 = _printf("% +d + %+ d = % +i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("\n");
	printf("Current length:     [%d]\n", len_1);
	printf("Expected length:    [%d]\n", len_2);

	return (0);
}
