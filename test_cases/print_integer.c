#include "../main.h"
#include <stdio.h>
#include <limits.h>
#include <assert.h>

int main()
{
	int len_1, len_2;

	/* ===========> %d <=========== */
	printf("----------------------\n");
	printf("--> INT(%d) CASES <---\n");
	printf("----------------------\n");
	len_1 = printf("%d\n", 0);
	len_2 = _printf("%d\n", 0);
	assert(len_1 == len_2);

	len_2 = printf("%d\n", INT_MIN);
	len_1 = _printf("%d\n", INT_MIN);
	assert(len_1 == len_2);

	len_1 = printf("%d\n", INT_MAX);
	len_2 = _printf("%d\n", INT_MAX);
	assert(len_1 == len_2);

	/* ===========> %i <=========== */
	printf("----------------------\n");
	printf("--> INT(%i) CASES <---\n");
	printf("----------------------\n");
	len_1 = printf("%i\n", 0);
	len_2 = _printf("%i\n", 0);
	assert(len_1 == len_2);

	len_2 = printf("%i\n", INT_MIN);
	len_1 = _printf("%i\n", INT_MIN);
	assert(len_1 == len_2);

	len_1 = printf("%i\n", INT_MAX);
	len_2 = _printf("%i\n", INT_MAX);
	assert(len_1 == len_2);

	return (0);
}
