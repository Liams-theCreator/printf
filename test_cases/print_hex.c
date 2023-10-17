#include "../main.h"
#include <stdio.h>
#include <limits.h>
#include <assert.h>

int main()
{
	int len_1, len_2;
/* ===========> %x <=========== */
	printf("----------------------\n");
	printf("-----> hex CASES <----\n");
	printf("----------------------\n");
	len_1 = printf("%x\n", 0);
	len_2 = _printf("%x\n", 0);
	assert(len_1 == len_2);

	len_2 = printf("%x\n", 255);
	len_1 = _printf("%x\n", 255);
	assert(len_1 == len_2);

	len_1 = printf("%x\n", UINT_MAX);
	len_2 = _printf("%x\n", UINT_MAX);
	assert(len_1 == len_2);

	/* ===========> %X <=========== */
	printf("----------------------\n");
	printf("-----> HEX CASES <----\n");
	printf("----------------------\n");
	len_1 = printf("%X\n", 0);
	len_2 = _printf("%X\n", 0);
	assert(len_1 == len_2);

	len_2 = printf("%X\n", 255);
	len_1 = _printf("%X\n", 255);
	assert(len_1 == len_2);

	len_1 = printf("%X\n", UINT_MAX);
	len_2 = _printf("%X\n", UINT_MAX);
	assert(len_1 == len_2);
	return (0);
}
