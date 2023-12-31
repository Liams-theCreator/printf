#include "../main.h"
#include <stdio.h>
#include <limits.h>
#include <assert.h>

int main()
{
	int len_2, len_1;
	/* ===========> %o <=========== */
	printf("----------------------\n");
	printf("----> OCTAL CASES <---\n");
	printf("----------------------\n");
	len_1 = printf("%o\n", 0);
	len_2 = _printf("%o\n", 0);
	assert(len_1 == len_2);

	len_2 = printf("%o\n", 255);
	len_1 = _printf("%o\n", 255);
	assert(len_1 == len_2);

	len_1 = printf("%o\n", UINT_MAX);
	len_2 = _printf("%o\n", UINT_MAX);
	assert(len_1 == len_2);
	
	return (0);
}
