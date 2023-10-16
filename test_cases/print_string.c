#include "../main.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	int len_1 = 0, len_2 = 0;

/* ===========> %s <=========== */
	printf("----------------------\n");
	printf("---> STRING CASES <---\n");
	printf("----------------------\n");
	len_1 = printf("Expected output:    %s\n", "Morocco");
	len_2 = _printf("Current output:     %s\n", "Morocco");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %s$\n", "");
	len_2 = _printf("Current output:     %s$\n", "");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %s\n", "hello, world");
	len_2 = _printf("Current output:     %s\n", "hello, world");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %sForLife\n", "Morocco");
	len_2 = _printf("Current output:     %sForLife\n", "Morocco");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	_printf("%\n");
	printf("%\n");
	_printf("");
	_printf("\n");
	_printf("%s\n", NULL);
	_printf("%%%c\n", 'X');
	_printf("%t\n");
	_printf("space : %  d\n", 2055);
	_printf("%+d\n", 55);
	_printf("%+i\n", 55);
	_printf("%+d\n", -20);
	_printf(NULL);
	
	return (0);
}
